#include <iostream>

using namespace std;

// kode program sebelumnya harap dihiraukan :)
void hitungNilai(int nilai) {
	if (nilai >= 85) {
		cout << "Nilai Mutu A \n";
	}
	else if (nilai < 85 && nilai >= 65) {
		cout << "Nilai Mutu B \n";
	} 
	else if (nilai > 50) {
		cout << "Nilai Mutu C \n";
	}
	else {
		cout << "Nilai Mutu D \n";
	}
};

void cetakMenyenangkan(string nama) {
	for (int8_t i = 0; i < 10; i++)
	{
		cout << "Saya " << nama << " Kuliah Di IBIK Menyenangkan " << "\n";
	}
}

void cetakIbik() {
	string nama, npm, kelas, fakultas;
	int nilai;

	cout << "Masukan Nama:";
	cin >> nama;

	cout << "Masukan NPM:";
	cin >> npm;

	cout << "Masukan Kelas:";
	cin >> kelas;

	cout << "Masukan Fakultas:";
	cin >> fakultas;

	cout << "Nama :" << nama << "\n NPM: " << npm << "\n Kelas: " << kelas << "\n Fakultas: " << fakultas;
}

void cetakBillanganGanjil() {
	int bil = 0;

	while (bil < 50)
	{
		bil++;
		if (bil % 2 != 0)
		{
			cout << "ini adalah Bilangan Ganjil :" << bil << endl;
		}
	}
}

void hitungRataRata(int nilai1, int nilai2) {
	int sum;
	int mean;

	sum = (nilai1 + nilai2);
	mean = sum / 2;

	cout << "=== Berikut Adalah Rata-Rata Nilai Anda ===" << endl;
	cout << "Nilai Pertama :" << nilai1 << endl;
	cout << "Nilai Kedua :" << nilai2 << endl;
	cout << "Rata-Rata: " << mean << endl;

	if (mean >= 75) {
		cout << "Keterangan : Nilai Sudah Memenuhi" << endl;
	}
	else {
		cout << "Keterangan : Nilai Tidak Memenuhi" << endl;
	}

	hitungNilai(mean);
}

int main()
{
	int n1, n2;

	cout << "Masukan nilai pertama: ";
	cin >> n1;
	cout << "Masukan nilai kedua: ";
	cin >> n2;

	hitungRataRata(n1, n2);
}
