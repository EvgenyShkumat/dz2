#include <iostream>
#include <vector>
using namespace std;

/*
* Задан линейный массив целых чисел. Удалить из данного массива элементы, 
удовлетворяющие следующим свойствам.
(Нужно преобразовать массив, а не вывести на печать оставшиеся элементы) 
6.	Элементы, которые не кратны ни 3, ни 5.
*/

int main() {
	int length;

	cout << "Enter length: ";
	cin >> length;

	vector<int> numbers(length);

	cout << "Enter numbers:\n";
	 
	for (int i = 0; i < length; i++)
	{
		cin >> numbers[i];
	}

	for (auto it = numbers.begin(); it != numbers.end(); ) {
		if ((*it % 5 != 0) && (*it % 3 != 0)) {
			it = numbers.erase(it); 
		}
		else {
			it++; 
		}
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << " ";
	}

	return 0;
}