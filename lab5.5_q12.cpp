#include<iostream>
using namespace std;
//defining main function
	int main(){
	//declaring variables
		int i,j,n;
	//asking user for n
		cout<<"enter the value of value n"<<endl;
		cin>>n;
	//for each row do the following
		for(i=0;i<=n;i=i+1){
	//print n stars
		for (j=0;j<(n-i);j=j+1){
		cout<<"*";
		}
	cout<<endl;
	}
	return 0;
}
