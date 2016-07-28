/*
 * @author Héctor Del Campo
 * Problem ID 11044 - Searching for Nessy
 */

#include <stdio.h>

int main(){
	int inputNum, rows, cols;

	scanf("%d", &inputNum);

	for(int i = 0; i < inputNum; i++){
		scanf("%d", &rows);
		scanf("%d", &cols);
		printf("%d\n", (rows/3)*(cols/3));
	}

	return 0;
}
