#include"prototype.h"

template<typename T>
T max_element(T arr[ROWS][COLS], const int ROSW, const int COLS)
{
	T max_element = arr[0][0];
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