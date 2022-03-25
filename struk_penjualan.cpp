#include<iostream>
using namespace std;

int main(){
	//deklarasi variable

	
	//tampilan menu

	
	//input pesanan
	cout<<"masukkan menu yang akan anda pesan :"; cin>>menu;
	ulang:
	switch(menu){
	case 1:{
			ayam_goreng=1;
			cout<<"jumlah pesanan anda :"; cin>>pesanan_goreng;
			harga+=17000*pesanan_goreng;
			break;
		}
		case 2:{
			ayam_bakar=1;
			cout<<"jumlah pesanan anda :"; cin>>pesanan_bakar;
			harga+=21000*pesanan_bakar;
			break;
		}
	}
	cout<<"apakah ada pesanan lain (ya/tidak) ?";	cin>>pesanan_lain;
	if(pesanan_lain=="ya"){
		cout<<"silahkan pilih pesanan anda :";	cin>>menu;
		goto ulang;
	}
	
	
	//menampilkan struk pembelian jika tidak ada pesanan tambahan

	
	return 0;
	
		
	
}
