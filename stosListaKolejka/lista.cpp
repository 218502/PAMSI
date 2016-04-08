#include "lista.hh"
#include "node.hh"
#include <iostream>
using namespace std;
List::List()
{
  //poczatek->nastepny=0;
  //koniec=0;
  Size=0;
}
int List::add(int element, int position)
{
  if(size()==0)
    {
      temp=new node;
      temp->element=element;
      temp->nastepny=0;
      head=temp;
    }else
    {
      if(position<Size+2)
	{
	  if(position==1)
	    {
	      temp=new node;
	      temp->element=element;
	      temp->nastepny=head;
	      head=temp;
	    }else
	    {
	      ;
	    }
	}
    }
  Size++;
}
void List::remove(int position)
{
  if(position==1)
    {
      temp=head;
      head=head->nastepny;
    }else
    {
      ;
    }
  Size--;
}
int List::get(int position)
{
  if(position==1)
    {
      return head->element;
    }else
    {
      temp=head;
      for(int i=1;i<position;i++)
	{
	  temp=temp->nastepny;
	}
      return temp->element;
    }
}
int List::size()
    {
      return Size;
    }
