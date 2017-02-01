#ifndef _DOUBLEWORDS_H_
#define _DOUBLEWORDS_H_
#include "decorator.h"
#include <iostream>
#include <string>

class doublewords: public Decorator {
  std::string temp;
 public:
  doublewords(TextProcessor *tp);
  void setSource(std::istream *inp) override;
  std::string getWord() override;
};

#endif
