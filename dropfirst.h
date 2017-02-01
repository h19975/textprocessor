#ifndef _DROPFIRST_H_
#define _ECHO_H_
#include "decorator.h"
#include <iostream>
#include <string>

class dropfirst:public Decorator {
  int drop;
 public:
   dropfirst(TextProcessor *tp, int n);
   void setSource(std::istream *inp) override;
   std::string getWord() override;
};
#endif
