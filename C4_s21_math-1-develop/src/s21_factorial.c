#include "s21_math.h"

long double s21_factorial(int x) {
  if (x < 0) {
    return 0;
  } else if (x == 0) {
    return 1;
  } else {
    long double factorial = 1;
    for (int i = 1; i <= x; i++) {
      factorial *= i;
    }
    return factorial;
  }
}