//
// Created by Brendon Arryn on 6/15/23.
//
#include "s21_math.h"
long double s21_sqrt(double x) {
  if (x < 0.0) {
    // Невозможно вычислить квадратный корень из отрицательного числа
    return S21_NAN;
  }

  if (x == 0.0 || x == 1.0) {
    // Квадратный корень из 0 и 1 равен самому числу
    return x;
  }

  long double guess = x / 2.0;
  long double prevGuess = 0.0;

  // Используем метод Ньютона для приближенного вычисления квадратного корня
  while (guess != prevGuess) {
    prevGuess = guess;
    guess = 0.5 * (guess + x / guess);
  }

  return guess;
}