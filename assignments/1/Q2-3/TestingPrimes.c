
#include <stdlib.h>
#include <stdio.h>
#include "isPrime.h"

//int isPrime(int n);

int main(int argc, char ** argv) {
	
	printf("Please enter an integer value : ");
	int value;
	scanf("%d", &value);
	
	int valueIsPrime = isPrime(value);
	if(valueIsPrime == 1) {
		printf("%d is a prime value\n", value);
	}
	else {
		printf("%d is not a prime value\n", value);
	}
	
	return EXIT_SUCCESS;
}
