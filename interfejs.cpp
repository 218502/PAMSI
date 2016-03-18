#include <iostream>
#include<cstdio>
#include<ctime>
using namespace std;


class Stoper{
  clock_t trwanie;
  double czas;
public:
  void start(){
  trwanie=clock();
  }

  void stop(){
  czas=(clock() - trwanie) / (double) CLOCKS_PER_SEC;
  }
  void pokazCzas(){
    cout<<"Czas trwania: "<<czas<<endl;
  }
};


  class Interfejs{
  public:
    virtual void przygotuj(int zl) = 0;
    virtual void wykonaj() = 0;
  };


class TabDyn : public Interfejs
{
  long long int rozmiar;
  long long int r;
  int zloz;//zlozonosc obliczeniowa
  int* wsk;//wskaznik na nasza tablice
  int* wsk2;//wskaznik pomocniczy do kopiowiania/powiekszania
public:
  void rozmiartab()
  {
    cout<<"Rozmiar:"<<rozmiar<<endl;
  }
  TabDyn()
{
    rozmiar=5;
    wsk=new int[rozmiar];
  }
  virtual void przygotuj(int zlozonosc){
    zloz=zlozonosc;
  }

  void skasuj()
  {
    delete[] wsk;
    wsk=NULL;
  }
  void powieksz()
  {
    wsk2=wsk;
    r=rozmiar;
    rozmiar=rozmiar*2;
    wsk=new int[rozmiar];
    for(long long int i=0;i<r;i++)
      wsk[i]=wsk2[i];
    delete[] wsk2;
  }
  void powieksz2()
  {
    wsk2=wsk;
    rozmiar=rozmiar+1;
    wsk=new int[rozmiar];
    for(long long int i=0;i<(rozmiar/2);i++)
      wsk[i]=wsk2[i];
    delete[] wsk2;
  }

  void wypisztab()
  {
  for(long long int i=0;i<rozmiar;i++)
    {
      cout<<wsk[i]<<endl;
    }
  }
  virtual void wykonaj()// wypelnia tablice numerem indeksu+1 iloscia elementow s
  {;
    for(long long int i=0;i<zloz;i++)
      {
	if(rozmiar>i)
	  {
	wsk[i]=i+1;
	  }
	else
	  {
	    powieksz();
	    wsk[i]=i+1;
	  }
      }
    skasuj();
  }
};


int main(){
  Interfejs *a = new TabDyn;
  Stoper T;
  int zl;//zlozonosc obliczeniowa problemu
  zl=10000000;

  a->przygotuj(zl);
  T.start();
  a->wykonaj();
  T.stop();
  T.pokazCzas();
}
