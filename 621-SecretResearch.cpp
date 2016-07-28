/*
 * @author Héctor Del Campo
 * Problem ID 621 - Secret Research
 */

#include <cstdio>
#include <cstring>
 
int main(){
	using namespace std;
	int inputNum, len;
	char input[1000];
 
	scanf("%d", &inputNum);
  
	while(inputNum--){
		scanf("%s", input);
		len = strlen(input);
		
		if(strcmp(input, "1") == 0 || strcmp(input, "4") == 0 || strcmp(input, "78") == 0) printf("+\n");
		else if(input[len - 1] == '5' && input[len - 2] == '3') printf("-\n");
		else if(input[0] == '9' && input[len - 1] == '4') printf("*\n");
		else printf("?\n");

	}
 
	return 0;
}
