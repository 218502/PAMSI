#include "hashtab.hh"
#include "lista.hh"
#include "hashentry.hh"
#include <iostream>

void hashtab::putItem(std::string key, int value)
  {
    int hash;
    hash=5;
    HashEntry temp;
    for(int i=0;i<key.length();i++)
      {
	hash=2*hash+3*key[i];
      }
    hash=hash % (Size-1);
    temp.key=key;
    temp.value=value;
    tab[hash].add(temp,1);
  }
int hashtab::getItem(std::string key)
  {
    int hash;
    hash=5;
    HashEntry temp,temp2;
    for(int i=0;i<key.length();i++)
      {
	hash=2*hash+3*key[i];
      }
    hash=hash % (Size-1);
    for(int i=1;i<tab[hash].size()+1;i++)
      {
      if(tab[hash].get(i).key==key)
	temp2=tab[hash].get(i);
      }
    return temp2.value;
  }
