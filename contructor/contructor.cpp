#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
public:
	//mahasiswa();
	//mahasiswa(int); agar class diluar
	mahasiswa() {
		nim = 0;
		nama = "";
	}
	mahasiswa(int iNim) {
		nim = iNim;
	}// cara cepat agar masuk kedala,

	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();
};
//mahasiswa() {
//nim = 0;
//nama = "";
//	}
//	mahasiswa(int iNim) {
//		nim = iNim;
//	}memanggil class didalam



mahasiswa::mahasiswa(string iNama) {
	nim = 0;
	nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
	nim = iNim;
	nama = iNama;
}

void mahasiswa::cetak() {
	cout << endl << "Nim =" << nim << endl;
	cout << "Nama =" << nama << endl;
}

int main() {

	mahasiswa mhs1;
	mahasiswa mhs2(20);
	mahasiswa mhs3("gak mandi");
	mahasiswa mhs4(99,"nolep");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	
	system("pause");

	return 0;


}

