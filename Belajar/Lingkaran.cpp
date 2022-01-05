#include <iostream>
using namespace std;

int main() 
{
	float r;
	const float p=3.14;
	cout << "--------------------------------------" << endl;
	cout << "MENGHITUNG LUAS DAN KELILING LINGKARAN" << endl;
	cout << "--------------------------------------" << endl;

	cout << "Masukan Nilai Jari - jari\t: ";
	cin >> r;

	cout << "--------------------------------------" << endl;
	cout << "Luas Lingkaran adalah " << p*r*r << endl;
	cout << "Keliling Lingkaran adalah " << 2*p*r << endl;

	return 0;
}