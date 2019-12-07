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

vector<double> Temperatures;
vector<string> Sensor_Names;

string sensor_name = "";
string max_sensor_name = "";
int SIZE = 11;
double temp = 0.0;
double max_temp = 0.0;
ifstream myfile("data/sensors.txt");

void MaxTemperature(double);
void ReadList(string);

int main() 
{

    //Read entries
    string sensorNames;
    ReadList(sensorNames);

    //Show sensor name and max. temp. value
    double max_temp_value{};
    MaxTemperature(max_temp_value);
    
    cout << "---------------------------- " << endl;
    cout << "Temperatura maxima este: " << max_temp << endl;
    cout << "Sensorul are numele: " << max_sensor_name << endl;
    cout << "---------------------------- " << endl;
    cout << " " << endl;

    system("pause");
    return 0;
}

void ReadList(string sensorNames)
{
            cout << "Lista sezorilor cu temperaturile aferente:" << endl;

            while (getline(myfile, sensor_name))
            {
                cout << sensor_name << endl;;
            }
            myfile.close();
}

void MaxTemperature(double max_temp_value)
{
    ifstream myfile("data/sensors.txt");

    for (int count = 0; count < SIZE; count++)
    {
        if (myfile.is_open())
        {
            myfile >> sensor_name >> temp;

            if (max_temp < temp)
            {
                max_temp = temp;
                max_sensor_name = sensor_name;
            }
        }
    }
}

