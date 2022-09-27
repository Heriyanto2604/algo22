#include <iostream>
using namespace std;

#define phi 3.14
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	double r,t,vol;
	
	cout<<"Program Mencari Volume Kerucut"<<endl;
	
	cout<<"Masukkan Jari - Jari Kerucut : "; cin>>r;
	cout<<"Masukkan Tinggi Kerucut : "; cin>>t;
	
	vol = (phi * r * r * t) /3;
	
	cout<<"Volume Kerucut Adalah : "<<vol;
	
	return 0;
}
