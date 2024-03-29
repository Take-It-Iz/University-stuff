
#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>
#include <string> 
#include <Windows.h>
#include <locale>

using namespace std;

int CountWords(const char* ptrToString)
{
	int numberOfWords = 0, someLength = 0;
	if (ptrToString == NULL)
	{
		return 0;
	}

	while (*ptrToString)
	{
		if (*ptrToString == ' ')//if current position is space
		{
			someLength = 0;
		}
		else if (++someLength == 1)//if current position is not a space
		{
			numberOfWords++;
		}
		ptrToString++;
	}

	return numberOfWords;
}

int main()
{  
	//SAMPLE FROM INTERNET NOT SAFE FOR WORK
	//char str[] = "Вывод русского текста из строки!"; // иницализируем строку
	//char * tmp = new char[50]; // инициализируем дополнительный массив
	//CharToOemA(str, tmp); // преобразовываем
	//cout << str << endl; // теперь выводим нашу строку на экран
	//delete[] tmp; // удаляем дополнительный массив


			//1
	//SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	//SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	////setlocale(0, "");
	//const int length = 20;
	//int positionCounter = 0;
	//char city_name[length];
	//char line[length];
	//char* ptrTo_CityName = new char[length];
	//char* ptrTo_line = new char[length];	

	//cout << "Input the city name to search in file : ";
	//cin >> city_name;
	//CharToOemA(city_name, ptrTo_CityName);
	//cout << city_name << " - city name\n";

	//ifstream fin("cities.txt");
	//if (!fin)
	//{
	//	cout << "File opening error!\n";
	//	system("pause"); 
	//	return 1;
	//}

	//while (fin.getline(line, length))
	//{
	//	CharToOemA(line, ptrTo_line);
	//	positionCounter++;

	//	if (strstr(line, city_name))
	//	{
	//		cout << "Exists on position " << positionCounter << "\n";
	//		break;
	//	}
	//	else
	//	{
	//		continue;
	//	}
	//}

	//if (!strstr(line, city_name)) //a bit of indian style
	//{
	//	cout << "Doesn't exist\n";
	//}

	//delete[] ptrTo_CityName;
	//delete[] ptrTo_line;
	//fin.close();


			//2 - using strtok() with #define _CRT_SECURE_NO_WARNINGS			
	//const int length = 250;
	//char line[length]; string wordToSearch;
	//int counterOfWords = 0;

	//cout << "Input the word to search : ";
	//getline(cin,wordToSearch);		

	//ifstream findInHamlet("ShakespeareHamlet.txt");
	//if (!findInHamlet)
	//{
	//	cout << "File opening error!\n";
	//	system("pause");
	//	return 1;
	//}
	//
	//while (findInHamlet.getline(line, length))//while there are strings in file
	//{		
	//	char* ptrToDividedString = strtok(line, wordToSearch.c_str());//start from the beginning of the string 			

	//	while (ptrToDividedString != NULL) //while there're tokens
	//	{	
	//		//cout << ptrToDividedString << "\n";			
	//		counterOfWords++;
	//		ptrToDividedString = strtok(NULL, wordToSearch.c_str());//start from each successfull matching				
	//	}	
	//}

	////cout << counterOfWords - 1 << " matches of letters found\n";
	//	//as function strtok() puts a pointer on a place, where a match is (and the counter iterates), to
	//	//find out the amount of complete words wed have to use the algorithm below : 
	//	//number of matches divide on word.length + null-terminator => (approximate) amount 
	//	//of words (amount of entries of one letter may differ from amount of anoher)
	//cout << counterOfWords / ( wordToSearch.length() + 1 )  << " words found\n";
	//findInHamlet.close();


			//3
	int numOfWords;
	//const char str[] = "But the magic that we'll feel is worth the lifetime";

	cout << "Input a number of words in sentence : "; 
	cin >> numOfWords;
	ifstream readCustomText("DIO.txt");
	if (!readCustomText)
	{
		cout << "File opening error!\n";
		system("pause");
		return 1;
	}

	if (readCustomText)
	{
		// get length of file:
		readCustomText.seekg(0, readCustomText.end);
		int length = readCustomText.tellg();
		readCustomText.seekg(0, readCustomText.beg);

		// allocate memory:
		char * buffer = new char[length];

		// read data as a block:
		readCustomText.read(buffer, length);




		readCustomText.close();
		cout.write(buffer, length);

		delete[] buffer;
	}
	
	
	//int numOfWords = CountWords(str);
	//cout << "Number of words in a sample string is " << numOfWords << "\n";


	//readCustomText.close();





	system("pause");
	return 0;	
}

