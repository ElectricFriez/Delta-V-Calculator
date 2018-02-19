#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

int main() {
	
	int spi;
	double dryMass;
	double totalMass;
	double deltaV;
	const double grav = 9.81;
	
	cout << "Specific Impulse" << endl;
	cin >> spi;
	cout << "Total Mass" << endl;
	cin >> totalMass;
	cout << "Dry Mass" << endl;
	cin >> dryMass;
	deltaV = (grav * spi) * log(totalMass / dryMass);
	cout << "Delta V = " << deltaV << endl;
	scanf("%i", NULL);
	
	return 0;
	
}