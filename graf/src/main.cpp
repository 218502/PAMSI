#include <iostream>
#include "graphsearch.hh"
#include "stoper.hh"
#include <cstdlib>

using namespace std;

int main()
{
  graphSearch *graf=new graphSearch;
  for(int i=0;i<7;i++)
    graf->addVertex(i);
  for(int i=0;i<6;i++)
    graf->addEdge(i,i+1);
  graf->addEdge(6,0);
  graf->addEdge(1,6);
  //graf->addEdge(1,4);
  graf->findPathBFS(1,3);

}
