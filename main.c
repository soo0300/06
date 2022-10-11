#include <stdio.h>
#include <stdlib.h>
int get_integer(){
	int num; 
	printf("정수를 입력하세요: " );
	scanf("%d",&num);
	return num;
}

int combination(){
	int n=get_integer();
	int r=get_integer();
	
	int up,down,down2;
	up = func1(n); /* n 팩토리얼*/
	down =  func1(n-r); /*(n-r) 팩토리얼*/
	down2 = func1(r); /* r 팩토리얼*/
	
	return up/(down*down2);
	
	
}

int func1(int num){
	int i=num;
	int sum=1;
	for(i; i>0; i--){
		sum*=i;
	}
	return sum;
}

int main(void){
	int result = combination();
	
	printf("%d",result);

	
	return 0;
		
}
