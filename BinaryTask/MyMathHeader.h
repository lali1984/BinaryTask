#pragma once
namespace MyMathFunc
{
//сложение***
int mySum(int num1, int num2);

//смена знака int '+' на '-'(запись в обратном коде) и обратно***
int changeSing(int n);
	
//вычитание***
int subtraction(int a, int b);
	
// выделение знакового бита***
int getSing(int n);
	
// нахождение обсалютного значения(отбрасывает '-', или оставляет без изменения, если getSing(n) == false n***
int myAbs(int n);
	
//умножение***
int multyply(int a, int b);

//Деление***	
int divide(int a, int b);
}

