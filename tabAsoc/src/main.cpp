#include <iostream>
#include "hashtab.hh"
#include "lista.hh"
#include "hashentry.hh"
#include "asoctab.hh"
#include <string>
#include "stoper.hh"
using namespace std;



int main()
{
  /*  hashtab tablica;
  tablica.putItem("hej",10);
  tablica.putItem("hejo",100);
  tablica.putItem("hejko",1000);
  cout<<"wartosc: "<<tablica.getItem("hej")<<endl;
  cout<<"wartosc: "<<tablica.getItem("hejo")<<endl;
  cout<<"wartosc: "<<tablica.getItem("hejko")<<endl;
  */
  asocTab tab;
  int S;
  int tempval;
  string tempstr;
  Stoper stoper;

  S=100000000;
  stoper.start();
  for(int i=0;i<S;i++)
    {
    cin>>tempstr;
    cin>>tempval;
  tab.putItem(tempstr,tempval);
    }
  stoper.stop();
  stoper.pokazCzas();

  stoper.start();
  cout<<"wartosc: "<<tab["faxon"]<<endl;
  stoper.stop();
  stoper.pokazCzas();
  
}
