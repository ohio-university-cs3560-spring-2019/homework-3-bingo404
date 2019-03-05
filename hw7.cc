
#include <cmath>
#include <cstdarg>
#include "hw7.h"
double stddev(int n, ...)
{
  int item;  // this is the value of each item of the set
  double mean; // this is the average of the set
  double total = 0;
  double variance = 0; // this is the variance of the set

  va_list args;
  va_start(args, n);
  for (size_t i = 0; i < n; ++i)
    {
      total += va_arg(args, int);
    }
  va_end(args);

  mean  = total / n;


  va_start(args, n);
  for (size_t i = 0; i < n; ++i)
    {
      item  = va_arg(args, int);
      variance += ((item  - mean) * (item  - mean));
    }
  va_end(args);

  return sqrt(variance)/n;
}

