#include <stdio.h>
#include <stdlib.h>


void func2(int x){
	printf("func2 x is at %p\n",&x);
}

void func(){
	int x;
	printf("func1 x is at %p\n",&x);
	func2(x);
}

int main(void) {
	int x;
	printf("main x is at %p\n",&x);
	
	func();
	
	return 0;
}



