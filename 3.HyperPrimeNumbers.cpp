// ѕотрачено около 30 минут на написание и около 30 минут на безуспешные попытки пон€ть, что не так.
// –езультат проверки: неправильный ответ
// ¬се мои тесты выдавали ожидаемый ("правильный") ответ

//#include "stdafx.h"
#include "math.h"
#include <iostream>

using namespace std;


bool isPrimeNumber(int num)
{
	if (num == 2)
		return true;
	if (num % 2 == 0)
		return false;
	int root = sqrt(num) + 0.9;
	for (int i = 3; i <= root; i++)
	{
		if ((num % i) == 0)
		{
			return false;
		}
	}
	
	return true;	
}

bool isHyperPrimeNumber(int num)
{
	while (num)
	{
		if (!isPrimeNumber(num))
		{
			return false;
		}
		num = num/10;
	} 

	return true;
}

int main()
{
	int a, b;
	cin >> a >> b;

	bool c = false;

	for (int i = a; i <= b; i++)
	{
		if (isHyperPrimeNumber(i))
		{
			c = true;
			cout << i << " ";
		}
	}

	if (!c)
	{
		cout << 0 << endl;
	}

    return 0;
}


