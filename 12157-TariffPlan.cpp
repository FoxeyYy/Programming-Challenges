/*
 * @author Héctor Del Campo
 * Problem ID 12157 - Tariff Plan
 */

#include <cstdio>
 
int main(){
	using namespace std;
	int caseNum, calls, length, costM, costJ;

	scanf("%d", &caseNum);

	for(int i = 1; i <= caseNum; i++){

		costM = costJ = 0;

		scanf("%d", &calls);

		while(calls--){
			scanf("%d", &length);
			costM += ((length)/ 30 + 1) * 10;
			costJ += ((length)/ 60 + 1) * 15;
		}
		
		if (costM < costJ) printf("Case %d: Mile %d\n", i, costM);
		else if (costM > costJ) printf("Case %d: Juice %d\n", i, costJ);
		else printf("Case %d: Mile Juice %d\n", i, costJ);
	}
 
	return 0;
}
