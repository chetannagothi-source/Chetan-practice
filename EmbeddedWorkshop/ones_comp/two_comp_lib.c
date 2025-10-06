#include "complib.h"

int one_comp(int bin[]){
	int two_comp[32];
	int length = (sizeof(bin)/sizeof(bin[0]));
	while ( length == 0 ){
		two_comp[length] = ~bin[length];
	}
	two_comp=
	return two_comp;
}
