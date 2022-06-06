#include <iostream>
#include <bitset>
#include "MyMathHeader.h"

//пространство имен математических функций
namespace TaskFunction 
{
	//
	void A_Task()
	{
		unsigned int k;

		std::cout << "Pleas enter number 0 <= k <= 31" << '\n';
		std::cin >> k;
		if (k >= 0 && k <= 31)
		{
			std::cout << "k =\t\t" << k << '\n';
			k = 1 << k;
			std::cout << "2^k =\t\t" << k << '\n';
			std::cout << "2^k (bit)=\t" << std::bitset<sizeof(k) * 8>(k);
		}
		else
		{
			std::cerr << "\n****************ERROR!****************\n";
			std::cerr << "*******Pleas speciffy the data.*******\n\n";
			A_Task();

		}
	}

	//
	void B_Task()
	{
		unsigned k, n;
		std::cout << "Pleas enter number 0 <= k <= 31 and number 0 <= n <= 31" << '\n';

		std::cout << "k = \t\t";
		std::cin >> k;

		std::cout << "n = \t\t";
		std::cin >> n;

		if (k >= 0 && k <= 31 && n >= 0 && n <= 31 && n != k)
		{
			k = 1 << k;
			n = 1 << n;

			std::cout << "2^k = " << k << '\n' << "2^n = " << n << '\n';

			std::cout << "2^k + 2^n = \t" << k + n << '\n';
			std::cout << "2^k | 2^n = \t" << (k | n);
		}
		else
		{
			std::cerr << "\n****************ERROR!****************\n";
			std::cerr << "*******Pleas speciffy the data.*******\n\n";
			B_Task();
		}
	}


	void C_Task()
	{
		int A, k;
		std::cout << "Pleas enter number A and nonnegative number 0 <= k <= 31\n";
		std::cout << "INPUT DATA\n";
		std::cout << "A = \t\t";
		std::cin >> A;
		std::cout << "k = \t\t";
		std::cin >> k;

		if (k >= 0 && k <= 31)
		{
			std::cout << "A(bit) = \t" << std::bitset<sizeof(A) * 8>(A) << '\n';
			k = (1 << k) - 1; //генерация mask для облуления последних бит
			std::cout << "mask = \t\t" << std::bitset<sizeof(k) * 8>(k) << '\n';
			A = A & (~k);
			std::cout << "OUTPUT DATA\n";
			std::cout << "A = \t\t" << A << '\n';
			std::cout << "A(bit) = \t" << std::bitset<sizeof(A) * 8>(A) << '\n';
		}
		else
		{
			std::cerr << "\n****************ERROR!****************\n";
			std::cerr << "*******Pleas speciffy the data.*******\n\n";
			C_Task();
		}
	}

	void D_Task()
	{
		int A, k;
		std::cout << "Pleas enter integer number A and non negative number 0 <= k <= 31\n";
		std::cout << "A =\t\t";
		std::cin >> A;
		std::cout << "k = \t\t";
		std::cin >> k;
		if (k >= 0 && k <= 31)
		{
			std::cout << "A(bit) = \t" << std::bitset<sizeof(A) * 8>(A) << '\n';
			k = 1 << (k - 1); //генерация mask для установки  заданого бита в 1
			std::cout << "mask = \t\t" << std::bitset<sizeof(k) * 8>(k) << '\n';
			A = A | k;
			std::cout << "OUTPUT DATA\n";
			std::cout << "A = \t\t" << A << '\n';
			std::cout << "A(bit) = \t" << std::bitset<sizeof(A) * 8>(A) << '\n';
		}
		else
		{
			std::cerr << "\n****************ERROR!****************\n";
			std::cerr << "*******Pleas speciffy the data.*******\n\n";
			D_Task();
		}
	}

	void E_Task()
	{
		int A, k;
		std::cout << "Pleas enter integer number A and non negative number 0 <= k <= 31\n";
		std::cout << "A =\t\t";
		std::cin >> A;
		std::cout << "k = \t\t";
		std::cin >> k;
		if (k >= 0 && k <= 31)
		{
			std::cout << "A(bit) = \t" << std::bitset<sizeof(A) * 8>(A) << '\n';
			k = 1 << (k - 1); //генерация mask для смены заданого бита
			std::cout << "mask = \t\t" << std::bitset<sizeof(k) * 8>(k) << '\n';
			A = A ^ k;
			std::cout << "OUTPUT DATA\n";
			std::cout << "A = \t\t" << A << '\n';
			std::cout << "A(bit) = \t" << std::bitset<sizeof(A) * 8>(A) << '\n';
		}
		else
		{
			std::cerr << "\n****************ERROR!****************\n";
			std::cerr << "*******Pleas speciffy the data.*******\n\n";
			E_Task();
		}
	}

