#include <stdio.h>
#include <stdlib.h>

int square(int a){
	a*=a;
}

int main(void){
	/*
	call by value에 의해 
	a=2
	square(a);옴 
	printf("a=%i",a);
	의 값은 2가 나옴, 밑의 코드가 옳은 코드 
	*/
	
	int a=2;
	a=square(a);
	printf("a=%i\n",a);

	return 0;
		
}
