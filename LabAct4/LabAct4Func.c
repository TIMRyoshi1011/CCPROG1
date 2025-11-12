/*
	Implement hasEnergy()
	
	@param energy - energy value
	returns: 1 or 0
	
	If the energy value is greater than zero, the function will return 1.
	Otherwise, the function returns 0.
*/
int hasEnergy(int energy) {
	if (energy > 0)
		return 1; //You will have to modify the return value based what should actually be returned.	
	else 
		return 0;
}

/*
	Implement getAction()
	
	@param action - selected action
	returns: energy value of the selected action.
	
	This function will return a value equivalent to the energy required by the selected
	action.
	
	If the action is not valid a valid action(greater than 3 and less than 1),
	display "Not a valid command! Action wasted!" and return 0 when this happens.
	
	Example: If the action value is 1 (for walk), return 3.
*/
int getAction(int action) {
	if (action == 1)
		return 3; //You will have to modify the return value based what should actually be returned.
	else if (action == 2)
		return 2;
	else if (action == 3)
		return 1;
	else {
		printf("Not a valid command! Action wasted!\n");
		return 0;
	}
		
}

/*
	Implement useEnergy()
	
	@param action - selected action by the user
	@param *energy - energy level
	returns: nothing
	
	- This function will first check if the energy level is not zero(0).
	
	- If energy is greater than zero(0), check if there's enough energy to perform the
	  selected action. 
	
	- If there is enough energy for the action, action is peformed and energy is 
	  deducted based on the selected action.
		- If the action walk is selected, display "The robot walked! Energy reduced by 3!"
		- If the action shoot is selected, display "The robot fired a shot! Energy reduced by 7!"
		- If the action recharge is selected, display "The robot recharged some energy! Energy raised by 3!"
	  NOTE: For each action, you must call the getAction() function for updating the
	        energy level.
	
	- If the selected action requires more energy than you currently have,
	  display "Not enough energy!" .
	
	- If energy is equal to zero:
		- Display "No more energy!"
		- Display "Recharging... Energy raised by 3!"
		- Update energy by adding 3 to energy (call the getAction() function). 
*/
void useEnergy(int action, int *energy) {

	if (hasEnergy(*energy)) {

		getAction(action);

		if (action == 1 && *energy > 0) {

		if (*energy >= 3) {
			printf("The robot walked! Energy reduced by 3!\n");
			*energy -= 3;
		}

		else 
			printf("Not enough energy!\n");
	
		
	}

	else if (action == 2 && *energy > 0) {

		if (*energy >= 7) {
			printf("The robot fired a shot! Energy reduced by 7!\n");
			*energy -= 7;
		}
		
		else 
			printf("Not enough energy!\n");
	}

	else if (action == 3) {
		printf("The robot recharged some energy! Energy raised by 3!\n");
		*energy += 3;
	}
}

	else if (*energy == 0) {
		printf("No more energy!\n");
		printf("Recharging... Energy raised by 3!\n");
		*energy += 3;
	}	
}