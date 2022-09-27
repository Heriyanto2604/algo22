#include <iostream>
using namespace std;


int main() {
	float berat, tinggi, umur, kalori;
	cout<<"Mengetahui Kebutuhan Kalori Seorang Pria :"<<endl;
	cout<<"Masukkan Berat Badanmu :";cin>>berat;
	cout<<"Masukkan Tinggimu :";cin>>tinggi;
	cout<<"Masukkan Umurmu :";cin>>umur;
	kalori=66.5+(13.75*berat) + (5.003*tinggi) - (6.75*umur);
	cout<<"Kalori Yang Tubuhmu Butuhkan Adalah :"<<kalori<<"Kkal";
	return 0;
}
