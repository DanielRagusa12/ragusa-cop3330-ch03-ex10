#include <iostream>
#include <string>
using namespace std;

#include "Header.h"

int main()
{
	double a;
	double b;
	string x;
	cin >> x;
	cin >> a;
	cin >> b;

	double result=calc(x, a, b);
	cout << result;



}

double calc(string x, double a, double b)
{
	if (x == "+")
	{
		return a + b;

	}
	if (x == "-")
	{
		return a - b;

	}
	if (x == "*")
	{
		return a * b;

	}
	if (x == "/")
	{
		return a / b;

	}

}