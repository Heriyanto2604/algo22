#include <iostream>
using namespace std;
#define garis "-------------------------"

int main (){
	string nama; 
	int h, kamar, lama, ttlsr, ttl; 
	char sarapan;
	cout << "Hotel Montigo"<<endl;
	cout << garis << endl;
	cout << "1. VVIP (1.000.000)"<<endl;
	cout << "2. VIP (750.000)"<<endl;
	cout << "3. Standard (500.000)"<<endl;
	cout << "4. Melati (250.000)"<<endl;
	cout << garis << endl;
		
	cout << "Masukkan Nama anda : "; cin >> nama;
	cout << "Masukkan Jenis Kamar yang anda mau (1-4) : "; cin >> kamar;
	cout << "Berapa Hari anda ingin menginap? : "; cin >> lama;
	cout << "Dengan Sarapan? (y/n) : "; cin >> sarapan;
	cout << garis << endl;

	cout << "Terima kasih " << nama << endl;
	switch (kamar){
		case 1 : {
			cout << "Kamar anda VVIP "<<endl; h = 1000000;
			
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan"<<endl;
					   ttlsr = h*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl;
			break;
			
			case 'n' : cout << "Lama menginap " << lama << " malam tanpa sarapan "<<endl;
					   ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			
			default : cout << "Input anda gak jelas, jadi mungkin anda ingin menginap tanpa sarapan selama " << lama << "malam" << endl;
					  ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl;
			break;
			}
			
			break;
		}
		
		case 2 : {
			cout << "Kamar anda VIP "<<endl; h = 750000;
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan "<<endl;
					   ttlsr = h*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl; break;
					   
			case 'n' : cout << "Lama menginap " << lama << " malam tanpa sarapan "<<endl;
					   ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl; break;
					   
			default : cout << "Input yang anda masukkan tidak bisa dibaca, jadi akan otomatis tanpa sarapan " << lama << " malam" << endl;
					   ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl; break;
			}
			break;
		}
		
		case 3 :{
			cout << "Kamar anda Standard "<<endl; h = 500000;			
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan "<<endl;
					   ttlsr = h*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl; break;
			
			case 'p' : cout << "Lama menginap " << lama << " malam tanpa sarapan "<<endl;
					   ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl; break;
			
            default : cout << "Input anda gak jelas, jadi mungkin anda ingin menginap tanpa sarapan selama " << lama << " malam" << endl;
					   ttl = h*lama;
					   cout << "Harga Kamar anda : " << ttl << endl; break;
			}
			break;
		}
		
		case 4 : {
			cout << "Kamar anda Melati \n"; h = 250000;
			switch (sarapan){
			case 'y' : cout << "Lama menginap " << lama << " malam dengan sarapan "<<endl;
					   ttlsr = h*lama + lama*50000;
					   cout << "Harga Kamar : " << ttlsr << endl; break;
					   
			case 'n' : cout << "Lama menginap " << lama << " malam tanpa sarapan "<<endl;
					   ttl = h*lama;
					   cout << "Harga Kamar : " << ttl << endl; break;
					   
			default : cout << "Input anda gak jelas, jadi mungkin anda ingin menginap tanpa sarapan selama " << lama << " malam" << endl;
					  ttl = h*lama;
					  cout << "Harga Kamar : " << ttl << endl; break;
			}
			break;
		}
		
		default : cout << "Inputan anda tidak jelas sehingga tidak bisa diproses "<<endl;
	}
	cout << garis << endl << endl;
	cout << "Terima kasih " << nama << " telah menginap di Hotel Bahagia "<<endl;
	cout << "Semoga anda betah";
}
