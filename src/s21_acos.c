#include "s21_math.h"

long double s21_acos(double x) { return S21_M_PI_2 - s21_asin(x); }