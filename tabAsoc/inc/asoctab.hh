#ifndef ASOCTAB_HH
#define ASOCTAB_HH
#include "hashtab.hh"
#include <string>
class iasocTab
{
public:
  virtual void putItem(std::string,int)=0;
};



class asocTab : public iasocTab
{
public:
  hashtab tablica;

  int operator [] (std::string key)
{
  return tablica.getItem(key);
}
  virtual void putItem(std::string key, int value)
  {
    tablica.putItem(key,value);
  }
};

#endif
