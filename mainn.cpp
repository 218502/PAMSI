#include <iostream>
#include<cstdio>
#include<ctime>
using namespace std;

class TabDyn{
  int rozmiar;
  int* wsk;//wskaznik na nasza tablice
  int* wsk2;//wskaznik pomocniczy do kopiowiania/powiekszania
public:
  void rozmiartab()
  {
    cout<<"Rozmiar:"<<rozmiar<<endl;
  }
  void maketab()
  {
    rozmiar=5;
    wsk=new int[rozmiar];
  }
  void deltab()
  {
    delete[] wsk;
  }
  void powieksz()
  {
    wsk2=wsk;
    rozmiar=rozmiar*3;
    wsk=new int[rozmiar];
    for(int i=0;i<(rozmiar/3);i++)
      wsk[i]=wsk2[i];
    delete[] wsk2;
  }
  void powieksz2()
  {
    wsk2=wsk;
    rozmiar=rozmiar+1;
    wsk=new int[rozmiar];
    for(int i=0;i<(rozmiar/2);i++)
      wsk[i]=wsk2[i];
    delete[] wsk2;
  }

  void wypisztab()
  {
  for(int i=0;i<rozmiar;i++)
    {
      cout<<wsk[i]<<endl;
    }
  }
  void wypelnij()// wypelnia tablice numerem indeksu+1 iloscia elementow s
  {
    int s=10;
    for(int i=0;i<s;i++)
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
  }
};


int main(){
  clock_t start;
  double czas;
  start=clock();
  TabDyn tab;
  tab.maketab();
  tab.wypelnij();
  czas=(clock() - start) / (double) CLOCKS_PER_SEC;
  tab.rozmiartab();
  cout<<endl;
  cout<<"czas trwania(s): "<<czas<<endl;

}
