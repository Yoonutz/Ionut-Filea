//Din tema 2:
//
//1. Stocare in doua array - uri cu "std::vector" :
//	1. Temperaturi;
//2. Nume;
//
//2. O functie care sa faca citirea.ex: void readData();
//3. O functie care sa faca identificarea max.ex: void readData();

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <vector>
#include <limits>

using namespace std;

void MaxTemperature(double);
void SensorNames(string);

int main() 
{
    //Show sensor name
    double max_temp_value{};
    MaxTemperature(max_temp_value);

    //Show max. temperature
    string maximum_sensor_name;
    SensorNames(maximum_sensor_name);
}

void MaxTemperature(double max_temp_value)
{
    vector<double> Temperatures;
    string sensor_name = "";
    int SIZE = 11;
    double temp = 0.0;
    double max_temp = 0.0;

    ifstream myfile("data/sensors.txt", ios::in);

    double number = 0.0;

    for (int count = 0; count < SIZE; count++)
    {
        myfile >> sensor_name >> temp;
        Temperatures.push_back(temp);

        if (max_temp < temp)
        {
            max_temp = temp;
        }
    }

    cout << "Temperatura maxima este: " << max_temp << endl;

    //system("pause");
    //return 0;
}

void SensorNames(string maximum_sensor_name)
{
    vector<string> Sensor_Names;

    string sensor_name = "";
    string max_sensor_name = "";
    int SIZE = 11;
    double temp = 0.0;
    double max_temp = 0.0;

    ifstream myfile("data/sensors.txt", ios::in);

    double number = 0.0;

    for (int count = 0; count < SIZE; count++)
    {
        myfile >> sensor_name >> temp;
        Sensor_Names.push_back(sensor_name);
        if (max_temp < temp)
        {
            max_temp = temp;
            max_sensor_name = sensor_name;
        }
    }

    // cout << max_temp << endl;
    cout << "Sensorul are numele: " << max_sensor_name << endl;

    system("pause");
    //return 0;
}
