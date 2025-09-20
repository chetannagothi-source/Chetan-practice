#include <stdio.h>
#include "my_definition.h"

int main(){
int X,ct=1;
printf("\n==========This is a Basic calculator!=========\n");
while (ct == 1){
printf("\n\n1. Add \n2. Sub \n3. mul \n4. div \n\n----->");
scanf("%d",&X);
switch (X){
case 1:
add();
break;

case 2:
sub();
break;

case 3:
mul();
break;

case 4:
div();
break;

default:
ct = 0;
} 
}
return 0;
}
