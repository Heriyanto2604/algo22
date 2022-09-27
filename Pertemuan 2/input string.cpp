#include <iostream>
using namespace std;

int main() {
	string pesan = "Selamat belajar di belajarapp.com", kalimat ="";
	
	cout<<pesan<<endl;
	getline(cin,kalimat); //fungsi input agar dapat membaca kalimat pal
	cout<<kalimat<<endl;
	return 0;
}
