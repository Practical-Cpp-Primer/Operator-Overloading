#include "counter.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
  Counter count1(10);
  Counter count2(12);
  Counter megaCount = count1 + count2;
  cout << "count1: " << count1.getCount() <<\
   "\ncount2: " << count2.getCount() <<\
   "\nmegaCount: " << megaCount.getCount() << endl;
  if ((++count1).getCount() > 10) {
    cout << "count1 is greater than 10!" << endl;
  }

  if ((count2++).getCount() == 12) {
    cout << "Check out what count2 is: " << count2.getCount() << endl;
  }
  return 0;
}