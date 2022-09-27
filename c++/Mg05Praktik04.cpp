#include <iostream>
using namespace std;

int main() {
	int total_belanja;
	char member;
	cout<<"Masukkan Total Belanja :";cin>>total_belanja;
	if (total_belanja  > 1000000){
		cout<<"Member? (Y/T) :";cin>>member;
	}
	if (total_belanja  > 1000000){
		if (member == 'Y' || 'y'){
		cout<<"Potongan 35000"<<endl;
	} else {
		cout<<"Potongan 20000"<<endl;
}
}
	else {
		cout<<"Potongan 0"<<endl;
	}
}
