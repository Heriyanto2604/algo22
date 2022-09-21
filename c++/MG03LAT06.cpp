#include <iostream>
using namespace std;
#define garis "-----------------"
int main() {
	
	float uas,uts,hasil;
	
	cout<<"Nilai UTS Kamu :";cin>>uts;
	cout<<"Nilai UAS Kamu :";cin>>uas;
	cout<<garis<<endl;
	
	hasil = (uts + uas) / 2;
	
	(hasil >= 60) ? cout<<hasil<<" Anda Lulus"<<endl :
			      cout<<hasil<<" Anda Tidak Lulus"<<endl;
	return 0;
}
