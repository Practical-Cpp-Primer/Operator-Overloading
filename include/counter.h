#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
private:
  int count;

public:
  Counter();
  Counter(int);
  ~Counter();
  int getCount();
  int incrementCount();
  Counter operator+(Counter rhs);
  Counter operator++(int);
  Counter operator++();
  bool operator==(int);
};

#endif