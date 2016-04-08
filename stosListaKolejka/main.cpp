#include "kolejka.hh"
#include "stos.hh"
#include "lista.hh"
#include <iostream>
using namespace std;
int main()
{
  List lista;
  lista.add(10,1);
  lista.add(15,1);
  lista.add(20,1);
  lista.add(25,1);
  cout<<lista.get(4)<<endl;
  cout<<"rozmiar= "<<lista.size()<<endl;
}
