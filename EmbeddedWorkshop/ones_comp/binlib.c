#include "complicb.h"

int dtobin(int digit){
	int i=0 ,bin[32];
	if ( digit == 0 ){
		return 0;
	} else {
	while ( digit>0 ){
		bin[i] = digit%2;
		digit = digit/2;
		i++;
	}
	return digit;
       	}

}
