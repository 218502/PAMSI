#include "lista.hh"
#include "node.hh"
#include <iostream>
using namespace std;
List::List()
{
  //poczatek=0;
  //koniec=0;
  //rozmiar=0;
}
int List::add(int element)
    {
      pomocnicza=new node;
      pomocnicza->element=element;
      if(rozmiar==0)
	{
	  poczatek=pomocnicza;
	}else
	{
	  pomocnicza->nastepny=poczatek;
	  poczatek=pomocnicza;
	}
      rozmiar++;
    }
void List::remove()
{
  if(rozmiar>0)
    {
      pomocnicza=poczatek;
      poczatek=poczatek->nastepny;
      delete(pomocnicza);
      rozmiar--;
    }
}
int List::get()
{
  if(rozmiar>0)
    return poczatek->element;
}
int List::size()
    {
      return rozmiar;
    }
