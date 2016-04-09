#include "stos.hh"
#include "lista.hh"


void Stos::push(int element)
{
  list.add(element,1);
    Size=list.size();
}
int Stos::pop()
{
    temp=list.get(1);
    list.remove(1);
    Size=list.size();
    return temp;
}
int Stos::size()
{
    return list.size();
}
