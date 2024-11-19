#include <iostream>
#include <vector>
using namespace std;

/*
����� �������� ������. ����������� � ��� ������� ���������

6.	�������� �������� x � y � ������� k1 � k2 ��������������. 
���� k1 <= 0 ��� k2 <= 0, ��� k1 >= n, ��� k2 >= n, �������� �������
�� ������ ��� ��������� ����� ��������������. 
�������� ����������� ���������� ������� x, ����� y.
*/
void insert(vector<int>& numbers, int element, int position);

int main() {
	int length, x1, x2, k1, k2;

	cout << "Enter length: ";
	cin >> length;

	vector<int> numbers(length);

	cout << "Enter numbers:\n";

	for (int i = 0; i < length; i++)
	{
		cin >> numbers[i];
	}

	cout << "\nEnter x1, x2: ";
	cin >> x1 >> x2;
	cout << "Enter k1, k2: ";
	cin >> k1 >> k2;

	insert(numbers, x1, k1);
	insert(numbers, x2, k2);

	for (auto i : numbers) {
		cout << i << " ";
	}

	return 0;
}

void insert(vector<int>& numbers, int element, int position) {
	if (position < 0) {
		numbers.insert(numbers.begin(), element);
	}
	else if (position >= numbers.size()) {
		numbers.push_back(element);
	}
	else {
		numbers.insert(numbers.begin() + position, element);
	}
}