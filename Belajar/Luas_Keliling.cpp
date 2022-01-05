#include <iostream>
using namespace std;

int main()
{
	int pilihan;
	char pilih;
	do
	{
		cout << "----MENGHITUNG LUAS DAN KELILING----" << endl;
		cout << endl;
		cout << "1. Persegi Panjang" << endl;
		cout << "2. Lingkaran" << endl;
		cout << "3. Segitiga" << endl;
		cout << endl;
		cout << "Pilihan Anda : ";
		cin >> pilihan;
	
		if(pilihan==1)
		{
			int p,l;
			cout << "Masukan Panjang : ";
			cin >> p;
			cout << "Masukan Panjang : ";
			cin >> l;
			cout << "Luas Persegi Panjang adalah " << p*l << endl;
			cout << "Keliling Persegi Panjang" << (p+l)*2 << endl;
		}	
		else if(pilihan==2)
		{
			float r;
			const float p=3.14;
			cout << "Masukan Nilai Jari - jari : ";
			cin >> r;
			cout << "Luas Lingkaran adalah " << p*r*r << endl;
			cout << "Keliling Lingkaran adalah " << 2*p*r << endl;
		}	
		else if(pilihan==3)
		{
			float t,a,b,c;
			cout << "Masukan Nilai Tinggi\t\t: ";
			cin >> t;
			cout << "Masukan Nilai Alas / Sisi a\t: ";
			cin >> a;
			cout << "Masukan Nilai Sisi b\t\t: ";
			cin >> b;
			cout << "Masukan Nilai Sisi c\t\t: ";
			cin >> c;
			cout << "Luas Segitiga adalah " << (t*a)/2 << endl;
			cout << "Keliling Segitiga adalah " << a+b+c << endl;
		}
		else if (pilihan<1)
		{
			cout << "Pilihan Anda Tidak Terdaftar" << endl;
			cout << endl;
		}
		else if (pilihan>3)
		{
			cout << "Pilihan Anda Tidak Terdaftar" << endl;
			cout << endl;
		}
		
		cout << "Apakah Anda Ingin Melakukan Operasi Hitung Lain (y/n) : ";
		cin >> pilih;
	}
	while (pilih=='Y'||pilih=='y');
	cout << "Terima Kasih";
	return 0;
}