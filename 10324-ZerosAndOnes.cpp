/*
 * @author Héctor Del Campo
 * Problem ID 10324 - Zeros and Ones
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>

int main(){
	using namespace std;

	int casesNum, i, j, numCase = 0;
	bool eq;
	string input;

	while(cin >> input){

		cin >> casesNum;
		numCase++;

		printf("Case %d:\n", numCase);

		while(casesNum--){

			cin >> i >> j;
			eq = true;

			if(i > j) swap(i,j);

			if(i == j){ printf("Yes\n"); continue;}

			for(int pos = i; pos < j; pos++){

				if(input[pos] != input[pos + 1]){ eq = false; break;}

			}

			if(eq) printf("Yes\n");
			else printf("No\n");

		}

	}

	return 0;

}
