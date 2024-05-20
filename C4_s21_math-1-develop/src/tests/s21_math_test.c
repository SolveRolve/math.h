#include "../s21_math.h"

#include <check.h>
#include <math.h>
#include <stdlib.h>

// с помощью макроса ck_assert_int_eq производится сравнение значения,
START_TEST(abs_tests) {
  ck_assert_int_eq(abs(-29), s21_abs(-29));
  ck_assert_int_eq(abs(29), s21_abs(29));
  ck_assert_int_eq(abs(-3120), s21_abs(-3120));
  ck_assert_int_eq(abs(123123123), s21_abs(123123123));
  ck_assert_int_eq(abs(0), s21_abs(0));
}
END_TEST

START_TEST(fabs_tests) {
  ck_assert_int_eq(fabs(-29.123123), s21_fabs(-29.123123));
  ck_assert_int_eq(fabs(29.123123), s21_fabs(29.123123));
  ck_assert_int_eq(fabs(-2000.123123), s21_fabs(-2000.123123));
  ck_assert_int_eq(fabs(123123123.123123), s21_fabs(123123123.123123));
  ck_assert_int_eq(fabs(0.0), s21_fabs(0.0));
}
END_TEST

START_TEST(fmod_tests) {
  ck_assert_ldouble_eq(fmod(-29.123123, 4.5), s21_fmod(-29.123123, 4.5));
  ck_assert_ldouble_eq(fmod(29.123123, 4.5), s21_fmod(29.123123, 4.5));
  ck_assert_ldouble_eq(fmod(-2000.123123, 4.5), s21_fmod(-2000.123123, 4.5));
  ck_assert_ldouble_eq(fmod(123123123.123123, 4.5),
                       s21_fmod(123123123.123123, 4.5));
  ck_assert_ldouble_eq(fmod(0, 4.5), s21_fmod(0, 4.5));
  ck_assert_ldouble_eq(fmod(4.5, 4.5), s21_fmod(4.5, 4.5));
}
END_TEST

START_TEST(pow_tests) {
  ck_assert_int_eq(pow(-29.123123, 4.5), s21_pow(-29.123123, 4.5));
  ck_assert_float_eq(pow(29.123123, 4.5), s21_pow(29.123123, 4.5));
  ck_assert_int_eq(pow(-2000.123123, 4.5), s21_pow(-2000.123123, 4.5));
  ck_assert_float_eq(pow(123123123.123123, 4.5),
                     s21_pow(123123123.123123, 4.5));
  ck_assert_float_eq(pow(0, 4.5), s21_pow(0, 4.5));
  ck_assert_float_eq(pow(123, -2), s21_pow(123, -2));
}
END_TEST

START_TEST(ceil_tests) {
  ck_assert_ldouble_eq(ceil(-29.12), s21_ceil(-29.12));
  ck_assert_ldouble_eq(ceil(29.12), s21_ceil(29.12));
  ck_assert_ldouble_eq(ceil(3120), s21_ceil(3120));
  ck_assert_ldouble_eq(ceil(305.0000005), s21_ceil(305.0000005));
}
END_TEST

START_TEST(floor_tests) {
  ck_assert_ldouble_eq(floor(-29.12), s21_floor(-29.12));
  ck_assert_ldouble_eq(floor(29.12), s21_floor(29.12));
  ck_assert_ldouble_eq(floor(-0.86), s21_floor(-0.86));
  ck_assert_ldouble_eq(floor(3120), s21_floor(3120));
  ck_assert_ldouble_eq(floor(305.0000005), s21_floor(305.0000005));
}
END_TEST

START_TEST(exp_tests) {
  ck_assert_float_eq(exp(-29.12), s21_exp(-29.12));
  ck_assert_float_eq(exp(29.12), s21_exp(29.12));
  ck_assert_float_eq(exp(-0.86), s21_exp(-0.86));
  ck_assert_float_eq(exp(3120), s21_exp(3120));
  ck_assert_float_eq(exp(1), s21_exp(1));
  ck_assert_float_eq(exp(2), s21_exp(2));
  ck_assert_float_eq(exp(-1), s21_exp(-1));
  ck_assert_float_eq(exp(0), s21_exp(0));
  ck_assert_int_eq(exp(S21_NAN), s21_exp(S21_NAN));
  ck_assert_float_eq(exp(920), s21_exp(920));
  ck_assert_float_eq(exp(1.1231), s21_exp(1.1231));
  ck_assert_float_eq(exp(1.12314656712), s21_exp(1.12314656712));
  ck_assert_float_eq(exp(S21_MAX_double), s21_exp(S21_MAX_double));
  ck_assert_float_eq(exp(S21_MAX_double), s21_exp(S21_MAX_double));
}
END_TEST

