#include "kolejka.hh"
#include "stos.hh"
#include "lista.hh"
#include <iostream>
using namespace std;
int main()
{
  Stos stos;
  stos.push(5);
  cout<<stos.pop()<<endl;
  stos.push(6);
  stos.push(7);
  cout<<stos.pop()<<endl;
}
