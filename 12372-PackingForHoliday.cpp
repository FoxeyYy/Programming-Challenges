/*
 * @author Héctor Del Campo
 * Problem ID 12372 - Packing for Holiday
 */

#include <cstdio>
 
int main(){
	using namespace std;

	int inputNum;
	int l, w, h;
	int numCase = 1;
 
	scanf("%d", &inputNum);
  
	while(inputNum--){
		scanf("%d %d %d", &l, &w, &h);	
		if(l <= 20 && h <= 20 && w <= 20){
			printf("Case %d: good\n", numCase);
		} else {
			printf("Case %d: bad\n", numCase);
		}
		numCase++;
	}
 
	return 0;
}
