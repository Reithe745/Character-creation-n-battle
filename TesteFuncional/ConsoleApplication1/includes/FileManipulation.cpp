#include <iostream>
#include <fstream>
#include <string>
#include "FileManipulation.h"
using namespace std;

fstream File;

//write and append to file
void OpenFile_APP() {

	File.open("UserInfo.txt", ios::in | ios::app);

}

//read only
void OpenFile_IN() {

	File.open("UserInfo.txt", ios::in);

}

//write ERASING all that was previously writen
void OpenFile_OUT() {

	File.open("UserInfo.txt", ios::out);

}

void CloseFile() {
	File.close();
}

void WriteFile_OUT(string x) {
	
	OpenFile_OUT();

	File << x << endl;

	CloseFile();
}

void WriteFile_APP(string x) {

	OpenFile_APP();

	File << x << endl;

	CloseFile();
}

string ReadFile(int op) {
	string n = "";
	int line = 0;
	
	OpenFile_IN();

	while (!File.eof()) {
		
		getline(File, n);

		if (line == op) {
			break;
		}
		else {
			line++;
		}
	}

	CloseFile();

	return n;
}