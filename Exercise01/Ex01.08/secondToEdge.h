
/**
* Function inputs a number using scanf_s and returns it
* @return returns the number inputed from the user
*/
int readNumber();

/**
* calculates the second to largest and second to smallest number and 
* saves it to references given
* @param num1 reference to the first number
* @param num2 reference to the second number
*/
int secondToEdge(int *num1, int *num2);

/**
* returns the bigger number of the two numbers given
* if they are equal then it returns the second number
* @param first number
* @param second number
* @return the bigger of the two
*/
int max(int num1, int num2);

/**
* returns the smaller number of the two numbers given
* if they are equal then it returns the second number
* @param first number
* @param second number
* @return the bsmaller of the two
*/
int min(int num1, int num2);