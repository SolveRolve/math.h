#ifndef S21_MATH_H
#define S21_MATH_H

#define INT_MIN -2147483648
#define S21_M_PI 3.14159265358979323846   /* pi */
#define S21_M_PI_2 1.57079632679489661923 /* pi/2 */
#define S21_NAN 0. / 0.
#define S21_INF (1.0 / 0.0)          /* плюс бесконечность */
#define S21_NEG_INF (-1.0 / 0.0)     /* минус бесконечность */
#define S21_E 2.71828182845904523536 /* e */
#define S21_NEGZERO -0.0
#define S21_EPS 1e-17
#define S21_ln10 2.30258509299404590109
#define S21_MAX_double 1.7976931348623157e308
#include <stdio.h>

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_tan(double x);
long double s21_sqrt(double x);
long double s21_factorial(int x);

#endif // S21_MATH_H
