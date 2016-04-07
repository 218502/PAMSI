#include "kolejka.hh"
#include "stos.hh"
#include "lista.hh"
int main()
{
  InterfaceStos *a = new Stos;// nowy obiekt typu stos
  a->push(5);
  a->pop();
}
