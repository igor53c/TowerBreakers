// TowerBreakers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int towerBreakers(int, int);
int numberDiv(int);

int main()
{
	cout << towerBreakers(2, 6) << endl;
	return EXIT_SUCCESS;
}

int towerBreakers(int n, int m) {

	if (m == 1) return 2;

	if (n % 2 == 0) 
		return 2;
	
	return 1;
}