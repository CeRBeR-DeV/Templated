#include"prototype.h"

template<typename T>
T average_array(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T avg = 0;
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