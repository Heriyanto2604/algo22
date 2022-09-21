#include <iostream>
using namespace std;
#define garis "-------------"
int main(){
	string nama;
	int umur;
	
	cout<<"Masukkan Nama Anda :";cin>>nama;
	cout<<"Masukkan Umur Anda :";cin>>umur;
	cout<<garis<<endl;
	cout<<"Terima Kasih "<<nama<<endl;
	cout<<"Umur Anda : "<<umur<<endl;
	(umur > 17 ) ? cout<<"Anda Dewasa"<<endl :
				   cout<<"Anda Bocil"<<endl;
	return 0;
}
