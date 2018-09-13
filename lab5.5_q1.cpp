#include<iostream>
using namespace std;
//defining main function
	int main(){
	//declaring variables
	int i,j,n;
	//asking user for the value of n
		cout<<"enter n";
		cin>>n;
	//for each row do the following
		for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
		cout << "*" ;
		}
	cout << endl ;
	}
	return 0;
	}
