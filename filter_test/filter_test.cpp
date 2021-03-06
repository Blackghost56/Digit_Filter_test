// filter_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <fstream>
#include <iostream>

#include "filter.h"

#define KEY_LEVEL_1 1
#define KEY_LEVEL_2 2

using namespace std;

int filter_test(char *argv[])
{
	float buf = 0;
	vector<float> data_in, data_out;
	ifstream file_in(argv[KEY_LEVEL_1]);
	ofstream file_out;

	//file_in.open("E:\\Git\\Digit_Filter_test\\Debug\\data_in.txt", ios_base::in);
	//file_in.open("data_in.txt", ios_base::in);
	if (!file_in.is_open())
	{
		cout << "Error open input file!\n";
		system("pause");
		return 1;
	}
	while (!file_in.eof())
	{
		file_in >> buf;
		//cout << buf << "\n";
		data_in.push_back(buf);
	}

	//file_out.open("data_out.txt", ios_base::out | ios_base::trunc);
	file_out.open(argv[KEY_LEVEL_2], ios_base::out | ios_base::trunc);
	if (!file_out.is_open())
	{
		cout << "Error open output file\n";
		system("pause");
		return 1;
	}

	buf = 0;
	for (int i = 0; i < (int)data_in.size(); i++)
	{
		//cout << "data_in[" << i << "] " << data_in[i] << "\n";
		buf = DigFil(data_in[i]);
		//cout << "buf = " << buf << "\n";
		data_out.push_back(buf);
		//cout << "data_out[" << i << "] " << data_out[i] << "\n";
		file_out << data_out[i] << "\n";
	}

	/*for (int i = 0; i < (int)data_in.size(); i++)
	{
		file_out << data_in[i] << "\n";
	}*/

	file_in.close();
	file_out.close();
}


int main(int argc, char *argv[])
{
	int flag = 0;
	
	if (argc == 3)
	{
		flag = filter_test(argv);
	}
	else {
		cout << "Error. Enter correct file path\n";
		system("pause");
		return 1;
	}

	cout << "Complate\n";
	//system("pause");
	return 0;
}



