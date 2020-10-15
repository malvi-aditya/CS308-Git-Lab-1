/* This following program calculates the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool valid(int n)  {
	if (n < 0)
		return false;
	return true;
}

// Adding a comment before the main function.
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("NEGSUPPORT:Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if (!valid(input)) {
		printf("NEGSUPPORT:Negative Number\n");
		printf("NEGSUPPORT:End of program. Exiting\n");
		return (0);
	}

	printf("NEGSUPPORT:Sqrt of %d is %f\n",input,sqrt(input));
	printf("NEGSUPPORT:End of program. Exiting\n");
	return(0);

} // end main
 
