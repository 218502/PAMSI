#include "kolejka.hh"
#include "lista.hh"

void Queue::push(int element)
{
  lista.add(element);
}
int Queue::pop()
{
  pomocnicza=lista.get(lista.size());
  lista.remove(lista.size());
  return pomocnicza;
}
int Queue::size()
{
  ;
}
