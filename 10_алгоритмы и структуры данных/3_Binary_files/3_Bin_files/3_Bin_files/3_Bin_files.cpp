#include "pch.h"
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <locale.h>
#include <string.h>
#include <cstring>
#include <string>
#include <Windows.h>
#include <cstdio>
#include <cstdlib>

using namespace std;
int const N = 1024;//TASK 4


int main()
{	
	//------------------------------------------------------------------------------------------------------------------

	//TASK 1 
	/*ifstream finDio("Dio.txt", ios::binary);
	if (!finDio.is_open())
	{
		cout << "File 'Dio.txt' opening error!\n";
		system("pause");
		return 1;
	}
	ofstream foutAsk("Ask.txt");
	if (!foutAsk.is_open())
	{
		cout << "Error, file 'Ask.txt' not found!\n";
		system("pause");
		return 1;
	}

	finDio.seekg(0, ios::end);

	long len = finDio.tellg();
	cout << "File 'Dio.txt' lenght: " << len << endl;

	char *buf = new char[len + 1];
	finDio.seekg(0, ios::beg);
	finDio.read(buf, len);
	buf[len] = '\0';
	long n = 0, i = 0;
	while (buf[i])
	{
		if (buf[i] == '?')
		{
			for (int j = n; j <= i; j++)
			{
				if (j == i)
				{
					foutAsk << buf[j] << '\n';
				}
				else
				{
					foutAsk << buf[j];
				}
			}
			n = i + 1;
		}
		if (buf[i] == '.' || buf[i] == '!' || buf[i] == '\n')
		{
			n = i + 1;
		}
		i++;
	}

	foutAsk.close();
	finDio.close();*/

	//------------------------------------------------------------------------------------------------------------------

	//TASK 2	
	//ifstream finAsk("Ask.txt", ios::binary);//open to read from file
	//if (!finAsk.is_open())
	//{
	//	cout << "File 'Ask.txt' opening error!\n";
	//	system("pause");
	//	return 1;
	//}

	//finAsk.seekg(0, ios::beg);
	//finAsk.seekg(0, ios::end);
	//long lenAsk = finAsk.tellg();
	//cout << "File 'Ask.txt' length is : " << lenAsk << "\n";
	//char *bufAsk = new char[lenAsk + 1];
	//finAsk.seekg(0, ios::beg);
	//finAsk.read(bufAsk, lenAsk);

	//ofstream foutAskBin("Ask_Dump.dat", ios::binary);//open to write on file
	//if (!foutAskBin.is_open())
	//{
	//	cout << "File 'Ask_Dump.dat' opening error!\n";
	//	system("pause");
	//	return 1;
	//}

	//for (int i = 0; i < lenAsk + 1; i++)
	//{	
	//	foutAskBin << bufAsk[i];
	//}

	//finAsk.close();	
	//foutAskBin.close();

	//------------------------------------------------------------------------------------------------------------------
	
	//TASK 3.1.1
	/*const int n = 10;	
	int *arr = new int[n];
	int arr_new, i, pos;
	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "\t";
	}
	ofstream fin("Array_Edit.txt", ios::binary);
	if (!fin.is_open())
	{
		cout << "File 'Array_Edit.txt' opening error\n";
		return 1;
	}

	fin.write((char*)arr, sizeof(arr)*n);
	fin.close();

	cout << "\n";
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
		cout << arr[i] << "\t";
	}

	cout << "\nInput position of element (0 to  " << n << "): ";
	cin >> i;
	cout << "\nInput new value of element: ";
	cin >> arr_new;
	fstream fout("Array_Edit.txt", ios::binary | ios::in | ios::out);
	if (!fout.is_open())
	{
		cout << "File 'Array_Edit.txt' reading error\n";
		return 1;
	}

	fout.seekg(0, ios::end);
	long len = fout.tellg();
	cout << "File size: " << len << "\n";
	pos = i * sizeof(int);
	cout << "Position of new element: " << pos << "\n";
	fout.seekg(pos, ios::beg);
	fout.write((char*)&arr_new, sizeof(arr_new));

	fout.seekg(0);
	fout.read((char*)arr, sizeof(arr)*n);

	for (i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	fout.close();*/

	//------------------------------------------------------------------------------------------------------------------
	
	//TASK 3.1.2
	/*const int n = 3, m =4;
	int arr[n][m];
	int arr_new, i, pos, j;

	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	ofstream fin("Array_Edit.txt", ios::binary);
	if (!fin.is_open())
	{
		cout << "File 'Array_Edit.txt' opening error\n";
		return 1;
	}

	fin.write((char*)arr, sizeof(arr)*n);
	fin.close();
	cout << "\n";
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = 0;
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "\nInput position of element (0 to  " << n * m << "): ";
	cin >> i;

	cout << "\nInput new value of element: ";
	cin >> arr_new;
	fstream fout("Array_Edit.txt", ios::binary | ios::in | ios::out);
	if (!fout.is_open())
	{
		cout << "File 'Array_Edit.txt' reading error\n";
		return 1;
	}

	fout.seekg(0, ios::end);
	long len = fout.tellg();
	cout << "File size: " << len << endl;
	pos = i * sizeof(int);
	cout << "Position of new element: " << pos << endl;
	fout.seekg(pos, ios::beg);
	fout.write((char*)&arr_new, sizeof(arr_new));
	fout.seekg(0);
	fout.read((char*)&arr, sizeof(arr));

	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	fout.close();*/

	//------------------------------------------------------------------------------------------------------------------

	//TASK 3.2
	/*int n = 10;
	int *arr = new int[n];
	int arr_new, k, pos;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "\t";
	}
	ofstream fin("Array_Edit.txt", ios::binary);
	if (!fin.is_open())
	{
		cout << "File 'Array_Edit.txt' opening error\n";
		return 1;
	}

	fin.write((char*)arr, sizeof(arr)*n);
	fin.close();

	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
		cout << arr[i] << "\t";
	}

	cout << "\nInput position of  element (0 to  " << n << "): ";
	cin >> k;

	fstream fout("Array_Edit.txt", ios::binary | ios::in | ios::out);
	if (!fout.is_open())
	{
		cout << "File 'Array_Edit.txt' reading error\n";
		return 1;
	}

	fout.seekg(0, ios::end);
	long len = fout.tellg();
	cout << "File size: " << len << "\n";
	pos = k * sizeof(int);
	cout << "Position of new element: " << pos << "\n";

	fout.seekg(0);
	fout.read((char*)arr, sizeof(arr)*n);

	for (int i = k; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	--n;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	fout.close();*/

	//------------------------------------------------------------------------------------------------------------------

	//TASK 4
	//ifstream *fin = new ifstream[2];
	//for (int i = 0; i < 2; i++)
	//{
	//	cout << "Input file name : ";
	//	string s;
	//	cin >> s;
	//	fin[i].open(s.c_str(), ios::binary | ios::in);
	//	if (!fin[i].is_open())
	//	{
	//		cout << "Opening file error!\n";
	//		i--;
	//	}
	//}
	//unsigned char buf1[N], buf2[N];
	//cout << "File comparison\n";
	//do
	//{
	//	fin[0].read((char*)buf1, sizeof buf1);
	//	fin[1].read((char*)buf2, sizeof buf2);
	//	int f1 = fin[0].gcount();
	//	int f2 = fin[1].gcount();
	//	if (f1 != f2)
	//	{
	//		cout << "Files have different sizes\n";
	//		fin[0].close();
	//		fin[1].close();
	//		return 0;
	//	}
	//	else
	//	{
	//		for (int j = 0; j < f1; j++)
	//		{
	//			if (buf1[j] != buf2[j])
	//			{
	//				cout << "Files have different content\n";
	//				fin[0].close();
	//				fin[1].close();
	//				return 0;
	//			}
	//		}
	//	}

	//} while (!fin[0].eof() || !fin[1].eof());
	//cout << "Files are identical\n";
	//fin[0].close();
	//fin[1].close();

	//------------------------------------------------------------------------------------------------------------------

	//INDIVIDUAL TASK (FINISH LATER)
	ifstream finWordMatch("Word_match.txt", ios::binary);
	if (!finWordMatch.is_open())
	{
		cout << "File 'Word_match.txt' opening error!\n";
		system("pause");
		return 1;
	}

	ifstream finHolyDiver("Holy_Diver.txt", ios::binary);
	if (!finHolyDiver.is_open())
	{
		cout << "File 'Holy_Diver.txt' opening error!\n";
		system("pause");
		return 1;
	}

	string wordToMatch, wordToCompareWith;
	int stringsComparisonResult, matchesCounter;

	while (finWordMatch >> wordToMatch)
	{	
		//cout << wordToMatch << "\n";
		/*char buf1[wordToMatch.length()];
		wordToMatch.copy(buf1, wordToMatch.length());
		cout.write(buf1, wordToMatch.length());*/

		matchesCounter = 0;
		while (finHolyDiver >> wordToCompareWith)
		{				
			/*char buf2[wordToCompareWith.length()];
			wordToCompareWith.copy(buf2, wordToCompareWith.length());
			cout.write(buf2, wordToCompareWith.length());*/

			//stringsComparisonResult = strcmp(wordToMatch.c_str(), wordToCompareWith.c_str());
			stringsComparisonResult = wordToMatch.compare(wordToCompareWith);				
			if (stringsComparisonResult == 0)
			{
				matchesCounter++;
			}
		}			
		cout << matchesCounter << " matches of word " << wordToMatch << " found\n";	
		wordToMatch.clear();
		wordToCompareWith.clear();
	}

	finWordMatch.close();
	finHolyDiver.close();

	













	/*string input, word;
	cout << "Input the text to be searched in : ";
	getline(cin, input);
	cout << "Input the word to search : ";
	cin >> word;

	int cnt = 0;
	size_t pos = input.find(word, 0);
	while (pos != string::npos)
	{
		cnt++;
		pos = input.find(word, pos + 1);
	}
	cout << cnt << endl;*/

	
	system("pause");
    return 1;
}