#ifndef _ALLCAPS_H_
#define _ALLCAPS_H_
#include <iostream>
#include <string>
#include "decorator.h"

class allcaps:public Decorator {
  public:
   allcaps(TextProcessor *tp);
   void setSource(std::istream *inp) override;
   std::string getWord() override;
   
};
  

#endif 
