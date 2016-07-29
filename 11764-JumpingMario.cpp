/*
 * @author Héctor Del Campo
 * Problem ID 11764 - Jumping Mario
 */

#include <cstdio>
 
int main(){
	using namespace std;
	int caseNum, wallsNum, highNum, lowNum, current, next;

	scanf("%d", &caseNum);
 
	for(int numCase = 1; numCase<=caseNum; numCase++){

		scanf("%d", &wallsNum);
		highNum = lowNum = 0;
		wallsNum--;
		scanf("%d", &current);

		while(wallsNum--){
			scanf("%d", &next);
			if(next > current) highNum++;
			else if (next < current) lowNum++;
			current = next;
		}

		printf("Case %d: %d %d\n", numCase, highNum, lowNum);
	}
 
	return 0;
}
