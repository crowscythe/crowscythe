#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int numbers[10],i,temp1=0,temp2=0,j=0;
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++){
		scanf("%d",&numbers[i]);
	}
	while(j<10000){
	
	for(i=0;i<9;i++){
		if(numbers[i]<numbers[i+1]){
			continue;
		}
		else{
			temp1=numbers[i];
			temp2=numbers[i+1];
			numbers[i]=temp2;
			numbers[i+1]=temp1;
			temp1=0;
			temp2=0;
		}
	}
	j++;
	}
	for(i=0;i<10;i++){
		printf("\n**********\n%d\n",numbers[i]);
	}
}
