//tema1:
//Crearea unui fisier "sensors.txt" intr - un folder "data" care sa contina :
//	-nume de senzori(fara spatii) : ex.identificatori senzori, senzori de temperatura;
//		Ex.lista:
//			Abacus 54.5;
//			Abacus 52;
//			Prometeus 20;
//			Prometeus 67.1;
//	-valori numerice cu virgula(temperaturi in grade celsius) : ex. 55.1;
//	-min 10 linii in fisierul text;

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
