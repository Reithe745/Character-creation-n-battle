#include <iostream>
#include <fstream>
#include <string>
#include "FileManipulation.h"
using namespace std;

fstream File;

void OpenFile() {
	string x = "??????????";

	File.open("UserInfo.txt", ios::in | ios::app);

	if (File.is_open()) {
		cout << "ok" << endl;

		getline(File, x);
		cout << x;
	}
	else {
		cout << "ERROR";
	}

	File.close();
}

void WriteFile(string x) {
	File.open("UserInfo.txt", ios::in | ios::app);

	if (File.is_open()) {
		cout << "ok" << endl;

		File << x;
	}
	else {
		cout << "ERROR";
	}

	File.close();
}