#include "DtBABtD.hpp"

void main()
{
	//std::string BTD = "0";
	int BTD = 0;
	int DTB = 0;
	int close = 0;
	int option;

	while (!close)
	{
		std::cout << " --------------------------------- " << std::endl;
		std::cout << "|     What do you want to do?     |" << std::endl;
		std::cout << " --------------------------------- " << std::endl;
		std::cout << "|1. Convert from decimal to binary|" << std::endl;
		std::cout << "|2. Convert from binary to decimal|" << std::endl;
		std::cout << "|0. Close                         |" << std::endl;
		std::cout << " --------------------------------- " << std::endl;

		std::cin >> option;

		if (option == 1)
		{
			system("cls");
			std::cout << "What decimal number do you want to convert?" << std::endl;
			std::cin >> DTB;
			system("cls");
			int B = DecimalToBinary(DTB);
			std::cout << DTB << " in binary is " << B << "\n";
		}
		else if (option == 2)
		{
			system("cls");
			std::cout << "What binary number do you want to convert?" << std::endl;
			std::cin >> BTD;
			system("cls");
			int D = BinaryToDecimal(BTD);
			std::cout << BTD << " in decimal is " << D << "\n";
		}
		else if (option == 0)
		{
			close = 1;
		}
		else
		{
			std::cout << "option not valid" << std::endl;
		}
	}
	



}