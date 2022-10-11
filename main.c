#include <stdio.h>
#include <stdlib.h>


void print_start(){
	int i;
	for(i=0; i<10; i++){
		printf("*");
	}
}

int main(void) {
	/*
	int i;
	for(i=0; i<10; i++){
		printf("*");
	}
	for(i=0; i<10; i++){
		printf("*");
	}
	for(i=0; i<10; i++){
		printf("*");
	}
	*/
	print_start();
	print_start();
	print_start();
	
	
	return 0;
}
