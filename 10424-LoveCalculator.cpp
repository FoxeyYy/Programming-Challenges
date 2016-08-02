/*
 * @author Héctor Del Campo
 * Problem ID 10424 - Love Calculator
 */

#include <iostream>
#include <cstdio>
#include <string>
 
int main(){
	using namespace std;
	string name1, name2;
	int sum1, sum2;
	float perc;
  
	while(getline(cin,name1) && getline(cin, name2)){

	sum1 = sum2 = 0;

	for(int i=0;i<name1.length();i++){
		if(islower(name1[i])) sum1+=name1[i]-'a'+1;
		if(isupper(name1[i])) sum1+=name1[i]-'A'+1;
	}

	for(int i=0;i<name2.length();i++){
		if(islower(name2[i])) sum2+=name2[i]-'a'+1;
		if(isupper(name2[i])) sum2+=name2[i]-'A'+1;
	}

	if(sum1 % 9 == 0 ) sum1 = 9;
	else sum1 %= 9;

	if(sum2 % 9 == 0 ) sum2 = 9;
	else sum2 %= 9;

	if( sum2 > sum1) perc = sum1*100.0/sum2;
	else perc = sum2*100.0/sum1;

	printf("%.2f %c\n", perc, '%');

	}
 
	return 0;
}
