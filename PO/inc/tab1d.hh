#ifndef TAB1D_HH
#define TAB1D_HH
#include "itab1d.hh"
class TabDyn :public iTabDyn
{
  int rozmiar;
  int* wsk;//wskaznik na nasza tablice
  int* wsk2;//wskaznik pomocniczy do kopiowiania/powiekszania
public:
  void rozmiartab();
  void maketab();
  void deltab();
  void powieksz();
  void powieksz2();
  void wypisztab();
  void wypelnij();
};
#endif
