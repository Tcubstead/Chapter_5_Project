// Thomas Cubstead
// 11/14/24
// Chapter_5_Project
// Population
//This code will acurrately predict the growth of a population based on user input of base population and rate of change
#include <iostream>
#include  <iomanip>
using namespace std;

int main() {
	int intpop;
	double growth;
	int time;
	do {
		cout << "enter the base population size you are examining\n";
		cin >> intpop;
		if (intpop < 2) {
			cout << "error population can not be less than 2\n";
		}
	} while (intpop < 2);
	
	do {
		cout << "enter the rate of growth for the population as a percentage increase\n";
		cin >> growth;
			if (growth < 0) {
				cout << "error growth rate can not be negative\n";
		}
	} while (growth < 0);
	
	do {
		cout << "enter the time in days you wish to know the population after\n";
		cin >> time;
		if (time < 0) {
			cout << "error time must be at least one day\n";
		}
	} while (time < 1);

	growth = growth / 100;

	cout << fixed << setprecision(0);
	cout << "\nDay 0 " << intpop << " organisms\n";

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
