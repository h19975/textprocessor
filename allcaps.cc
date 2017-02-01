#include <iostream>
#include <string>
#include "allcaps.h"
using namespace std;

allcaps::allcaps(TextProcessor *tp): Decorator{tp} {}

void allcaps::setSource(std::istream *inp) {
   component->setSource(inp);}

string allcaps::getWord() {
 string s;
 s = component->getWord();
 int len = s.length();
 int i = 0;
 while (i < len) {
  s[i] = toupper(s[i]);
  i++;}
 return s;
}
