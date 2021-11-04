#include <iostream>

using namespace std;

void main() {

	int panjang, tinggi, alas, luas, keliling;

	cout << “Masukan Panjang Jajar Genjang : ”;
	cin >> panjang;

	cout << “Masukan Tinggi Jajar Genjang : ”;
	cin >> tinggi;

	cout << “Masukan Alas Jajar Genjang : ”;
	cin >> alas;

	luas = (alas * tinggi);

	keliling = 2 * (panjang + alas);

	cout << luas << endl;
}
