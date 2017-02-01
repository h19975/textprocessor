#ifndef _ECHO_H_
#define _ECHO_H_
#include <iostream>
#include <string>
#include "textprocess.h"

class Echo: public TextProcessor {
 std::istream *source;
 bool failed;
 public:
  Echo();
  void setSource(std::istream *inp);
  std::string getWord() override;
};

#endif 
