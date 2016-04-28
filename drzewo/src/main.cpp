#include <iostream>
#include "element.hh"
#include "stoper.hh"
#include "tree.hh"
#include <cstdlib>

using namespace std;

int main()
{
  const int sup=30000000;// zlozonosc obliczeniowa
  tree *drzewko;
  Stoper s;
  drzewko=new tree;
  element e1;

  for(int i=0;i<sup;i++)
    {
      e1.key=rand();
      drzewko->add(e1);
    }
  s.start();
  drzewko->find(e1.key);
  s.stop();
  s.pokazCzas();
}
