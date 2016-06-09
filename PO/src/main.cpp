#include <iostream>
#include <cstdio>
#include <ctime>
#include "tab1d.hh"
#include "stoper.hh"
using namespace std;


int main(){
  iStoper *czas=new Stoper;
  iTabDyn *tab=new TabDyn;

  tab->maketab();
  czas->start();
  tab->wypelnij();
  czas->stop();
  tab->rozmiartab();
  czas->pokazCzas();

}
