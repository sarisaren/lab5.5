//including library
#include<iostream>
using namespace std;
//defining main function
	int main(){
//declaring types of variables
	int i,j,k,n;
//asking user for the value of n
	cout<<"enter n"<<endl;
	cin>>n;
//for each row do the following
		for(i=1;i<=n;i=i+1){
//print (n-i)spaces in each line
			for(j=1;j<=(n-i);j=j+1){
				cout<<" ";
				}
//print stars for i=1 & i=n
			if (i==1||i==n){
//print n stars
			for (k=1;k<=n;k++){
			cout<<"*";
			}
			}
//print stars & spaces for other rows
			else {
			cout<<"*   *";
			}
		cout<<endl;
		}
	return 0;
	}
