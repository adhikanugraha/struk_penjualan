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
	else{
		
		if(harga>=45000){
			total=harga-(harga*10/100);	
		}
		cout<<"pesanan yang anda pesan"<<endl;
		cout<<"========================"<<endl;
		if(ayam_goreng==1){
			cout<<"ayam goreng \t"<<pesanan_goreng<<"\t\tRp"<<pesanan_goreng*17000<<endl;
		}
		
		if(ayam_bakar==1){
			cout<<"ayam bakar \t"<<pesanan_bakar<<"\t\tRp"<<pesanan_bakar*21000<<endl;
		}
		cout<<"total harga = Rp"<<harga<<endl;
		if(harga>=45000){
			cout<<"diskon 10% sebanyak = Rp"<< harga*10/100<<endl;
		} 
		cout<<"total yang harus anda bayarkan = Rp"<<total;
		
	}
	
	return 0;
	
		
	
}
