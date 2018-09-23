#include<stdio.h>
int sum(int a){
	if(a!=0)
	return a+sum(a-1);
	else
	return a;
}
int main(){
	int a;
	int Sum=0;
	printf("Enter the number");
	scanf("%d",&a);
	Sum=sum(a);
	printf("The sum is : %d",Sum);
	return 0;
}
