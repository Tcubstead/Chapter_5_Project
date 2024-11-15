// Thomas Cubstead
// 11/14/24
// Chapter_5_Project
// 2_Student_Lineup
// This program will read out a list of names and print out the number of names that were accounted for in the list

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	//stores names
	vector<string> students;
	string name;

	ifstream inputfile("LineUp.txt");

	//verify that the right file is opened
	if (!inputfile) {
		cout << "error wrong file" << endl;
		return 1;
	}

	//read the names and add them to the vector
	while (getline(inputfile, name)) {
		students.push_back(name);
	}

	inputfile.close();

	//ends program if nobody is in the list
	if (students.empty()) {
		cout << "there are no students in this file" << endl;
		return 0;
	}

	//find the first and last student in the line
	sort(students.begin(), students.end());

	//output
	cout << "Total number of students: " << students.size() << endl;
	cout << "The student at the front of the line: " << students.front() << endl;
	cout << "The student at the end of the line: " << students.back() << endl;


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
