#include "dropfirst.h"
#include <string>
#include <iostream>
using namespace std;


dropfirst::dropfirst(TextProcessor *tp, int n): Decorator{tp}, drop{n} {}

void dropfirst::setSource(std::istream *inp) {
  component->setSource(inp);
}

string dropfirst::getWord() {
  string s;
  s = component->getWord();
  if (drop >= s.length()) s = getWord();
  int len = s.length() - drop;
  s = s.substr(drop, len);
  return s;
}
 

