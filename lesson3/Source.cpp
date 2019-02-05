#include <iostream>
#include <Windows.h>
using namespace std;
//
void change_number(int &n)
{
	n *= 10;
}
//1
void powerA3(int A, int &B)
{
	B = A * A * A;
}
//2
void PowerA234(int A, int &B, int &C, int &D)
{
	B = A * A;
	C = B * A;
	D = C * A;
}
//3
void Mean(int X, int Y, double &AMean, double &GMean)
{
	AMean = (X + Y) / 2;
	GMean = sqrt(X*Y);
}

//4
void TrianglePS(int a, double &P, double &S)
{
	P = 3 * a;
	S = pow(a, 2) * sqrt(3)/4;
}

//5
void RectPS(int x1, int y1, int x2, int y2, double &P, double &S)
{
	P = (abs(x2 - x1) + abs(y2 - y1)) * 2;
	S = abs(x2 - x1) * abs(y2 - y1);
}

//6
void DigitCountSum(int K, int &C, int &S)
{
	C = 0;
	S = 0;
	if (K < 0) 
	{
		cout << "Error! K < 0" << endl;
		return;
	}
	while (K % 10) 
	{
		S += K % 10;
		C++;
		K /= 10;
	}
}

//7
void InvertDigits(int &K)
{
	int TempI = 0;
	while (TempI > 0 && TempI < 0)
	{
		TempI = TempI * 10 + (K % 10);
		TempI = TempI / 10;
	}
	K = TempI;
}

//Число называется совершенным, 
//если сумма всех его делителей равна ему самому. 
//Напишите функцию поиска таких чисел во введенном интервале.
bool isPerfect(int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (n%1 == 0)
			sum += i;
	return (sum == n);
}
void perfectInRange(int begin, int end)
{
	for (size_t i = begin; i <= end; i++)
	{
		if (isPerfect(i))
			cout << i << endl;
	}
}

//8
void AddLeftDigit(int D, int &K)
{
	

}


int main()
{
	setlocale(LC_ALL, "Rus");

	//
	/*int x;
	cin >> x;
	change_number(x);
	cout << x;*/

	//1
	/*int x, y;
	cin >> x;
	powerA3(x, y);
	cout << y;*/

	//2
	/*int a, b, c, d;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		PowerA234(a, b, c, d);
		cout << b << " " << c << " " << d << " " << endl;
	}*/

	//3
	/*double A, B, C, D, AM, GM;
	cin >> A >> B >> C >> D;
	Mean(A, B, AM, GM);
	cout << " " << AM << " " << GM;
	Mean(A, C, AM, GM);
	cout << " " << AM << " " << GM;
	Mean(A, D, AM, GM);
	cout << " " << AM << " " << GM;*/

	//4
	/*double a, P, S;
	cin >> a;
	TrianglePS(a, P, S);
	cout << P << " " << S << " " << endl;*/

	//5
	/*double x1, x2, y1, y2, P, S;
	cin >> x1 >> x2 >> y1 >> y2;
	RectPS(x1, x2, y1, y2, P, S);
	cout << P << " " << S << " " << endl;*/

	//6
	/*int K, count, sum;
	cout << "Введите K = " ;
	cin >> K;
	DigitCountSum(K, count, sum);
	cout << count << " " << sum << endl;*/

	//7
	/*int k, i;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Введите число К: ";
		cin >> k;
		InvertDigits(k);
		cout << i << " ";
	}*/

	//совершенное число
	int a, b;
	cin >> a >> b;
	perfectInRange(a, b);

	system("pause");
	return 0;
}