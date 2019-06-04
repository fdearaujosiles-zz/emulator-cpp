// CMakeProject1.cpp : Defines the entry point for the application.
//

#include <fstream>
#include <iostream>
#include <vector>

#include "CMakeProject1.h"
#include ".\\include\8080Emulator.h"

using namespace std;

int main() {

	Cpu state(false);

	char path[250];
	cout << "Set rom path:" << endl;
	cin >> path;

	state.EmulateROM(path);
	 
	return 0;
}
