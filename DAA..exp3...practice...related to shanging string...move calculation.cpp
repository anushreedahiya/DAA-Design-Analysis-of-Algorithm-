//Exp 3:practice....
/*
you are given a string of length 2N consisting of only digits 0 to 9. 
You make a move to choose an arbitrary position and replace the digit in that position with any digit from 0 to 9.
determine the minimum number of moves required to make the sum of the first N digits equal to the sum of the N digits that follow.
Note: 1-based indexing is used
*/
// example let string=111279
// sum1=3; sum2=18; diff=15
/*
also print the string after doing the changes in order to make difference=0------------not done yet
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string str;
	int sum1=0, sum2=0;
	cout<<"Enter the string:"<< endl;
	cin>>str;
	
	int n=str.length()/2;	
	int first[n], second[n];
	for (int i=0; i<n; i++) {
		sum1=sum1+str[i]-'0';
		sum2=sum2+str[i+n]-'0';
		first[i]=str[i]-'0';
		second[i]=str[i+n]-'0';
	}
	
	cout <<"Sum of first n digits=" << sum1 << endl;
	cout <<"Sum of following n digits=" << sum2 << endl;
	
	int diff=abs(sum1-sum2);
	cout <<"Difference of the sum=" << diff <<endl;
	
	int moves=(diff+8)/9;
	cout <<"Moves required=" << moves << endl;
	
	if (sum1 > sum2) {
		cout <<"Sum of the first half is greater than the second half." <<endl;
	} else {
		cout <<"Sum of the second half is greater than the first half." <<endl;
	}
	
	cout << "First half of string: ";
    for (int i = 0; i < n; i++) {
        cout << str[i];
    }
    cout << endl;

    cout << "Second half of string: ";
    for (int i = n; i < 2 * n; i++) {
        cout << str[i];
    }
    cout << endl;
	
	return 0;
}

