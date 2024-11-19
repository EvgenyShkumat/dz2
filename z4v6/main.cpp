#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/*
* �������� ��������� ��� ������� ������. ����� ������ �� n �����.
����� � ��������� �� ������ ������� ��� �������� ������� �������,
������� ������������� ������� ������. ��������� ������� �������������
������ ������, ���������� ����� � ������� ����� ���������� ����� ��
������ �������. ���������� � ���� ����� � ��������� ���� �����������
� ������������ ���������� ������� �������. ������� ������ � ������ �������.
������ ������ �� �����, ��������� ��������� � ����.

6.	�� ������� � ������� (� - ��������). 
*/

int main() {
	srand(time(NULL));

	ifstream fin("input.txt");
	ofstream fout("output.txt");

	int length, x;
	fin >> length;

	vector<int> numbers(length);
	vector<int> result;
	result.reserve(length);

	for (int i = 0; i < length; i++)
	{
		fin >> numbers[i];
	}

	cout << "Enter x: ";
	cin >> x;

	int min = 10e8, max = -10e8;
	for (int i = 0; i < length; i++)
	{
		if (numbers[i] % x != 0) {
			result.push_back(numbers[i]);
		}
		if (numbers[i] < min) {
			min = numbers[i];
		}
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}

	vector<int> random_result(result.size());

	for (int i = 0; i < random_result.size(); i++)
	{
		random_result[i] = rand() % (max - min + 1) + min;
	}


	fout << "Second array:\n";

	for (int i = 0; i < result.size(); i++)
	{
		fout << result[i];
	}

	fout << "\nThird array:\n";

	for (int i = 0; i < random_result.size(); i++)
	{
		fout << random_result[i];
	}

	return 0;
}