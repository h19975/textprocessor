#include "decorator.h"

Decorator::Decorator(TextProcessor *tp) : component{tp} {}

Decorator::~Decorator() {delete component;}