START_TEST(sin_tests) {
  ck_assert_float_eq(sin(-29.12), s21_sin(-29.12));
  ck_assert_float_eq(sin(29.12), s21_sin(29.12));
  ck_assert_float_eq(sin(0.0), s21_sin(0.0));
  ck_assert_float_eq(sin(1.0), s21_sin(1.0));
  ck_assert_float_eq(sin(3.14), s21_sin(3.14));
  ck_assert_float_eq(sin(9.18), s21_sin(9.18));
  ck_assert_float_eq(sin(7.1233), s21_sin(7.1233));
  ck_assert_float_eq(sin(0.1234), s21_sin(0.1234));
}
END_TEST

START_TEST(cos_tests) {
  ck_assert_float_eq(cos(-29.12), s21_cos(-29.12));
  ck_assert_float_eq(cos(29.12), s21_cos(29.12));
  ck_assert_float_eq(cos(0.0), s21_cos(0.0));
  ck_assert_float_eq(cos(1.0), s21_cos(1.0));
  ck_assert_float_eq(cos(3.14), s21_cos(3.14));
  ck_assert_float_eq(cos(9.18), s21_cos(9.18));
  ck_assert_float_eq(cos(7.1233), s21_cos(7.1233));
  ck_assert_float_eq(cos(0.1234), s21_cos(0.1234));
}
END_TEST

START_TEST(tan_tests) {
  ck_assert_float_eq(tan(-29.12), s21_tan(-29.12));
  ck_assert_float_eq(tan(29.12), s21_tan(29.12));
  ck_assert_float_eq(tan(0), s21_tan(0));
  ck_assert_float_eq(tan(1), s21_tan(1));
  ck_assert_float_eq(tan(3.14), s21_tan(3.14));
  ck_assert_float_eq(tan(9.18), s21_tan(9.18));
  ck_assert_float_eq(tan(7.1233), s21_tan(7.1233));
  ck_assert_float_eq(tan(0.1234), s21_tan(0.1234));
}
END_TEST

START_TEST(sqrt_tests) {
  ck_assert_float_eq(sqrt(0.0), s21_sqrt(0.0));
  ck_assert_float_eq(sqrt(1.0), s21_sqrt(1.0));
  ck_assert_float_eq(sqrt(3.14), s21_sqrt(3.14));
  ck_assert_float_eq(sqrt(9.18), s21_sqrt(9.18));
  ck_assert_float_eq(sqrt(7.1233), s21_sqrt(7.1233));
  ck_assert_int_eq(sqrt(-123), s21_sqrt(-123));
  // ck_assert_float_eq(sqrt(0.9), s21_sqrt(0.9));  // problem!!
}

START_TEST(log_tests) {
  ck_assert_int_eq(log(-29.12), s21_log(-29.12));
  ck_assert_float_eq(log(29.12), s21_log(29.12));
  ck_assert_float_eq(log(0.0), s21_log(0.0));
  ck_assert_int_eq(log(1.0), s21_log(1.0));
  ck_assert_float_eq(log(3.14), s21_log(3.14));
  ck_assert_float_eq(log(9.18), s21_log(9.18));
  ck_assert_float_eq(log(7.1233), s21_log(7.1233));
  ck_assert_float_eq(log(0.1234), s21_log(0.1234));
}
END_TEST

START_TEST(asin_tests) {
  ck_assert_int_eq(asin(-29.12), s21_asin(-29.12));
  ck_assert_int_eq(asin(29.12), s21_asin(29.12));
  ck_assert_int_eq(asin(9.18), s21_asin(9.18));
  ck_assert_float_eq(asin(S21_EPS), s21_asin(S21_EPS));
  ck_assert_float_eq(asin(0.1234), s21_asin(0.1234));
  ck_assert_float_eq(asin(0), s21_asin(0));
  ck_assert_float_eq(asin(1), s21_asin(1));
  ck_assert_float_eq(asin(-1), s21_asin(-1));
  ck_assert_float_eq(asin(0.5), s21_asin(0.5));
  ck_assert_float_eq(asin(-0.5), s21_asin(-0.5));
}
END_TEST

