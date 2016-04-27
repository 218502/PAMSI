#include <iostream>
#include "element.hh"
#include "stoper.hh"
#include "tree.hh"
#include <cstdlib>

using namespace std;

int main()
{
  const int sup=10000000;// zlozonosc obliczeniowa
  tree *drzewko;
  Stoper s;
  drzewko=new tree;
  element e1;

  s.start();
  for(int i=0;i<sup;i++)
    {
      e1.key=rand();
      drzewko->add(e1);
    }
  s.stop();
  s.pokazCzas();
}
