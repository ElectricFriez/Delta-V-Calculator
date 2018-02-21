#include <iostream>
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
	
	printf("%s\n", "Specific Impulse");
	cin >> spi;
	printf("%s\n", "Total Mass");
	cin >> totalMass;
	printf("%s\n", "Dry Mass");
	cin >> dryMass;
	deltaV = (grav * spi) * log(totalMass / dryMass);
	cout << "Delta V = " << deltaV << endl;
	scanf("%i", NULL);
	
	return 0;
	
}