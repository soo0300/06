#include <stdio.h>
#include <stdlib.h>

int square(int a){
	a*=a;
}

int main(void){
	/*
	call by value�� ���� 
	a=2
	square(a);�� 
	printf("a=%i",a);
	�� ���� 2�� ����, ���� �ڵ尡 ���� �ڵ� 
	*/
	
	int a=2;
	a=square(a);
	printf("a=%i\n",a);

	return 0;
		
}
