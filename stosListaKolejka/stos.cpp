#include "stos.hh"
#include "lista.hh"


void Stos::push(int element)
{
  list.add(element);
}
int Stos::pop()
{
  pomocnicza=list.get(1);
  list.remove(1);
  return pomocnicza;
}
int Stos::size()
{
  return list.size();
}
