#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	std::string linie;
	std::ifstream sensors("data/sensors.txt");

	if (sensors.is_open())
	{
		std::cout << "Lista sezorilor cu temperaturile aferente:" << '\n';
		std::cout << "" << '\n';
		while (getline(sensors, linie))
		{
			std::cout << linie << '\n';
		}
		sensors.close();
	}
	else
	{
		std::cout << "File is not there" << '\n';
		std::cout << "Please re-write your code" << '\n';
	}
	std::cin.get();
	return 0;
}
