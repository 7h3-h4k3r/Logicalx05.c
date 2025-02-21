#include<stdio.h>
int sod(int num){
	int j=0;
	while(num>0){
		j += num %10;
		num /=10;
	}
	return j;
}
		
int main(){
	int num;
	printf("Enter a number ( Sum of Digit ) {>_");
	if(scanf("%d",&num) == 1 && num<100000){
		printf("Sum Of the Digit is %d ",sod(num));
		}
	else{
		printf("Invalied Value");
		}
}
