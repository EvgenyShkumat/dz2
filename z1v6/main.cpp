#include <iostream>
#include <vector>
using namespace std;

/*
6.	Циклически сдвинуть на k элементов вправо. Число k вводится.
*/

int main() {
	int length, k;
	cout << "Enter length: ";
	cin >> length;

	cout << "Enter k: ";
	cin >> k;

	vector<int> numbers(length);
	cout << "Enter numbers:\n";

	int save = -1;
	bool flag = true;

	for (int i = 0; i < length; i++, k++)
	{
		if (k == length) {
			k = 0;
		}

		int num;
		cin >> num;
		numbers[k] = num;
	}

	for (int i = 0; i < length; i++)
	{
		cout << numbers[i];
	}

	return 0;
}