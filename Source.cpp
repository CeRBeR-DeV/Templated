#include"prototype.h"

int main()
{
	setlocale(LC_ALL, "");
	const int N = 5;
	const int M = 5;

	int A[ROWS][COLS];
	double B[ROWS][COLS];
	double rezult = 0;
	std::cout << "���������� ������� ���������� ����������..." << std::endl;
	fill_rand(A, ROWS, COLS);
	fill_rand(B, ROWS, COLS);
	std::cout << "������ � ������ ����������:" << std::endl;
	printf_array(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "������ � �������� ����������:" << std::endl;
	printf_array(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "���������� ��������..." << std::endl;
	sort_array(A, ROWS, COLS);
	sort_array(B, ROWS, COLS);
	std::cout << "�������������� ������ � ������ ����������:" << std::endl;
	printf_array(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "�������������� ������ � �������� ����������:" << std::endl;
	printf_array(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "����� ��������� ������ � ������ ����������:" << std::endl;
	std::cout << sum_array(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "����� ��������� ������ � �������� ����������:" << std::endl;
	std::cout << sum_array(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "������� �������������� ������� � ������ ����������: " << std::endl;
	std::cout << average_array(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "������� �������������� ������� � �������� ����������: " << std::endl;
	std::cout << average_array(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "����������� �������  ������� � ������ ����������: " << std::endl;
	std::cout << min_element(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "����������� �������  ������� � �������� ����������: " << std::endl;
	std::cout << min_element(B, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "������������ �������  ������� � ������ ����������: " << std::endl;
	std::cout << max_element(A, ROWS, COLS);
	std::cout << std::endl;
	std::cout << "������������ �������  ������� � �������� ����������: " << std::endl;
	std::cout << max_element(B, ROWS, COLS);
}