#include <iostream>
#include <string>
using namespace std;

int pilih_pulsa, pulsa, isp;
string no_telp;

class Method {
public:

	void daftar_pulsa() {
		cout << "\n   Silahkan pilih nominal pengisian " << endl;
		cout << "   1 <---10.000           3 <---50.000" << endl;
		cout << "   2 <---20.000           4 <---100.000" << endl;
		cout << "   Masukkan pilihan Anda(1-4): ";
		cin >> pilih_pulsa;
	}

	int pilihan_pulsa() {
		switch (pilih_pulsa) {
		case 1:
			pulsa = 10000;
			break;
		case 2:
			pulsa = 20000;
			break;
		case 3:
			pulsa = 50000;
			break;
		case 4:
			pulsa = 100000;
			break;
		default:
			pulsa = 0;
			break;
		}
		return pulsa;
	}

	void nama_isp() {
		if (isp == 1) {
			cout << "Telkomsel";
		}
		else if (isp == 2) {
			cout << "Indosat";
		}
		else if (isp == 3) {
			cout << "XL";
		}
		else if (isp == 4) {
			cout << "Smartfren";
		}
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

int main() {

	char pilih;
	Method app;

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
		if (isp == 1 || isp == 2 || isp == 3 || isp == 4) {
			app.last();
		}
		else {
			cout << "   Maaf INPUT yang Anda lakukan salah!!!" << endl;
		}

		cout << "\n   Apakah ingin membeli pulsa lagi(y/n): ";
		cin >> pilih;
	} while (pilih == 'y');

	cout << "\n        SILAHKAN LAKUKAN PEMBAYARAN " << endl;
	cout << " ============== TERIMA KASIH ==============" << endl;

	cin.get();
	return 0;
}