	void F_Task()
	{
		int A, k;
		std::cout << "Pleas enter integer number A and non negative number 0 <= k <= 31\n";
		std::cout << "A =\t\t";
		std::cin >> A;
		std::cout << "k = \t\t";
		std::cin >> k;
		if (k >= 0 && k <= 31)
		{
			int n;
			n = 1 << (k - 1); //генерация mask для определения заданого бита
			n = A & n;
			if (n == 0)
			{
				std::cout << "OUTPUT DATA\n";
				std::cout << "A = \t\t" << A << '\n';
				std::cout << "A(bit) = \t" << std::bitset<sizeof(A) * 8>(A) << '\n';
				std::cout << "BIT " << k << " = 0";
			}
			else
			{
				std::cout << "OUTPUT DATA\n";
				std::cout << "A = \t\t" << A << '\n';
				std::cout << "A(bit) = \t" << std::bitset<sizeof(A) * 8>(A) << '\n';
				std::cout << "BIT " << k << " = 1";
			}
		}
		else
		{
			std::cerr << "\n****************ERROR!****************\n";
			std::cerr << "*******Pleas speciffy the data.*******\n\n";
			F_Task();
		}
	}

	void G_Task()
	{
		int A, k;
		std::cout << "Pleas enter integer number A and non negative number 0 <= k <= 31\n";
		std::cout << "A =\t\t";
		std::cin >> A;
		std::cout << "k = \t\t";
		std::cin >> k;
		if (k >= 0 && k <= 31)
		{
			std::cout << "A(bit) = \t" << std::bitset<sizeof(A) * 8>(A) << '\n';
			k = ~(1 << (k - 1)); //генерация mask для установки заданого бита в 0
			std::cout << "mask = \t\t" << std::bitset<sizeof(k) * 8>(k) << '\n';
			A = A & k;
			std::cout << "OUTPUT DATA\n";
			std::cout << "A = \t\t" << A << '\n';
			std::cout << "A(bit) = \t" << std::bitset<sizeof(A) * 8>(A) << '\n';
		}
		else
		{
			std::cerr << "\n****************ERROR!****************\n";
			std::cerr << "*******Pleas speciffy the data.*******\n\n";
			G_Task();
		}
	}

	//Обрезать старшие биты.
	void H_Task() 
	{
		int A, k;
		std::cout << "Pleas enter integer number A and no negaive k ( 0<= k <= 31):\n";
		std::cout << "A =\t\t";
		std::cin >> A;
		std::cout << "k =\t\t";
		std::cin >> k;

		if (k >= 0 && k <= 31)
		{
			std::cout << "A(bit) =\t" << std::bitset<sizeof(A) * 8>(A) << '\n';
			k = ~(-1 << k);
			std::cout << "OUTPUT DATA:\n";
			std::cout << "mask(bit) =\t" << std::bitset<sizeof(k) * 8>(k) << '\n';
			A = A & k;
			std::cout << "A =\t\t" << A << '\n';
			std::cout << "A(bit after) =\t" << std::bitset<sizeof(A) * 8>(A) << '\n';
		}
		else
		{
			std::cerr << "\n****************ERROR!****************\n";
			std::cerr << "*******Pleas speciffy the data.*******\n\n";
			H_Task();
		}
	}

	void I_Task()
	{
		unsigned char num;
		std::cout << "Pleas enter you unsigned char number (0-255): ";
		std::cin >> num;
		if (num >= 0 && num <= 255)
		{
			std::cout << "num (BIT) =\t";
			std::cout << std::bitset<sizeof(num) * 8>(num) << '\n';
		}
		else
		{
			std::cerr << "\n****************ERROR!****************\n";
			std::cerr << "*******Pleas speciffy the data.*******\n\n";
			I_Task();
		}
	}

	using namespace MyMathFunc;
	void J_Task()
	{
		int a, b;
		std::cout << "Pleas enter numbers 'a' and 'b' for calculate 'x' (a > b)\n";
		std::cout << "a = ";
		std::cin >> a;
		std::cout << "b = ";
		std::cin >> b;
		if (b != 0)
		{
			std::cout << "x = (a / b + 34 * b ) mod * 5 = ";
			std::cout << multyply(myAbs(mySum(divide(a, b), multyply(34, b))), 5);
		}
		else
		{
			std::cerr << "\n****************ERROR!****************\n";
			std::cerr << "*******Pleas speciffy the data.*******\n";
			std::cerr << "********Divirded can't be zero********\n\n";
			J_Task();
		}

	}

}


