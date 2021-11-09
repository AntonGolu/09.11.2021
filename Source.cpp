#include <iostream> // П43021 Голуба Антона
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//1. Задан массив A, содержащий 100 целых чисел. Найти сумму элементов этого массива. 
	
	const int a = 100;
	int arr[a];
	int sum = 0;
	int i;
	for (i = 0; i < 100; i++)  arr[i]= rand()%100;
	sum += arr[i];
	cout << sum << endl;
	return 0;
	
	/*
	//2. Задан массив, который содержит 80 целых чисел. Найти сумму положительных элементов массива.
	const int a = 50;
	int arr[a];
	int sum = 0;
	int i;
	for ( i = 0; i < 50; i++) cout << arr[i];
	
		if (arr[i] > 0);
		sum = sum + arr[i];
	
		cout << sum << endl;
	return 0;
	
	
	//3. Задан массив, который содержит 60 целых чисел. Найти количество элементов массива, которые делятся на 3.
	const int a = 60;
	int arr[a];
	int i;
	for (i = 0; i < 60; i++) cout << arr[i] << ' ';
	if (i % 3 == 0) cout << arr[i] << ' ';
	return 0;*/

}