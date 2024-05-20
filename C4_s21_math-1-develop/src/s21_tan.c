#include "s21_math.h"

long double s21_tan(double x) {
  // Нормализация угла в диапазоне [-π, π]
  x = s21_fmod(x, 2 * S21_M_PI);
  if (x > S21_M_PI)
    x -= 2 * S21_M_PI;
  else if (x < -S21_M_PI)
    x += 2 * S21_M_PI;

  // Обработка частных случаев
  if (x == S21_M_PI_2 || x == -S21_M_PI_2) {
    // Тангенс бесконечен при углах ±π/2
    return S21_INF;
  } else if (x == S21_M_PI || x == -S21_M_PI) {
    // Тангенс не определен при углах ±π
    return S21_NAN;
  }

  // Вычисление тангенса
  return s21_sin(x) / s21_cos(x);
}