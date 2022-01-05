#include <iostream>
using namespace std;

int main()
{
	int p,l;
	cout << "--------------------------------------------" << endl;
	cout << "MENGHITUNG LUAS DAN KELILING PERSEGI PANJANG" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Masukan Nilai Panjang\t: ";
	cin >> p;
	cout << "Masukan Nilai Lebar\t: ";
	cin >> l;

	cout << "-------------------------------------------" << endl;
	cout << "Luas Persegi Panjang adalah " << p*l << endl;
	cout << "Keliling Persegi Panjang adalah " << (p+l)*2 << endl;

	return 0;
}