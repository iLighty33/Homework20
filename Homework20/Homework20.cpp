#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void showArr(int array[], int length);
int searchIndex(int array[], int length, int begin = 0);
int searchLastIndex(int array[], int length, int begin = 0);
int maxElement(int array[], int length);
int minElement(int array[], int length);
int meanValue(int array[], int length);
void range(int array[], int length, int begin, int end);
int counter(int array[], int length, int elementKey = 0);

int main() {
	setlocale(LC_ALL, "Russian");

	// Задание
	srand(time(NULL));

	int array[100];

	for (int i = 0; i < 100; i++)
		array[i] = rand() % (100 + 1 - (-100)) + (-100);

	showArr(array, 100);
	cout << searchIndex(array, 100) << "\n";
	cout << searchLastIndex(array, 100) << "\n";
	cout << maxElement(array, 100) << "\n";
	cout << minElement(array, 100) << "\n";
	cout << meanValue(array, 100) << "\n";
	
	cout << "Введите начало и конец диапазона: ";
	int n, m;
	cin >> n >> m;
	if (n > m)
		swap(n, m);
	range(array, 100, n, m);

	cout << "Введите элемент: ";
	cin >> n;
	cout << counter(array, 100, n) << endl;

	return 0;
}

int counter(int array[], int length, int elementKey) {
	int counter = 0;
	cout << "Количество вхождений переданного элемента в массив: ";
	for (int i = 0; i < length; i++) {
		if (elementKey == array[i])
			counter++;
	}
	return counter;
}

void range(int array[], int length, int begin, int end) {
	if (begin < 0 || end > length) {
		cout << "Ошибка ввода";
		cout << endl;
		return;
	}
	cout << "[";
	for (int i = begin; i < end; i++)

		cout << array[i] << "\t ";
	cout << "\b\b\b\b]";

	cout << endl;
}

int meanValue(int array[], int length) {
	cout << "Среднее арифметическое элементов массива: ";
	int sumOfElements = 0;
	for (int i = 0; i < length; i++)
		sumOfElements += array[i];
	return sumOfElements / length;
}

int minElement(int array[], int length) {
	cout << "Минимальный элемент массива: ";
	int minElement = array[0];
	for (int i = 0; i < length; i++) {

		if (array[i] < minElement)
			minElement = array[i];

	}
	return minElement;
}

int maxElement(int array[], int length) {
	cout << "Максимальный элемент массива: ";
	int maxElement = array[0];
	for (int i = 0; i < length; i++) {

		if (array[i] > maxElement)
			maxElement = array[i];
		
	}
	return maxElement;
}

int searchLastIndex(int array[], int length, int begin) {
	cout << "Индекс последнего вхождения элемента в массив: ";
	for (int i = begin; i < length; i++) {
		return length-1;
	}
}

int searchIndex(int array[], int length, int begin) {
	cout << "Индекс первого вхождения элемента в массив: ";
	for (int i = begin; i < length; i++)
		return i;

}

void showArr(int array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++) {

		cout << array[i] << "\t ";

		if (i != 0 && i % 10 == 0) {
			if (i == 10 || i == 20 || i == 30 || i == 40 || i == 50 || i == 60 || i == 70 || i == 80 || i == 90)
				continue;
			else

				cout << endl;

		}
		else
			if (i == 9 || i == 19 || i == 29 || i == 39 || i == 49 || i == 59 || i == 69 || i == 79 || i == 89)
				cout << endl;
			else
				if (i == 99)
					cout << "\b\b\b\b";
	}
	cout << "\b\b]";
	cout << endl;
}


