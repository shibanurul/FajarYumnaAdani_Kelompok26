#include <iostream>
using namespace std;

int main(){
	
	int isp, no_telp;
	
	cout << " Kelompok 26 \n";
   	cout << " Sift 2 \n";
   	cout << " M. Yoga Ainur Rofiq - 21120120120005 \n";
   	cout << " Nabila Rizqi Mahardika - 21120120120011 \n";
   	cout << " Fajar Yumna Adani - 21120120130128 \n";
   	cout << " Shiba Nurul Aisha - 21120120140136 \n";
	cout << "\n ============== SELAMAT DATANG ==============" << endl;
	cout << "     DI APLIKASI PEMBELIAN PULSA METRO CELL  " << endl;
	
	cout << "\n   ============ DAFTAR OPERATOR ===========" << endl;
	cout << "   1 <---Telkomsel         3 <---XL " << endl;
	cout << "   2 <---Indosat           4 <---Smartfren " << endl;
	cout << "   ---------------------------------------" << endl;
	cout << "   Masukkan pilihan operator(1-4): ";
	cin >> isp;
	cout << "   Masukan nomor telepon Anda : ";
	cin >> no_telp;
	if (isp == 1 || isp == 2 || isp == 3 || isp == 4){
		
	}else {
	
	}	
	cout << "\n   Apakah ingin membeli pulsa lagi(y/n): ";
	
	cin.get();
	return 0;
}
