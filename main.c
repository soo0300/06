#include <stdio.h>
#include <stdlib.h>
int get_integer(){
	int num; 
	printf("������ �Է��ϼ���: " );
	scanf("%d",&num);
	return num;
}

int combination(){
	int n=get_integer();
	int r=get_integer();
	
	int up,down,down2;
	up = func1(n); /* n ���丮��*/
	down =  func1(n-r); /*(n-r) ���丮��*/
	down2 = func1(r); /* r ���丮��*/
	
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
