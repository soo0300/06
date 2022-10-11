#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b){
	return (a+b);
}

int square(int n){
	return(n*n);

}

int get_max(int x, int y){
	if(x>=y){
		return x;
	}else{
		return y;
		
	}
}
int main(void){
	int ressum, ressquare, resgetmax;
	ressum=sumTwo(2,3);
	ressquare=square(5);
	resgetmax=get_max(-3,4);

	printf("%d %d %d",ressum,ressquare,resgetmax);

	return 0;

			
}
