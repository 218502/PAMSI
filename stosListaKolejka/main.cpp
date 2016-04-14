#include "kolejka.hh"
#include "stos.hh"
#include "lista.hh"
#include "stoper.hh"
#include <iostream>
using namespace std;
int main()
{
  List lista;
  Queue kolejka;
  Stoper k;
  int temp1, temp2;
  kolejka.push(10);
  kolejka.push(100);
  kolejka.push(1000);
  kolejka.push(1000000);
  kolejka.push(100000000);

  for(long long int j=0;j<5;j++)
    {
    temp2=1;
  temp1=kolejka.pop();
  cout<<"wartosc"<<temp1<<endl;
  for(long long int i=0;i<temp1;i++)
    lista.add(i,1);
  k.start();
 while(temp2!=0)
    {
      temp2=lista.get(1);
      lista.remove(1);
    }
  k.stop();
  cout<<"czas dla "<<temp1<<" :"<<endl;
  k.pokazCzas();
  }
  
}
