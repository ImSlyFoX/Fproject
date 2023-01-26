

#include <fstream>
#include <iostream>
#include <ctime>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

void random(int size,string res, string url)
{
	vector<string> Arr;
	int x = rand() % size;
	fstream file;
	file.open(url);
	
	for (int i = 0; i < size; i++)
	{
		getline(file, res);
		Arr.push_back(res);
		//cout << res << endl;
	
	}
	cout << endl;
	cout << Arr[x]<<endl;
}

int main()
{
	srand(time(0));
	SetConsoleCP(1251);	
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");


	string urlC = "C:/Users/Взрослая академия/Desktop/FprojectCl.csv";
	string urlB = "C:/Users/Взрослая академия/Desktop/FprojectBoots.csv";
	string urlH = "C:/Users/Взрослая академия/Desktop/FprojectHair.csv";
	string urlG = "C:/Users/Взрослая академия/Desktop/FprojectGender.csv";
	string urlCK = "C:/Users/Взрослая академия/Desktop/FprojectColorK.csv";
	string urlKB = "C:/Users/Взрослая академия/Desktop/FprojectColorB.csv";
	string res;
	random(7, res, urlC);
	random(3, res, urlB);
	random(7, res, urlH);
	random(2, res, urlG);
	random(2, res, urlCK);
	random(7, res, urlKB);
	//cout << res;
	//string arr = {res, };
}

