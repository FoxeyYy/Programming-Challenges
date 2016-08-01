/*
 * @author Héctor Del Campo
 * Problem ID 11507 - Bender B. Rodríguez Problem
 */

#include <cstdio>
#include <iostream>
#include <map>
 
int main(){
	using namespace std;

	int num;
	map<string, map<string, string> > swaps;
	string wire, dir;

	swaps["+x"]["+y"] = "+y";
	swaps["+x"]["-y"] = "-y";
   	swaps["+x"]["+z"] = "+z";
   	swaps["+x"]["-z"] = "-z";
	swaps["-x"]["+y"] = "-y";
	swaps["-x"]["-y"] = "+y";
	swaps["-x"]["+z"] = "-z";
	swaps["-x"]["-z"] = "+z";
	swaps["+y"]["+y"] = "-x";
	swaps["+y"]["-y"] = "+x";
	swaps["+y"]["+z"] = "+y";
	swaps["+y"]["-z"] = "+y";
	swaps["-y"]["+y"] = "+x";
	swaps["-y"]["-y"] = "-x";
	swaps["-y"]["+z"] = "-y";
	swaps["-y"]["-z"] = "-y";
	swaps["+z"]["+y"] = "+z";
	swaps["+z"]["-y"] = "+z";
	swaps["+z"]["+z"] = "-x";
	swaps["+z"]["-z"] = "+x";
	swaps["-z"]["+y"] = "-z";
	swaps["-z"]["-y"] = "-z";
	swaps["-z"]["+z"] = "+x";
	swaps["-z"]["-z"] = "-x";

	while(true){
		scanf("%d", &num);
		if( num == 0) break;
		num--;
		wire = "+x";
		for(int i = 0; i < num; i++){
			cin >> dir;
			if(dir != ("No")) wire = swaps[wire][dir];
		}
		cout << wire << endl;
	}
 
	return 0;
}
