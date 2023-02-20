#include <iostream>


/*void use_static() {
	static int a = 1;
	std::cout << "a= " << a << std::endl;
	a++;
	if (a > 5)
		a = 1;
}

int power(int num1, int num2=2) {
	int res = 1;
	for (int i = 1; i <= num2; i++)
		res *= num1;
	return res;
	}*/




inline int absolut(int num) {
	return num < 0 ? -num : num;
}
inline int sum_AB(int A, int B) {
	int sum = 0;
	for (int i = A; i <= B; i++)
		sum +=i;
	return sum;
}

int max(int num1, int num2) {
	std::cout << "Int\n";
	return num1 > num2 ? num1 : num2;
}
double max(double num1, double num2) {
	std::cout << "Double\n";
	return num1 > num2 ? num1 : num2;
}
int max(int num1, int num2, int num3) {
	std::cout << "Three INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}

template <typename T>  // то, что будет написано дальше, это шаблон, который не занимает память
T absol(T num) {       // переменная, которая хранит тип данных, т.е. м ожно вызывать раные типы данных
	return num < 0 ? -num : num; 
}
int main() {

	setlocale(LC_ALL, "Russian");
	int n;
	//Встраиваемые функции
	/*std::cout << "Введите чило ->";
	std::cin >> n;
	std::cout << '|' << n << "| = " << absolut(n) << "\n";

	std::cout << "Сумма чисел от 5 до 10 " << sum_AB(5, 10) << "\n";*/

	//Перегруженные функции
	/*std::cout << max(10, 15) << std::endl;
	std::cout << max(5.7, 5.1) << std::endl;
	std::cout << max(5, 8, 2) << std::endl;*/

	//Шаблонные функции (работают с любыми типами данных)
	std::cout << absol(-7) << std::endl;
	std::cout << absol(-7.5) << std::endl;






	




//Статические переменные
	/*use_static();
	// std::cout << a << std::endl; // ошибка
	*/

	// Параметры по умолчанию (то есть если мы вводим степень, то функция считает то,
	//что мы задали в момент вывода, но если мы  в int num2=2 (добавим двойку),
	//то если мы не вводим ничего, то встает параметр по умолчани.
	/*std::cout << "4^3 = " << power(4, 3) << "\n";
	std::cout << "5^2 = " << power(5) << "\n";*/

	





	return 0;

}