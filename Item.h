#ifndef _ITEM_H_
#define _ITEM_H_

#include <cstring>

using namespace std;

class Item{
 private:
  char description[80];

 public:
  Item(char descrip[80]);
  char* getDescription();
};

#endif
