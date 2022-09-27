#include <iostream>
using namespace std;


int main() {
	int tinggi, berat;
	cout<<"Mencari Tahu Berat Badan Ideal dan Tinggi Seorang Pria :"<<endl;
	cout<<"Masukkan Tinggi :"; cin>>tinggi;
	berat=(tinggi - 100) - (tinggi - 100) * 10/100;
	cout<<"Berat Badan Ideal dan Tinggi Kamu Adalah :"<< tinggi <<"Cm Adalah"<< berat <<"KG";
	return 0;
}
