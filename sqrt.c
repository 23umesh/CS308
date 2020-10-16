/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//comment
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("DEBUG:Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input<0){
		input = abs(input);
		//printf("Invalid Number!\n");
		printf("DEBUG:Sqrt of -%d is %.2fi\n",input,sqrt(input));
		printf("DEBUG:End of program is near. Exiting\n");
		return (0);
	}
	printf("DEBUG:Sqrt of %d is %.2f\n",input,sqrt(input));
	printf("DEBUG:End of program. Exiting\n");
	return(0);

} // end main

