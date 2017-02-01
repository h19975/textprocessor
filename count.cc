#include <iostream>
#include <string>
#include "count.h"
#include <sstream>

using namespace std;


count::count(TextProcessor *tp, char c): Decorator{tp}, c{c}, time{0}  {}

void count::setSource(std::istream *inp) {
  component->setSource(inp);}

string count::getWord() {
  string s;
  s = component->getWord();
  int i = 0;
  int len = s.length();
  while (i < len) {
   if (s[i] == c) {
       time ++;
       ostringstream ss;
       ss << time;
       s = s.substr(0,i) + ss.str() + s.substr(i+1, len-1);
       len = s.length();
   i++;}
   else {i++;}}
  return s;
}
    
