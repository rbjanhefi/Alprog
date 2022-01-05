#include <iostream>
using namespace std;

int main()
{
     float t,a,b,c;
	cout << "-------------------------------------" << endl;
	cout << "MENGHITUNG LUAS DAN KELILING SEGITIGA" << endl;
	cout << "-------------------------------------" << endl;

	cout << "Masukan Nilai Tinggi\t\t: ";
	cin >> t;
	cout << "Masukan Nilai Alas / Sisi a\t: ";
	cin >> a;
	cout << "Masukan Nilai Sisi b\t\t: ";
	cin >> b;
	cout << "Masukan Nilai Sisi c\t\t: ";
	cin >> c;

	cout << "-------------------------------------------" << endl;
	cout << "Luas Segitiga adalah " << (t*a)/2 << endl;
	cout << "Keliling Segitiga adalah " << a+b+c << endl;

	return 0;
}