/*
 * @author Héctor Del Campo
 * Problem ID 11687 - Digits
 */

#include <string>
#include <iostream>

int digits(long number , int count){
	if(number == 1) return count+1;
	int length = 0;
	long aux = number;
	while(aux){
		aux /= 10;
		length++;
	}

	return digits(length, count+1);
}
 
int main(){
	using namespace std;
	string input;
	int count;
 
	while(cin >> input && input != "END"){
		if(input == "1"){ cout << "1" << endl; continue;}
		count = digits(input.length(), 1);
		cout << count << endl;

	}
 
	return 0;
}
