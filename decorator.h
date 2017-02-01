#ifndef _DECORATOR_H_
#define _DECORATOR_H_
#include "textprocess.h"


class Decorator: public TextProcessor {
 protected:
  TextProcessor *component;
 public:
  Decorator (TextProcessor *tp);
  virtual ~Decorator();
};

#endif
