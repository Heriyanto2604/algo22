#include <iostream>
using namespace std;
int main(){
	int i = 0;
	do{
		if (i==7){
			break;
		}
		cout<<i<<" "; i++;
		cout<<endl;
	}
	while (i<10);
	cout<<"------------------------------------"<<endl;
	int a =0;
	while (a<10){
		if (a%2==0){
			a++;
			continue;
		}
		else{
			cout<<a<<" ";
			a++;
			}
	}
}


