

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//return 1 if prime, 0 if not
int isPrime(int n) {
	bool composite = false;
	if(n >= 1) {
		for(int i = 2; i < n && !composite; i++) {
			//printf("i=%d,\t n mod i=%d\n",i, n%i);
			if(n % i == 0) {
				composite = true;
			}
		}
	}
	if(composite) {
		return 0;
	}
	return 1;
}

int main(int argc, char ** argv) {
	
	//printf("%d\n", isPrime(4));
	//printf("%d\n", isPrime(5));
	printf("%d\n", isPrime(strtol(argv[1], NULL, 10)));
	
	return EXIT_SUCCESS;
}