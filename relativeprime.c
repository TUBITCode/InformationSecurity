#include<stdio.h>

int gcd(int a, int b){
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int main(){
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);
	
	if(gcd(num1,num2) == 1){
	 printf("%d and %d are relatively prime.", num1, num2);
	}
	else{
	 printf("%d and %d are NOT relatively prime.", num1, num2);
	}
	return 0;
}
