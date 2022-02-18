#include "StaticVariable.h"
#include <iostream>
static int myStaticVariable = 0; //This might be a singleton instance or similar

void printAndIncrementStaticVariable()
{
  std::cout << __FILE__ << ":L" << __LINE__ << ": Value of static variable changed from " << myStaticVariable++ << " to " << myStaticVariable << "\n";
}