/*
 * @author Héctor Del Campo
 * Problem ID 11727 - Cost Cutting
 */

#include <cstdio>
#include <utility>
 
int main(){
	using namespace std;
	int inputNum;
	int numCase = 1, salary, max, min, aux;
 
	scanf("%d", &inputNum);
  
	while(inputNum--){
		salary = 0;

		scanf("%d %d %d", &min, &salary, &max);

		if(min > max){
			swap(min, max);
		}

		if(salary > max){
			swap(salary, max);
		}

		if(salary < min){
			swap(salary, min);
		}

		printf("Case %d: %d\n", numCase, salary);
		numCase++;
	}
 
	return 0;
}
