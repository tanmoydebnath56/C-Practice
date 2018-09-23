#include<stdio.h>
int fac(int a){
	int i, fac=1;
	for(i=1;i<=a;i++){
		fac*=i;
		
	}
	return fac;
}
int main(){
	int a;
	int fact;
	printf("Enter the number for which Factorial is required \n");
	scanf("%d",&a);
	fact=fac(a);
	printf("Factorial is %d",fact);
	return 0;
}
