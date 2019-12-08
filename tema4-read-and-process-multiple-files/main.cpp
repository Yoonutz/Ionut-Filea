#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <direct.h>
#include <dirent.h>




using namespace std;

string sensName = ""; /*, sensName2, sensName3, sensName4, sensName5 = ""; */
double tempName = 0.0; /*, tempName2, tempName3, tempName4, tempName5 = 0.0;*/
int SIZE = 11;

ifstream myFile1("data/sensors1.txt");
ifstream myFile2("data/sensors2.txt");
ifstream myFile3("data/sensors3.txt");
ifstream myFile4("data/sensors4.txt");
ifstream myFile5("data/sensors5.txt");

void checkIfOpen();
void whichFileIs();
void readFile();

int main()
{
	checkIfOpen(); // System checks the file to see if it is opened.

	// Open each file and reads the max temp values
	vector<string> myFile;
	myFile.push_back("myFile1");
	myFile.push_back("myFile2");

	_mkdir("/data");
	DIR* dir;
	
	for (int i = 0; i < myFile.size(); i++)
	{		
		string fisierul_meu = myFile[i];
		cout << fisierul_meu << endl;
		//fisierul_meu >> sensName >> tempName;
		//cout << sensName << " " << tempName << endl;
	}

	/////////////// readFile(); // Reads the max temp and at what sensor it was assigned
	system("pause");
	return 0;

}


void checkIfOpen()
{
	if (!myFile1.is_open())
	{
		cout << "Fisierul cu senzori 1 nu exista!" << endl;
		cin.get();
	}
	else if (!myFile2.is_open())
	{
		cout << "Fisierul cu senzori 2 nu exista!" << endl;
		cin.get();
	}
	else if (!myFile3.is_open())
	{
		cout << "Fisierul cu senzori 3 nu exista!" << endl;
		cin.get();
	}
	else if (!myFile4.is_open())
	{
		cout << "Fisierul cu senzori 4 nu exista!" << endl;
		cin.get();
	}
	else if (!myFile5.is_open())
	{
		cout << "Fisierul cu senzori 5 nu exista!" << endl;
		cin.get();
	}
}

//void whichFileIs()
//{
//	for (int i = 1; i < 5; i++)
//		if (i = 0)
//		{
//			myFile1 >> sensName >> tempName;
//			cout << sensName << tenmName;
//		}
//		else
//		{
//
//		}
//
//}

void readFile()
{
	string maxSensName = "";
	double maxTempName = 0.0;

	for (int count = 0; count < SIZE; count++)
	{
		myFile1 >> sensName >> tempName;

		if (maxTempName <= tempName)
		{
			maxTempName = tempName;
			maxSensName = sensName;
		}
	}

	cout << "Temperatura maxima de " << maxTempName << " de grade este inregistrata la senzorul " << maxSensName << endl;
	cin.get();
}
