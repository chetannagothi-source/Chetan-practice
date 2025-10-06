#include<stdio.h>
#include "complicb.h"
int main(){
	int one_comp[32];
	int a,bin[32];
	printf("Enter a number:");
	scanf("%b",&a);
	bin=dtobin(a);
	one_comp=one_comp(bin);
	printf("binary of given value:\n");
	i=(sizeof(bin)/sizeof(bin[0]));
	while (i==0){
		printf("%b",&bin[i]);
		i--;
	}

}
