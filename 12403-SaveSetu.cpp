/*
 * @author Héctor Del Campo
 * Problem ID 12403 - Save Setu
 */

#include <cstdio>
#include <cstring>

int main(){
	using namespace std;

	int inputNum, quantity;
	long long total = 0;
	char s[10];
 
	scanf("%d", &inputNum);
  
	for(int i = 0; i < inputNum; i++){
		scanf("%s", s);

		if (strcmp(s, "donate") == 0){
			scanf("%d", &quantity);
			total += quantity;
		} else {
			printf("%lld\n", total);
		}

	}
 
	return 0;
}
