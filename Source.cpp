#include <iostream> // �43021 ������ ������
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//1. ����� ������ A, ���������� 100 ����� �����. ����� ����� ��������� ����� �������. 
	
	const int a = 100;
	int arr[a];
	int sum = 0;
	int i;
	for (i = 0; i < 100; i++)  arr[i]= rand()%100;
	sum += arr[i];
	cout << sum << endl;
	return 0;
	
	/*
	//2. ����� ������, ������� �������� 80 ����� �����. ����� ����� ������������� ��������� �������.
	const int a = 50;
	int arr[a];
	int sum = 0;
	int i;
	for ( i = 0; i < 50; i++) cout << arr[i];
	
		if (arr[i] > 0);
		sum = sum + arr[i];
	
		cout << sum << endl;
	return 0;
	
	
	//3. ����� ������, ������� �������� 60 ����� �����. ����� ���������� ��������� �������, ������� ������� �� 3.
	const int a = 60;
	int arr[a];
	int i;
	for (i = 0; i < 60; i++) cout << arr[i] << ' ';
	if (i % 3 == 0) cout << arr[i] << ' ';
	return 0;*/

}