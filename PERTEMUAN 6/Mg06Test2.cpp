#include <iostream >
using namespace std;

#define garis  "------------------------"

int main() {
	int jumlah, total, h, pil;
	string menu;
	
	cout<<"Selamat Datang di Warung Goreng"<<endl;
	cout<<garis<<endl;
	cout<<"1. Nasi Goreng Rp. 15.000"<<endl;
    cout<<"2. Mie Goreng Rp. 15.000"<<endl;
	cout<<"3. Kwetiaw Goreng Rp. 20.000"<<endl;
	cout<<garis<<endl;
	cout<<"Silahkan Pilih Menu yang anda inginkan (1-3) : "; cin>>pil;
	cout<<"Jumlah Pesanan : ";cin>>jumlah;
	
	if (pil == 1) {
		menu = "Nasi Goreng"; h=15000;
	}
	else if (pil == 2){
		menu = "Mie goreng "; h=15000;
	}
	else if (pil == 3){
		menu = "Kwetiaw Goreng"; h=20000;
	}
	else {
		menu = "Salah Pilihan"; h=0;
	}
	cout<<"Menu Anda : "<<menu<<endl;
	cout<<"Harga nya : "<<h<<endl;
	cout<<"Jumlah Pesanannya : "<<jumlah<<endl;
	total=h*jumlah;
	cout<<"Total bayar anda adalah :"<<total;
}