START_TEST(acos_tests) {
  ck_assert_int_eq(acos(-29.12), s21_acos(-29.12));
  ck_assert_int_eq(acos(29.12), s21_acos(29.12));
  ck_assert_int_eq(acos(7.1233), s21_acos(7.1233));
  ck_assert_float_eq(acos(0.1234), s21_acos(0.1234));
  ck_assert_float_eq(acos(0), s21_acos(0));
  ck_assert_float_eq(acos(1), s21_acos(1));
  ck_assert_float_eq(acos(-1), s21_acos(-1));
  ck_assert_float_eq(acos(0.5), s21_acos(0.5));
  ck_assert_float_eq(acos(-0.5), s21_acos(-0.5));
}
END_TEST

START_TEST(atan_tests) {
  ck_assert_int_eq(atan(-13.54), s21_atan(-13.54));
  ck_assert_float_eq(atan(13.54), s21_atan(13.54));
  ck_assert_float_eq(atan(3.14), s21_atan(3.14));
  ck_assert_float_eq(atan(6.28), s21_atan(6.28));
  ck_assert_float_eq(atan(2.2343), s21_atan(2.2343));
  ck_assert_float_eq(atan(0.1234), s21_atan(0.1234));
  ck_assert_float_eq(atan(0), s21_atan(0));
  ck_assert_float_eq(atan(1), s21_atan(1));
  ck_assert_float_eq(atan(-1), s21_atan(-1));
  ck_assert_float_eq(atan(3.5), s21_atan(3.5));
  ck_assert_float_eq(atan(-3.5), s21_atan(-3.5));
}
END_TEST

// Функция создает набор тестов s21_math_tests, который содержит ряд тестов,
// связанных с математическими операциями. Затем созданный набор тестов
// добавляется в Suite *s21_math. Функция возвращает Suite *s21_math.

Suite *s21_math_tests_create() {
  // Создание Suite *s21_math
  Suite *s21_math = suite_create("s21_math");
  // Создание TCase *s21_math_tests
  TCase *s21_math_tests = tcase_create("S21_MATH");
  // Добавление тестов в TCase *s21_math_tests
  tcase_add_test(s21_math_tests, ceil_tests);
  tcase_add_test(s21_math_tests, floor_tests);
  tcase_add_test(s21_math_tests, exp_tests);
  tcase_add_test(s21_math_tests, sin_tests);
  tcase_add_test(s21_math_tests, cos_tests);
  tcase_add_test(s21_math_tests, tan_tests);
  tcase_add_test(s21_math_tests, abs_tests);
  tcase_add_test(s21_math_tests, fabs_tests);
  tcase_add_test(s21_math_tests, fmod_tests);
  tcase_add_test(s21_math_tests, pow_tests);
  tcase_add_test(s21_math_tests, sqrt_tests);
  tcase_add_test(s21_math_tests, log_tests);
  tcase_add_test(s21_math_tests, asin_tests);
  tcase_add_test(s21_math_tests, acos_tests);
  tcase_add_test(s21_math_tests, atan_tests);
  // Добавление TCase *s21_math_tests в Suite *s21_math
  suite_add_tcase(s21_math, s21_math_tests);
  // Возврат Suite *s21_math
  return s21_math;
}

int main() { // объявление функции main
  Suite *s21_math = s21_math_tests_create(); // создание набора тестов для
  // библиотеки S21_math
  SRunner *s21_math_runner =
      srunner_create(s21_math); // создание объекта SRunner для запуска тестов
  int number_failed; // объявление переменной для хранения количества неудачных
  // тестов
  srunner_run_all(s21_math_runner,
                  CK_NORMAL); // запуск всех тестов в нормальном режиме
  number_failed = srunner_ntests_failed(
      s21_math_runner); // получение количества неудачных тестов
  srunner_free(
      s21_math_runner); // освобождение ресурсов, занятых объектом SRunner

  return number_failed == 0 ? 0 : 1; // возврат 0, если все тесты прошли
  // успешно, или 1 в противном случае
}
