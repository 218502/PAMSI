#include "kolejka.hh"
#include "stos.hh"
#include "lista.hh"
#include <iostream>
using namespace std;
int main()
{
  Queue kolejka;
  kolejka.push(500);
  kolejka.push(600);
  cout<<kolejka.pop()<<endl;
  cout<<kolejka.pop()<<endl;
}
