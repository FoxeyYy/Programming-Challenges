/*
 * @author Héctor Del Campo
 * Problem ID - 12279 - Emoogle Balance
 */

#include <cstdio>
 
int main(){
	using namespace std;
	int inputNum, input, id = 1, treats = 0;
 
	while(1==1){
		scanf("%d", &inputNum);
		if(inputNum == 0) break;
		
		while(inputNum--){
			scanf("%d", &input);
			if(input == 0) treats--;
			else treats++;
		}

		printf("Case %d: %d\n", id, treats);
		id++;
		treats = 0;
	}
 
	return 0;
}
