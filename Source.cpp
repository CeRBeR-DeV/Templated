#include"prototype.h"

int main()
{
	setlocale(LC_ALL, "");
	const int N = 5;
	const int M = 5;

	int A[ROWS][COLS];
	double B[ROWS][COLS];
	double rezult = 0;
	std::cout << "Заполнение массива случайными значениями..." << std::endl;
	fill_rand(A, ROWS, COLS);
	fill_rand(B, ROWS, COLS);
	std::cout << "Массив с целыми значениями:" << std::endl;
	printf_array(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Массив с дробными значениями:" << std::endl;
	printf_array(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сортировка массивов..." << std::endl;
	sort_array(A, ROWS, COLS);
	sort_array(B, ROWS, COLS);
	std::cout << "Отсортированый массив с целыми значениями:" << std::endl;
	printf_array(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Отсортированый массив с дробными значениями:" << std::endl;
	printf_array(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сумма елементов масива с целыми значениями:" << std::endl;
	std::cout << sum_array(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сумма елементов масива с дробными значениями:" << std::endl;
	std::cout << sum_array(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Среднее арифметическое массива с целыми значениями: " << std::endl;
	std::cout << average_array(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Среднее арифметическое массива с дробными значениями: " << std::endl;
	std::cout << average_array(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Минимальний елемент  массива с целыми значениями: " << std::endl;
	std::cout << min_element(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Минимальный елемент  массива с дробными значениями: " << std::endl;
	std::cout << min_element(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Максимальный елемент  массива с целыми значениями: " << std::endl;
	std::cout << max_element(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Максимальный елемент  массива с дробными значениями: " << std::endl;
	std::cout << max_element(B, ROWS, COLS);
}