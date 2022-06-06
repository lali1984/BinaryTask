#include <iostream>

namespace MyMathFunc
{
	//сложение***
	int mySum(int num1, int num2)
	{
		int result = 0, carry = 0;
		result = num1 ^ num2;
		carry = (num1 & num2) << 1;
		while (carry)
		{
			int tmp = result;
			result = result ^ carry;
			carry = (tmp & carry) << 1;
		}
		return result;
	}

	//смена знака int '+' на '-'(запись в обратном коде) и обратно***
	int changeSing(int n)
	{
		return mySum(~n, 1);
	}

	//вычитание***
	int subtraction(int a, int b)
	{
		return mySum(a, changeSing(b));
	}

	//выделение знакового бита***
	int getSing(int n)
	{
		return n >> 31;
	}

	//нахождение обсалютного значения(отбрасывает '-', или оставляет без изменения, если getSing(n) == false n***
	int myAbs(int n)
	{
		return (getSing(n) & 1) ? changeSing(n) : n;
	}

	//умножение***
	int multyply(int a, int b) 
	{
		bool singNegative = false;
		if (getSing(a) ^ getSing(b))
			singNegative = true;
		a = myAbs(a);
		b = myAbs(b);
		int result = 0;

		while (b | 0)
		{
			if (b & 1)
				result = mySum(result, a);
			a = a << 1;
			b = b >> 1;
		}
		return singNegative == true ? changeSing(result) : result;
	}

	//Деление без остатка (выводит только целю часть ответа)***
	int divide(int a, int b)
	{
		bool singNegative = false;
		int result = 0;

		if (getSing(a) ^ getSing(b)) //проверяет разны ли знаки
			singNegative = true;
		a = myAbs(a); //модуль
		b = myAbs(b); //модуль

		while (a >= b)
		{
			result = mySum(result, 1);
			a = subtraction(a, b);
		}
		return singNegative == true ? changeSing(result) : result;
	}


}
