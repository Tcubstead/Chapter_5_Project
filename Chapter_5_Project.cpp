// Thomas Cubstead
// 11/14/24
// Chapter_5_Project
// 3_Population_Bar_Chart
// This program asks the user to select a file of population statistics then uses the information within to show the data in a bar chart rounding to the nearest 1000 people

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string townName, filename;
	cout << "enter the name of a town" << endl;
	getline(cin, townName);
	cout << "enter the name of the data file" << endl;
	getline(cin, filename);

	ifstream inputFile(filename);
	if (!inputFile) {
		cerr << "error opening the wrong file." << endl;
		return 1;
	}

	cout << "\n" << townName << " population growth" << endl;
	cout << "(*'s = 1000 people)" << endl;

	string line;

	while (getline(inputFile, line)) {
		stringstream ss(line);
		int year, population;

		ss >> year >> population;

		int stars = population / 1000;
		cout << year << " ";
		
		for (int i = 0; i < stars; ++i) {
			cout << "*";
		}
		cout << endl;
	}
	inputFile.close();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
