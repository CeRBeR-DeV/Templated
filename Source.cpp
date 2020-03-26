#include<iostream>

const int  ROWS = 10;
const int COLS = 10;

template<typename T>
void fill_rand(T arr[], const int N);

template<typename T>
void fill_rand(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void printf_array(T arr[], const int N);

template<typename T>
void printf_array(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void sort_array(T arr[], const int N);

template<typename T>
void sort_array(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double sum_array(T arr[], const int N);

template<typename T>
double sum_array(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double average_array(T arr[], const int N);

template<typename T>
double average_array(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double min_element(T arr[], const int N);

template<typename T>
double min_element(T arr[ROWS][COLS], const int ROSW, const int COLS);

template<typename T>
double max_element(T arr[], const int N);

template<typename T>
double max_element(T arr[ROWS][COLS], const int ROSW, const int COLS);


int main()
{
	setlocale(LC_ALL, "");
	const int N = 5;
	const int M = 5;

	int A[ROWS][COLS];
	double B[ROWS][COLS];

	int arr[N];
	double brr[M];

	double rezult = 0;
	std::cout << "Заполнение масивов случайными значениями..." << std::endl;
	fill_rand(arr, N);
	fill_rand(brr, M);
	fill_rand(A, ROWS, COLS);
	fill_rand(B, ROWS, COLS);
	std::cout << "Одномерный массив с целочислиными значениями:" << std::endl;
	printf_array(arr, N);
	std::cout << std::endl;
	std::cout << "Одномерный массив с дробными значениями:" << std::endl;
	printf_array(brr, M);
	std::cout << std::endl;
	std::cout << "Двухмерный массив с целочислиными значениями:" << std::endl;
	printf_array(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Двухмерный массив с дробными значениями:" << std::endl;
	printf_array(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сортируем массивы..." << std::endl;
	sort_array(arr, N);
	sort_array(brr, M);
	sort_array(A, ROWS, COLS);
	sort_array(B, ROWS, COLS);
	std::cout << "Отсортированый одномерный массив с целочислиными значениями:" << std::endl;
	printf_array(arr, N);
	std::cout << std::endl;
	std::cout << "Отсортированый одномерный массив с дробными значениями:" << std::endl;
	printf_array(brr, M);
	std::cout << std::endl;
	std::cout << "Отсортированый двухмерный массив с целочислиными значениями:" << std::endl;
	printf_array(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Отсортированый двухмерный массив с дробными значениями:" << std::endl;
	printf_array(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "Сумма елементов одномерного массива с целочислиными значениями:" << std::endl;
	rezult = sum_array(arr, N);
	std::cout << rezult << std::endl;
	std::cout << "Сумма елементов одномерного массива с дробными значениями:" << std::endl;
	rezult = sum_array(brr, M);
	std::cout << rezult << std::endl;
	std::cout << "Сумма елементов двухмерного массива с целочислиными значениями:" << std::endl;
	rezult = sum_array(A, ROWS, COLS);
	std::cout << rezult << std::endl;
	std::cout << "Сумма елементов двухмерного массива с дробными значениями:" << std::endl;
	rezult = sum_array(B, ROWS, COLS);
	std::cout << rezult << std::endl;
	std::cout << "Среднее арифметическое елементов одномерного  массива с целочислиными значениями:" << std::endl;
	rezult = average_array(arr, N);
	std::cout << rezult << std::endl;
	std::cout << "Среднее арифметическое елементов одномерного  массива с дробными значениями:" << std::endl;
	rezult = average_array(brr, M);
	std::cout << rezult << std::endl;
	std::cout << "Среднее арифметическое елементов двухмерного  массива с целочислиными значениями:" << std::endl;
	rezult = average_array(A, ROWS, COLS);
	std::cout << rezult << std::endl;
	std::cout << "Среднее арифметическое елементов двухмерного  массива с дробными значениями:" << std::endl;
	rezult = average_array(B, ROWS, COLS);
	std::cout << rezult << std::endl;
	std::cout << "Минимальный елемент одномерного  массива с целочислиными значениями:" << std::endl;
	rezult = min_element(arr, N);
	std::cout << rezult << std::endl;
	std::cout << "Минимальный елемент одномерного  массива с дробными значениями:" << std::endl;
	rezult = min_element(brr, M);
	std::cout << rezult << std::endl;
	std::cout << "Минимальный елемент двухмерного  массива с целочислиными значениями:" << std::endl;
	rezult = min_element(A, ROWS, COLS);
	std::cout << rezult << std::endl;
	std::cout << "Минимальный елемент двухмерного  массива с дробными значениями:" << std::endl;
	rezult = min_element(B, ROWS, COLS);
	std::cout << rezult << std::endl;
	std::cout << "Максимальный елемент одномерного  массива с целочислиными значениями:" << std::endl;
	rezult = max_element(arr, N);
	std::cout << rezult << std::endl;
	std::cout << "Максимальный елемент одномерного  массива с дробными значениями:" << std::endl;
	rezult = max_element(brr, M);
	std::cout << rezult << std::endl;
	std::cout << "Максимальный елемент двухмерного  массива с целочислиными значениями:" << std::endl;
	rezult = max_element(A, ROWS, COLS);
	std::cout << rezult << std::endl;
	std::cout << "Максимальный елемент двухмерного  массива с дробными значениями:" << std::endl;
	rezult = max_element(B, ROWS, COLS);
	std::cout << rezult << std::endl;
}

template<typename T>
void fill_rand(T arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 1000;
		arr[i] /= 100;
	}

}
template<typename T>
void fill_rand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 1000;
			arr[i][j] /= 100;
		}
	}
}
template<typename T>
void printf_array(T arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		std::cout << arr[i] << "\t";
	}
}
template<typename T>
void printf_array(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}
template<typename T>
void sort_array(T arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i] < arr[j])
			{
				T buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
template<typename T>
void sort_array(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;

				if (k == i)
				{
					l = j + 1;
				}
				else
				{
					l = 0;
				}
				for (; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
template<typename T>
double sum_array(T arr[], const int N)
{
	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
double sum_array(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>
double average_array(T arr[], const int N)
{
	double avg = 0;
	for (int i = 0; i < N; i++)
	{
		avg += arr[i];
		avg = avg / N;
	}
	return avg;
}
template<typename T>
double average_array(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			avg += arr[i][j];
		}
	}
	avg = avg / (ROWS*COLS);
	return avg;
}
template<typename T>
double min_element(T arr[], const int N)
{
	double min_element = arr[0];
	
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}
template<typename T>
double min_element(T arr[ROWS][COLS], const int ROSW, const int COLS)
{
	double min_element = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min_element)
			{
				min_element = arr[i][j];
			}
		}
	}
	return min_element;
}
template<typename T>
double max_element(T arr[], const int N)
{
	double max_element = arr[0];

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
template<typename T>
double max_element(T arr[ROWS][COLS], const int ROSW, const int COLS)
{
	double max_element = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max_element)
			{
				max_element = arr[i][j];
			}
		}
	}
	return max_element;
}
