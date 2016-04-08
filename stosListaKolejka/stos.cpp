#include "stos.hh"
#include "lista.hh"


void Stos::push(int element)
{
  list.add(element);
}
int Stos::pop()
{
  pomocnicza=list.get();
  list.remove();
  return pomocnicza;
}
int Stos::size()
{
  return list.size();
}
