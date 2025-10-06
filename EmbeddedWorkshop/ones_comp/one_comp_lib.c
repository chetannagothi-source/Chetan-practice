#include "complicb.h"

int one_comp(int bin[32]){
	int one_comp[32];
	int length = (sizeof(bin)/sizeof(bin[0]));
	while ( length == 0 ){
		one_comp[length] = ~bin[length];
	}
	return one_comp;
}
