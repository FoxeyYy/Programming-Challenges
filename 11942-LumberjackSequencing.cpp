/*
 * @author Héctor Del Campo
 * Problem ID 11942 - Lumberjack Sequencing
 */

#include <cstdio>

#define LUMB_NUM 10
 
int main(){
	using namespace std;
	int caseNum, current, next;
	bool up, down;

	scanf("%d", &caseNum);

	printf("Lumberjacks:\n");

 	while(caseNum--){
		up = down = true;

		scanf("%d", &current);

		for(int i=0; i<LUMB_NUM - 1; i++){
			scanf("%d", &next);

			if(next < current) up = false;
			if(next > current) down = false;

			current = next;
		}


		if(up || down) printf("Ordered\n");
		else printf("Unordered\n");

	}
 
	return 0;
}
