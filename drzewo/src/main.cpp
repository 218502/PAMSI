#include <iostream>
#include "element.hh"
#include "stoper.hh"
#include "tree.hh"

using namespace std;

int main()
{
  tree *drzewko;
  drzewko=new tree;
  element e1,e2,e3;
  e1.key=1;
  e1.value=15;
  e2.key=2;
  e2.value=20;
  e3.key=3;
  e3.value=25;
  drzewko->add(e1);
  drzewko->add(e2);
  drzewko->add(e3);
  cout<<"element o kluczu 2 : "<<drzewko->find(2)->getel().value<<endl;
}
