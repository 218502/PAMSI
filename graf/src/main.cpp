#include <iostream>
#include "graphsearch.hh"
#include "stoper.hh"
#include <cstdlib>

using namespace std;

int main()
{
  int X=100;
  Stoper pomiar;
  graphSearch *graf=new graphSearch;

  cout<<"Ustawianie wierzcholkow"<<endl;
  for(int i=0;i<X;i++)
    graf->addVertex(i);

  cout<<"Ustawianie krawedzi"<<endl;
  for(int i=0;i<X;i++)
    graf->addEdge(i,i+1);
  graf->addEdge(0,X-1);
  cout<<"Dodawanie losowych krawedzi stanowiacych 10% liczby wierzcholkow"<<endl;
  for(int i=0;i<(X/10);i++)
    graf->addEdge(rand()%X,rand()%X);

  pomiar.start();
  graf->findPathBFS(0,rand()%X);
  pomiar.stop();
  cout<<"BFS :";
  pomiar.pokazCzas();

  pomiar.start();
  graf->findPathDFS(0,rand()%X);
  pomiar.stop();
  cout<<"DFS :";
  pomiar.pokazCzas();

}
