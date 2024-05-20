//
// Created by Brendon Arryn on 6/15/23.
//
#include "s21_math.h"
// работа со значениями углов в радианах, которые могут выходить за пределы
// диапазона от -π до π.
long double loer(double x) {
  while (x > S21_M_PI || x < -S21_M_PI) {
    x += x > S21_M_PI ? -2 * S21_M_PI : 2 * S21_M_PI;
  }
  return x;
}
// косинус через формулу к синусу
long double s21_cos(double x) {
  x = loer(x);
  return s21_sin((S21_M_PI / 2.0) - x);
}