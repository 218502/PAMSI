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
  lista.remove(1);
  lista.add(25,lista.size());
  for(int i=1;i<=lista.size();i++)
    cout<<lista.get(i)<<endl;
}
