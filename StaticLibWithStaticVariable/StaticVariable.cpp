#include "StaticVariable.h"
#include <iostream>
static int myStaticVariable = 0;

void printAndIncrementStaticVariable()
{
  std::cout << myStaticVariable++ << "\n";
}