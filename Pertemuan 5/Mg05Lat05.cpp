#include <iostream>
using namespace std;
int main() {
	char a;
	cout <<"Menentukan Jenis Kelamin Anda :"<<endl;
	cout<<"----------------------"<<endl;
	cout<<"a. Saya Pria :"<<endl;
	cout<<"b. Saya Wanita :"<<endl;
	cout<<"c. Saya Banci :"<<endl;
	cin>>a;
	switch (a){
	case 'a' : cout<<"Berarti Pria"; break;
	case 'b' : cout<<"Berarti Wanita"; break;
	case 'c' : cout<<"Berarti Banci"; break;
	default : cout<<"Tak ada Kelamin";}
	
	//kurung kurawal berpengaruh
	return 0;
}
