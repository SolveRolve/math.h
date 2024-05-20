#include "s21_math.h"
//остаток операции деления с плавающей точкой//
long double s21_fmod(double x, double y) { return x - (int)(x / y) * y; }