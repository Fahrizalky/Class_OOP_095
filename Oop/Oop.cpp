#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan nama : ";
		cin >> nama;
		cout << "Masukan nilai : ";
		cin >> nilai;
	}
};

void Mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nNilai : " << nilai;

}

class matakuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK() {
		cout << "\n\nMasukan kode matakuliah : ";
		cin >> kode;
		cout << "Masukan Nama matakuliah : ";
		cin >> namaMK;
		cout << "Masuka sks : ";
		cin >> sks;
	}

	void tampil() {
		cout << "\nData Matakuliah : ";
		cout << "\nKode matakuliah : " << kode;
		cout << "\nNama matakuliah : " << namaMK;
		cout << "\nsks : " << sks;
	}
};

