/*
 * @author Héctor Del Campo
 * Problem ID 12468 - Zapping
 */

#include <cstdio>
#include <cmath>
 
int main(){
	using namespace std;
	int a, b, up, down, m;

 	while(true){
		scanf("%d %d", &a, &b);

		if(a == -1) break;
		
		m = abs(b-a);

		if(m > 50) m = 100-m;

		printf("%d\n", m);
	}
 
	return 0;
}
