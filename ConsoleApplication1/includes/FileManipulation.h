#pragma once
#include <string>
using namespace std;

void OpenFile_APP();
void OpenFile_IN();
void OpenFile_OUT();
void CloseFile();
void WriteFile_OUT(string);
void WriteFile_APP(string);
void WriteFile_APP_INT(int);
string ReadFile(int);