/*
 * @author Héctor Del Campo
 * Problem ID 11364 - Parking
 */

#include <stdio.h>

#define INT_MIN 0
#define INT_MAX 99
 
int main(){
	int inputNum, input, storesNum, min, max;
 
	scanf("%d", &inputNum);
  
	for(int i = 0; i < inputNum; i++){
		max = INT_MIN;
		min = INT_MAX;
		scanf("%d", &storesNum);
		for(int j = 0; j < storesNum; j++){
			scanf("%d", &input);
			if(input > max) max = input;
			if(input < min) min = input;
		}
		printf("%d\n", (max - min) << 1);
	}
 
	return 0;
}

