//including library
#include<iostream>
using namespace std;
	int main(){
		//declaring variables
		int i,j,n;
		cout<<"what is the value of n"<<endl;
		cin>>n;
			for (i=1;i<=n;i=i+1){
				//print n-1 spaces
				for (j=0;j<=(n-i);j=j+1){
				cout<<" ";
			}
		//print 5 stars
		cout<<"*****";
		cout<<endl;
		}
	return 0;
	}

