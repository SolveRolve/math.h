#include "s21_math.h"

long double s21_ceil(double x) {
  int intPart = (int)x;
  if (x > 0 && x != intPart) {
    intPart++;
  }
  return (long double)intPart;
}
