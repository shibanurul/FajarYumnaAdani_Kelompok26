#include <iostream>
using namespace std;

int pilih_pulsa

class Method {
public:

void daftar_pulsa() {
cin >> pilih_pulsa;
	}
	
void last() {
		daftar_pulsa();
		if (pilihan_pulsa() == 0) {
			cout << "\n   Maaf INPUT yang Anda lakukan salah!!!" << endl;
		}
		else {
			cout << "\n   Akan dilakukan pengisian pulsa ";
			nama_isp();
			cout << "\n   Dengan nominal sebesar Rp " << pilihan_pulsa() << endl;
			cout << "   Untuk nomor tujuan " << no_telp << endl;
			cout << "   ---------------------------------------" << endl;
			cout << "   TOTAL PEMBAYARAN : Rp" << pilihan_pulsa() + 2000 << endl;
		}
	}
};

int main(){
	
	char pilih;
	int isp, no_telp;
	
	cout << " Kelompok 26 \n";
   	cout << " Sift 2 \n";
   	cout << " M. Yoga Ainur Rofiq - 21120120120005 \n";
   	cout << " Nabila Rizqi Mahardika - 21120120120011 \n";
   	cout << " Fajar Yumna Adani - 21120120130128 \n";
   	cout << " Shiba Nurul Aisha - 21120120140136 \n";
	cout << "\n ============== SELAMAT DATANG ==============" << endl;
	cout << "     DI APLIKASI PEMBELIAN PULSA METRO CELL  " << endl;
	
	do {
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
		cin >> pilih;
	}while(pilih== 'y');
	cin.get();
	return 0;
}
