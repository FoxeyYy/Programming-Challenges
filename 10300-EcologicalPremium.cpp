/*
 * @author Héctor Del Campo
 * Problem ID 10300 - Ecological Premium
 */

#include <cstdio>
 
int main(){
	using namespace std;
	int inputNum, numberFarmers,
		size, animalsNum, friendLin;
	long long sum;
 
	scanf("%d", &inputNum);
  
	while(inputNum--){
		scanf("%d", &numberFarmers);
		sum = 0;
		while(numberFarmers--){
			scanf("%d %d %d", &size, &animalsNum, &friendLin);
			sum += (size*friendLin);
		}
		printf("%lld\n", sum);
	}
 
	return 0;
}
