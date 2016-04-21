#ifndef ASOCTAB_HH
#define ASOCTAB_HH
#include "hashtab.hh"
#include <string>

class asocTab
{
public:
  hashtab tablica;

  int operator [] (std::string key)
{
  return tablica.getItem(key);
}

};

#endif
