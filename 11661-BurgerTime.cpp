/*
 * @author Héctor Del Campo
 * Problem ID 11661 - Burger Time
 */

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>

int main(){
	using namespace std;

	int length, m, lastD, lastR;
	string s;

	cin >> length;

	while(length != 0){

		cin >> s;
		lastD = lastR = -1;
		m = length;

		for(int pos = 0; pos < length; pos++){

			if(s[pos] == 'Z'){ m = 0; break;}
			else if(s[pos] == 'R') lastR = pos;
			else if(s[pos] == 'D') lastD = pos;
			if(lastD != -1 && lastR != -1) m = min(m, abs(lastD-lastR));

		}

		printf("%d\n", m);

		cin >> length;

	}

	return 0;

}
