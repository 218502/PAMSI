#include <iostream>
using namespace std;

class TabDyn{
  int rozmiar;
  int* wsk;//wskaznik na nasza tablice
  int* wsk2;//wskaznik pomocniczy do kopiowiania/powiekszania
public:
  void maketab()
  {
    rozmiar=5;
    wsk=new int[rozmiar];
  }
  void deltab()
  {
    delete[] wsk2;
  }
  void powieksz()
  {
    wsk2=wsk;
    rozmiar=rozmiar+1;
    wsk=new int[rozmiar];
    for(int i=0;i<(rozmiar-1);i++)
      wsk[i]=wsk2[i];
    deltab();
  }
  void wypisztab()
  {
  for(int i=0;i<rozmiar;i++)
    {
      cout<<wsk[i]<<endl;
    }
  }
  void wypelnij()// wypelnia tablice numerem indeksu+1
  {
    int s=600;
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
  TabDyn tab;
  tab.maketab();
  tab.wypelnij();
  tab.wypisztab();

}
