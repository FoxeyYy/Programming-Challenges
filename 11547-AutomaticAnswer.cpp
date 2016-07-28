/*
 * @author Héctor Del Campo
 * Problem ID 11547 - Automatic Answer
 */

#include <stdio.h>
#include <cmath>
 
int main(){
	int inputNum, number;
	long result;
 
	scanf("%d", &inputNum);
  
	for(int i = 0; i < inputNum; i++){
		scanf("%d", &number);
		result = (number*315)+36962;
		printf("%d\n", (int)std::abs((result/10)%10));
	}
 
	return 0;
}
