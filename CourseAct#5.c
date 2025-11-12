#include <stdio.h>

void useGas(int* gas) { 

	printf("\nGas decreased by 5 liters");
	*gas -= 5;

}

float accelerate() {

	printf("\nThe vehicle accelerated by 5.5 kph.");
	return 5.5;

}

void displayGas(int gas) { 

	printf("\nGas level: %d", gas);
	
}

void displayCurSpeed(float acc) {

	printf("\nCurrent Speed: %.2f", acc);
		
}

void moveCar(int* gas, float* acc) {

	*acc += accelerate();
	useGas(gas);
	displayGas(*gas);
	displayCurSpeed(*acc);

	printf("\n");
}

int main() {
	int gas = 25;
	float acc = 0;
	
	printf("The vehicle was started and will now move.\n\n");
	
	moveCar(&gas, &acc);
	moveCar(&gas, &acc);
	moveCar(&gas, &acc);
	moveCar(&gas, &acc);
	moveCar(&gas, &acc);
	
	printf("\nThe vehicle achieved a speed of %.2f kph before running out of gas.", acc);
	
	return 0;
}
