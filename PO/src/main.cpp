#include <iostream>
#include <cstdio>
#include <ctime>
#include "tab1d.hh"
#include "stoper.hh"
using namespace std;


int main(){
  clock_t start;
  Stoper czas;
  TabDyn tab;

  tab.maketab();
  czas.start();
  tab.wypelnij();
  czas.stop();
  tab.rozmiartab();
  czas.pokazCzas();

}
