//tema2:

//1. Din fisierul sensors.txt(din tema1) : Afisare cea mai mare temperatura;
//2. Din fisierul sensors.txt(din tema1) : Afisare nume sezor aferent temperaturii gasite.

#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	const int SIZE = 11; //Size declaration of array	
	string sensor_name = "";
	string max_sensor_name = "";
	float max_temp = std::numeric_limits<double>::min();
	float temp = 0.0;

	ifstream inputFile; //Input file stream object

	inputFile.open("data/sensors.txt"); //Opening the file
	if (!inputFile)
	{
		cout << "There's something wrong with the file!" << endl; //Throw exception
		return -1;
	}
	
	//Read numbers from file into the array
	for (int count = 0; count < SIZE; count++) 
	{
		inputFile >> sensor_name >> temp;
		if (max_temp < temp)
		{
			max_temp = temp;	
			max_sensor_name = sensor_name;
		}
				
	}

	cout << "Valoarea temperaturii maxime este: " << max_temp << endl;
	cout << "Numele senzorului este: " << max_sensor_name << endl;

	inputFile.close();
	system("pause");
	return 0;
}
