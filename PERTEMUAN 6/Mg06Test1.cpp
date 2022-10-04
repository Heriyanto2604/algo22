#include <iostream>
using namespace std;
#define garis  "------------------------"

int main() {
	int jumlah, total, menu;
	
	cout<<"Selamat Datang di Warung Goreng"<<endl;
	cout<<garis<<endl;
	cout<<"1. Nasi Goreng Rp. 15.000"<<endl;
    cout<<"2. Mie Goreng Rp. 15.000"<<endl;
	cout<<"3. Kwetiaw Goreng Rp. 20.000"<<endl;
	cout<<garis<<endl;
	cout<<"Silahkan Pilih Menu yang anda inginkan (1-3) : "; cin>>menu;
	cout<<"Jumlah Pesanan : ";cin>>jumlah;
	
	switch (menu){
		case 1 : cout<<"Menu Anda Nasi Goreng"<<menu<<" dengan harga 15.000 "<<"dengan jumlah pesanan "<<jumlah<<endl; 
		total = 15000*jumlah;
			cout<<"Total Pesanan anda adalah : "<<total;
			break;
	
	
		case 2 : cout<<"Menu Anda mie Goreng"<<" dengan harga 15.000 "<<"dengan jumlah pesanan "<<jumlah<<endl; 
		total = 15000*jumlah;
			 	 cout<<"Total Pesanan anda adalah : "<<total;
			 	 break;
	
		case 3 : cout<<"Menu Anda kwetiaw goreng"<<" dengan harga 15.000 "<<"dengan jumlah pesanan "<<jumlah<<endl; 

		total = 20000*jumlah;
			 	 cout<<"Total Pesanan anda adalah : "<<total;
			 	 break;
			 	 default : cout<<"Input yang anda masukkan salah"<<endl;
	}
	
	return 0;
}
