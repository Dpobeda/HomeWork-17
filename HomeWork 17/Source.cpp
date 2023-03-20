#include <iostream>
#include <cstdlib>
#include <ctime>

double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}

inline int mean_arr(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
		return sum / length;
}

void print_arr(int arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

float power(int num1, int num2)
{
	float result = 1;
	if (num2 >= 0)
	{
		for (int i = num2; i > 0; i--){
			result *= num1;
		}
	}
	else
	{
		for (int i = num2; i < 0; i++){
			result /= num1;
		}
	}
	return result;
}

void positive_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			arr[i] = -arr[i];
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задача 1.

	std::cout << "Задача 1. Здесь возвращает среднее арифметическое двух переданных в неё чисел.\n";
	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << mean(n, m);
	std::cout << std::endl;

	// Задача 2.
	std::cout << "\nЗадача 2. Здесь принимает массив и его длину, после чего возвращает среднее арифметическое всех его элементов.\n";
	const int size2 = 10;
	int arr2[size2];
	
	srand(time(NULL));
	for (int i = 0; i < size2; i++)
		arr2[i] = rand() % 101;
	
	print_arr(arr2, size2);
	std::cout << mean_arr(arr2, size2);
	std::cout << std::endl;
	std::cout << std::endl;
	
	// Задача 3.
	std::cout << "Задача 3. Здесь выводить в консоль все степени числа N от степени 0 до степени M включительно.\n";
	int N;
	int M;
	float result;
	std::cout << "Введите число N -> ";
	std::cin >> N;
	std::cout << "Введите степень M -> ";
	std::cin >> M;
	for (int i = 0; i <= M; i++) {
		result = power(N, i);
		std::cout << "Результат " << N << "^" << i << " = " << result << std::endl;
	}
	std::cout << std::endl;
	// Задача 4.

	std::cout << "Задача 4. Здесь меняет отрицательные значения на положительные.\n";
	const int size4 = 10;
	int arr4[size4];

	srand(time(NULL));
	for (int i = 0; i < size4; i++)
		arr4[i] = rand() % 101 - 50;

	print_arr(arr4, size4);
	positive_arr(arr4, size4);
	print_arr(arr4, size4);
	
	
	return 0;
}