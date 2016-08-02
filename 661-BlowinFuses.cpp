/*
 * @author Héctor Del Campo
 * Problem ID 661 - Blowing Fuses
 */

#include <iostream>
 
int main(){
	using namespace std;
	int n, m, c, numSeq = 1, total;
 	int aux;
  
	while(cin >> n >> m >> c && n!= 0  && m !=0 && c != 0){

		int cons[n];
		bool on[n] = {false};
		total = 0;
		int maximal = 0;

		for(int i=0; i<n; i++){
			cin >> aux;
			cons[i] = aux;
		}

		while(m--){
			cin >> aux;
			aux--;
			on[aux] = !on[aux];
			if(on[aux]) total += cons[aux];
			else total -= cons[aux];
			if(total > maximal) maximal = total;
		}

		cout << "Sequence " << numSeq << endl;
		if(maximal > c) cout << "Fuse was blown." << endl;
		else{
			cout << "Fuse was not blown." << endl;
			cout << "Maximal power consumption was " << maximal << " amperes." << endl;
		}
		cout << endl;
		numSeq++;

	}
 
	return 0;
}
