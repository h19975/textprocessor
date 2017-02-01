#ifndef _COUNT_H_
#define _ECHO_H_
#include "decorator.h"
#include <iostream>
#include <string>

class count:public Decorator {
  char c;
  int time;
 public:
  void setSource(std::istream *inp) override;
  count(TextProcessor *tp, char c);
  std::string getWord() override;
};

#endif
