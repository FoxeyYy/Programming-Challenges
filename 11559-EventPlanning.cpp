/*
 * @author Héctor Del Campo
 * Problem ID 11559 - Event Planning
 */

#include <cstdio>
#include <climits>
#include <algorithm>
 
int main(){
	using namespace std;
	long partNum, budget, hotelsNum, weeksNum;
	long price, total, m, rooms;
 
	while(scanf("%ld %ld %ld %ld", &partNum, &budget, &hotelsNum, &weeksNum) != EOF){
		m = INT_MAX;
		while(hotelsNum--){
			scanf("%ld", &price);
			total = partNum * price;
			for(int i = 0; i < weeksNum; i++){
				scanf("%ld", &rooms);
				if(rooms >= partNum && total <= budget) m = min(m, total);
			}
		}

		if(budget >= m) printf("%ld\n", m);
		else	printf("stay home\n");
	}
 
	return 0;
}
