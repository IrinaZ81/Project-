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

template <typename T>  // ��, ��� ����� �������� ������, ��� ������, ������� �� �������� ������
T absol(T num) {       // ����������, ������� ������ ��� ������, �.�. � ���� �������� ����� ���� ������
	return num < 0 ? -num : num; 
}
int main() {

	setlocale(LC_ALL, "Russian");
	int n;
	//������������ �������
	/*std::cout << "������� ���� ->";
	std::cin >> n;
	std::cout << '|' << n << "| = " << absolut(n) << "\n";

	std::cout << "����� ����� �� 5 �� 10 " << sum_AB(5, 10) << "\n";*/

	//������������� �������
	/*std::cout << max(10, 15) << std::endl;
	std::cout << max(5.7, 5.1) << std::endl;
	std::cout << max(5, 8, 2) << std::endl;*/

	//��������� ������� (�������� � ������ ������ ������)
	std::cout << absol(-7) << std::endl;
	std::cout << absol(-7.5) << std::endl;






	




//����������� ����������
	/*use_static();
	// std::cout << a << std::endl; // ������
	*/

	// ��������� �� ��������� (�� ���� ���� �� ������ �������, �� ������� ������� ��,
	//��� �� ������ � ������ ������, �� ���� ��  � int num2=2 (������� ������),
	//�� ���� �� �� ������ ������, �� ������ �������� �� ��������.
	/*std::cout << "4^3 = " << power(4, 3) << "\n";
	std::cout << "5^2 = " << power(5) << "\n";*/

	





	return 0;

}