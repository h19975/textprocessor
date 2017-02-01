#include <iostream>
#include <string>
#include "doublewords.h"
using namespace std;

doublewords::doublewords(TextProcessor *tp) : Decorator{tp}, temp{""} {}

void doublewords::setSource(std::istream *inp) {
  component->setSource(inp);}


string doublewords::getWord() {
 if (temp == "") {
 string s;
 s = component->getWord();
 temp = s;
 return s; }
 else {string s = temp; temp = ""; return s;}
}
