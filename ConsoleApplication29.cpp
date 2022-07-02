#include <stdio.h>
#include <fstream>
#include <iostream>

#define size 1000000
#define n_size 6
using namespace::std;
void number_in_array(int i, int digits[n_size]);
void lucky_numbers_output(int i, int digits[n_size]);


int main()
{
	int digits[n_size] = { 0 };

	ofstream oFile("bruh.txt");

	for (int i = 0; i < size; i++)
	{
		number_in_array(i, digits);
		lucky_numbers_output(i, digits);
	}
	return 0;
}

void number_in_array(int i, int digits[n_size])
{
	for (int j = 0; j < 6; j++)
	{
		digits[j] = i % 10;
		i /= 10;
	}
	return;
	
}
void lucky_numbers_output(int i, int digits[n_size])
{
	
	if (digits[0] + digits[1] + digits[2] == digits[3] + digits[4] + digits[5])
	{

		if (i == 0)
		{
			std::ofstream out("C:\\Users\\Димон\\source\\repos\\ConsoleApplication29\\ConsoleApplication29\\bruh.txt", std::ios::app);
			out << "000000" << "\n";
			out.close();
		}
		if (i < 10000 && i > 0)
		{
			std::ofstream out("C:\\Users\\Димон\\source\\repos\\ConsoleApplication29\\ConsoleApplication29\\bruh.txt", std::ios::app);
			out << "00";
			out << i << "\n";
			out.close();
		}
		if (i > 9999 && i < 100000)
		{
			std::ofstream out("C:\\Users\\Димон\\source\\repos\\ConsoleApplication29\\ConsoleApplication29\\bruh.txt", std::ios::app);
			out << "0";
			out << i << "\n";
			out.close();
		}
		if( i > 99999 )
		{
			{
				std::ofstream out("C:\\Users\\Димон\\source\\repos\\ConsoleApplication29\\ConsoleApplication29\\bruh.txt", std::ios::app);
				out << i << "\n";
				out.close();
			}
		}
	}
	return;
}