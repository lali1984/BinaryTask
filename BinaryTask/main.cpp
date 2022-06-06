#include <iostream>
#include "MyHeader.h"
#include "TaskNum.h"
using std::cout;
using std::cin;
// 'int argc' - число аргументов командной строки посылаемое ф-ии main;
// 'char* argv[]' - массив указателей на строки
int main(int argc, char* argv[]) 
{
	char TASK_LIT, EXIT = ' ';
	while (EXIT != 'y')
	{ 
		cout << "\nPleas enter you TASK_LITTERAL (A - J): \t";
		cin >> TASK_LIT;

		switch (TASK_LIT)
		{
		case TaskNum::Task_A:
		{
			cout << "--------------------**********--------------------\n";
			cout << "|Given a numbeer k, 0 <= k <= 31. Write down the |\n";
			cout << "|the number 2^k, that is the number whoes k-th   |\n";
			cout << "|bit is 1 and the rest are zeros.                |\n";
			cout << "--------------------**********--------------------\n";

			TaskFunction::A_Task();
			break;
		}
		case TaskNum::Task_B:
		{
			cout << "--------------------**********--------------------\n";
			cout << "|Given two unequal non-negative integers: k and n|\n";
			cout << "|not axceeing 31. Calculate (2^k + 2^n).         |\n";
			cout << "--------------------**********--------------------\n";

			TaskFunction::B_Task();
			break;
		}
		case TaskNum::Task_C:
		{
			cout << "--------------------**********--------------------\n";
			cout << "|Given an integer A and a nonnegative integer    |\n";
			cout << "|nuber k. Zero out the last k bits of number A   |\n";
			cout << "|and out the result.                             |\n";
			cout << "--------------------**********--------------------\n";

			TaskFunction::C_Task();
			break;
		}
		case TaskNum::Task_D:
		{
			cout << "--------------------**********--------------------\n";
			cout << "|Given an integer A and a nonnegative integer    |\n";
			cout << "|nuber k. Output the number that is obtained from|\n";
			cout << "|the number A by setting the value of the k-th   |\n";
			cout << "|bit to 1                                        |\n";
			cout << "--------------------**********--------------------\n";

			TaskFunction::D_Task();
			break;
		}
		case TaskNum::Task_E:
		{
			cout << "--------------------**********--------------------\n";
			cout << "|Given an integer A and a nonnegative integer    |\n";
			cout << "|nuber k. Output the number that is obtained from|\n";
			cout << "|the number A by inverting the value of the k-th |\n";
			cout << "|bit.                                            |\n";
			cout << "--------------------**********--------------------\n";

			TaskFunction::E_Task();
			break;
		}
		case TaskNum::Task_F:
		{
			cout << "--------------------**********--------------------\n";
			cout << "|Given an integer A and a nonnegative integer    |\n";
			cout << "|nuber k. Output the value of the k-th bit of the|\n";
			cout << "| number A, i.e. 0 or 1.                         |\n";
			cout << "--------------------**********--------------------\n";

			TaskFunction::F_Task();
			break;
		}
		case TaskNum::Task_G:
		{
			cout << "--------------------**********--------------------\n";
			cout << "|Given an integer A and a nonnegative integer    |\n";
			cout << "|nuber k. Print the number that is obtained from |\n";
			cout << "|the number A by setting the value of the k-th   |\n";
			cout << "|bit to 0.                                       |\n";
			cout << "--------------------**********--------------------\n";

			TaskFunction::G_Task();
			break;
		}
		case TaskNum::Task_H:
		{
			cout << "--------------------**********--------------------\n";
			cout << "|Given an integer A and a nonnegative integer    |\n";
			cout << "|nuber k. Output a number that consist of only   |\n";
			cout << "|the last k bits of the number A (i.e. set all   |\n";
			cout << "|bits of the number A to zero, exept for the last|\n";
			cout << "|k).                                             |\n";
			cout << "--------------------**********--------------------\n";

			TaskFunction::H_Task();
			break;
		}
		case TaskNum::Task_I:
		{
			cout << "--------------------**********--------------------\n";
			cout << "|You are giver unsigned char number, that is,    |\n";
			cout << "|from 0 to 255. Print it in bit form: 8 bit, high|\n";
			cout << "|bits on the left, low bits on the right.        |\n";
			cout << "--------------------**********--------------------\n";

			TaskFunction::I_Task();
			break;
		}
		case TaskNum::Task_J:
		{
			cout << "--------------------**********--------------------\n";
			cout << "|Numbers 'a' and 'b' are given. Using only bit   |\n";
			cout << "|operations and operations of addition and  sub- |\n";
			cout << "|traction, calculate the number                  |\n";
			cout << "|x = (a / b + 34 * b) mod * 5. Display the result|\n";
			cout << "| on the screen.                                 |\n";
			cout << "--------------------**********--------------------\n";

			TaskFunction::J_Task();
			break;
		}

		}

		cout << "\nDo you want EXIT to the program? (y/n) \t";
		cin >> EXIT;
	}

	
}