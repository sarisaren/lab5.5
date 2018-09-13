#include<iostream>
using namespace std;
//defining main function & variables
	int main(){
	int i,j,k,n;
	//asking user for n
		cout<<"enter n"<<endl;
		cin>>n;
		//for each row do the following
		for(i=1;i<=n;i=i+1){
		//do the following for first & last line
			if (i==1||i==n){
			//print n stars
			for (k=1;k<=n;k++){
			cout<<"*";
			}
			}
			//do the following for else
			else {
			cout<<"*   *";
			}
	cout<<endl;
	}
	return 0;
}
