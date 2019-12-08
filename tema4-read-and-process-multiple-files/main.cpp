#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

int SIZE = 11;

void readFileAndObtainMaxTempAndSensorName(string fileName, double& foundMaxTemp, string& maxTempSensorName)
{
	ifstream myFileStream(fileName);
	string sensorName = "";
	double temperature = 0.0;
	maxTempSensorName = "";
	foundMaxTemp = 0.0;

	for (int count = 0; count < SIZE; count++)
	{
		myFileStream >> sensorName >> temperature;

		if (foundMaxTemp < temperature)
		{
			foundMaxTemp = temperature;
			maxTempSensorName = sensorName;
		}
	}

	myFileStream.close();
}

int main()
{
	vector<string> fileNames;
	fileNames.push_back("data/sensors1.txt");
	fileNames.push_back("data/sensors2.txt");
	fileNames.push_back("data/sensors3.txt");
	fileNames.push_back("data/sensors4.txt");
	fileNames.push_back("data/sensors5.txt");
	
	for (int i = 0; i < fileNames.size(); i++)
	{		
		cout << "** started reading from..." << fileNames[i] << endl;

		double maxTemperature = 0.0;
		string maxTempSensorName = "";
		readFileAndObtainMaxTempAndSensorName(fileNames[i], maxTemperature, maxTempSensorName);
		cout << "** done reading from..." << fileNames[i] << endl;


		cout << "Temperatura maxima de " << maxTemperature 
			<< " de grade este inregistrata la senzorul " << maxTempSensorName << endl;

	}

	return 0;
}
