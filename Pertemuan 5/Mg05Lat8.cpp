#include <iostream>
using namespace std;

int main() {
	int n;
	cout<< "Hasil :"; cin>>n;
	switch (n){
		case 80 ... 100 : cout<<"Nilai : A"<<endl;
						  cout<<"Predikat : Sangat Baik"<<endl;
						  break;
	}
	return 0;
}
