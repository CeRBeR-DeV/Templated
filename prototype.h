#pragma once
#include<iostream>

const int  ROWS = 10;
const int COLS = 10;

template<typename T>
void fill_rand(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void printf_array(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void sort_array(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T sum_array(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T average_array(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T min_element(T arr[ROWS][COLS], const int ROSW, const int COLS);

template<typename T>
T max_element(T arr[ROWS][COLS], const int ROSW, const int COLS);
