#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


int main(int argc, char* argv[])
{


	if (argc == 1)
	{
		cout << "Baga un argument" << endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			string arg = argv[i];
			if (arg == "ab")
			{
				cout << "ab este bine" << endl;
			}
			else
			{
				cout << argv[i] << endl;
			}
		}
	}
	return 0;
}

//int main(int argc, char* argv[])
//{
//    cout << argv[0] << endl;
//    return 0;
//}

//int main(int argc, char* argv[])
//{
//    // Check the number of parameters
//    if (argc < 2) {
//        // Tell the user how to run the program
//        cerr << "Usage: " << argv[0] << " NAME" << endl;
//        /* "Usage messages" are a conventional way of telling the user
//         * how to run a program if they enter the command incorrectly.
//         */
//        return 1;
//    }
//    // Print the user's name:
//    cout << argv[0] << "says hello, " << argv[1] << "!" << endl;
//    return 0;
//}