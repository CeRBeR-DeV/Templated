#include"prototype.h"

template<typename T>
T min_element(T arr[ROWS][COLS], const int ROSW, const int COLS)
{
	T min_element = arr[0][0];
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