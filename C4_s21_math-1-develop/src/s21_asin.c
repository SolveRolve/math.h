#include "s21_math.h"

long double s21_asin(double x) {
  long double sum = x;
  long double slog = x;
  int n = 1;

  if (s21_fabs(s21_fabs(x) - 1) < S21_EPS) {
    sum = S21_M_PI_2 * x;
  } else if (x < -1 || x > 1) {
    sum = S21_NAN;
  } else {
    while (s21_fabs(slog) > S21_EPS) {
      slog *= (x * x * (2. * n - 1) * (2. * n - 1)) / (2. * (2. * n + 1) * n);
      sum += slog;
      n++;
    }
  }

  return sum;
}
//
// Created by Brendon Arryn on 6/15/23.
//
