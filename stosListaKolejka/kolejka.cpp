#include "kolejka.hh"
#include "lista.hh"

void Queue::push(int element)
{
  lista.add(element,lista.size()+1);
  Size=lista.size();
}
int Queue::pop()
{
  temp=lista.get(1);
  lista.remove(1);
  Size=lista.size();
  return temp;
}
int Queue::size()
{
  return Size;
}
