/*
 * @author Hector Del Campo
 * Problem ID 10070 - Leap Year or Not Leap Year
 */

#include <iostream>

inline bool isLeap(int year){
	return( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

inline bool isHulu(int year){
	return (year % 15 == 0);
}

inline bool isBulu(int year){
	return (isLeap(year) && year % 55 == 0);
}

int main(){

int year;
	using namespace std;

	while(cin >> year){
		bool leap = isLeap(year),
			hulu = isHulu(year),
			bulu = isBulu(year);
		if(leap){
			cout << "This is a leap year." << endl;
		}
		if(hulu){
			cout << "This is huluculu festival year" << endl;
		}
		if(bulu){
			cout << "This is buluculu festival year" << endl;
		}
		if(!leap && !hulu && !bulu){
			cout << "This is an ordinary year" << endl;
		}
		cout << endl;
	}

}
