#include "s21_math.h"
// работа со значениями углов в радианах, краевые случаи
// диапазона от -S21_M_PI до S21_M_PI.
long double awdawd(double x) {
  while (x > S21_M_PI || x < -S21_M_PI) {
    x += x > S21_M_PI ? -2 * S21_M_PI : 2 * S21_M_PI;
  }
  return x;
}

// вычисляю рядом Тэйлора.
long double s21_sin(double x) {
  x = awdawd(x);
  long double y = x, rez = x;
  for (long double i = 1; s21_fabs(rez) > S21_EPS; i++) {
    rez = -rez * x * x / (2 * i * (2 * i + 1));
    y += rez;
  }
  return y;
}