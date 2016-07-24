#include "counter.h"

Counter::Counter() {
  count = 0;
}

Counter::~Counter(){}

Counter::Counter(int count) {
  this -> count = count;
}

Counter Counter::operator+(Counter rhs) {
  Counter newCount(this -> getCount() + rhs.getCount());
  return newCount;
}

int Counter::getCount() {
  return count;
}

Counter Counter::operator++() {
  ++count;
  return *this;
}

Counter Counter::operator++(int num) {
  Counter tmp = *this;
  operator++();
  return tmp;
}

bool Counter::operator==(int rhs) {
  return getCount() == rhs;
}