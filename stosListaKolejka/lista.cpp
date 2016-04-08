#include "lista.hh"
#include "node.hh"
#include <iostream>
using namespace std;
List::List()
{
  //poczatek=0;
  //koniec=0;
  rozmiar=0;
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
void List::remove(int position)
{
  if(position<=rozmiar)
    {
      if(position==1)
	{
	  delete(poczatek);
	}else
	{
	  for(int i=1;i<position;i++)
	    {
	      pomocnicza=pomocnicza2;
	      pomocnicza2=pomocnicza2->nastepny;
	    }
	  pomocnicza->nastepny=pomocnicza2;
	  delete(pomocnicza2);
	}
    }
  rozmiar--;
}
int List::get(int position)
{
  if(position<=rozmiar)
    {
      pomocnicza2=poczatek;
      for(int i=1;i<position;i++)
	{
	  pomocnicza2=pomocnicza2->nastepny;
	}
      return pomocnicza2->element;
    }
}
int List::size()
    {
      return rozmiar;
    }
