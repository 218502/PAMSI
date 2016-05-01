#include "graphsearch.hh"
#include <iostream>

bool graphSearch::DFS(int x)
{
  visited[x]=true;
  S.add(x,1);
  if(x==vk) return true;

  List p=sgraph.getNeighbors(x);

  for(int i=1;i<p.size()+1;i++)
    if(!visited[p.get(i)] && DFS(p.get(i)))
      return true;
  S.remove(1);
  return false;
}

void graphSearch::BFS(int x)
{
  S.add(x,1);
  visited[x]=true;

  while(S.size())
    {
      x=S.get(S.size());
      S.remove(S.size());
      
      std::cout<<"wierzcholek :"<<x<<std::endl;
      List p=getNeighbors(x);
      for(int i=1;i<p.size()+1;i++)
	if(!visited[p.get(i)])
	  {
	    S.add(p.get(i),1);
	    visited[p.get(i)]=true;
	  }
    }
}
void graphSearch::findPathDFS(int x, int y)
{
  vk=y;
  for(int i=0;i<1000000;i++)
    visited[i]=0;

  if(!DFS(x))
    std::cout<<"BRAK"<<std::endl;
  else
    while(S.size())
      {
	std::cout<<S.get(1)<<std::endl;
	S.remove(1);
      }
}

void graphSearch::findPathBFS(int x, int y)
{
  ;
}
