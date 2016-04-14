#include "list.hh"
#include "stack.hh"
#include "queue.hh"
#include "stoper.hh"
#include "node.hh"
#include <iostream>
#include <cstdlib>

using namespace std;
void Sortowanie(int* wsk, int left, int right)
{
    int i = left;
    int j = right;
    int x = wsk[(left+right)/2];
    do
    {
        while(wsk[i]<x)
             i++;
       
        while(wsk[j]>x)
             j--;
       
        if(i<=j)
        {
            swap(wsk[i], wsk[j]);
            i++;
            j--;
        }
    } while(i<=j);
   
    if(left<j)
      Sortowanie( wsk, left, j );

    if( right > i )
      Sortowanie( wsk, i, right );
   
}

int main()
{
  int *tab;
  tab=0;
  queue kolejka(1);
  stoper k;
  int temp1, temp2;
  kolejka.enqueue(10);
  kolejka.enqueue(100);
  kolejka.enqueue(1000);
  kolejka.enqueue(1000000);
  kolejka.enqueue(100000000);
  for(int j=0;j<5;j++)
    {
  temp1=kolejka.dequeue();
  delete[] tab;
  tab=new int[temp1];
  cout<<"wartosc"<<temp1<<endl;
  for(int i=0;i<temp1;i++)
{
  tab[i]=rand();
}

  k.start();
  Sortowanie(tab,0,temp1-1);
  k.finish();
  cout<<"czas dla "<<temp1<<" :"<<endl;
  k.get_time();
  }
  
  return 0;
}
