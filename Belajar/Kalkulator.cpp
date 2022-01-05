#include <iostream>
using namespace std;

int main ()
{
	int a,b,operasi;
	char pilihan;
	
	do
	{
		cout << "----------------------------" << endl;
		cout << "SELAMAT DATANG DI KALKULATOR" << endl;
		cout << "----------------------------" << endl;
		cout << "Pilih Operasi Hitung" << endl;
		cout << "1. Penjumlahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "Operator yang Anda Pilih : ";
		cin >> operasi;
		cout << "----------------------------" << endl;
	
		if (operasi==1)
		{
			cout << "Masukan Nilai a : ";
			cin >> a;
			cout << "Masukan Nilai b : ";
			cin >> b;
			cout << "Hasil"<< a << "+" << b << "=" << a+b << endl;
			cout << "----------------------------" << endl;
		}
		
		else if (operasi==2)
		{
			cout << "Masukan Nilai a : ";
			cin >> a;
			cout << "Masukan Nilai b : ";
			cin >> b;
			cout << "Hasil"<< a << "+" << b << "=" << a+b << endl;
			cout << "----------------------------" << endl;
		}
		
		else if (operasi==3)
		{
			cout << "Masukan Nilai a : ";
			cin >> a;
			cout << "Masukan Nilai b : ";
			cin >> b;
			cout << "Hasil"<< a << "+" << b << "=" << a+b << endl;
			cout << "----------------------------" << endl;
		}
		
		else if (operasi==4)
		{
			cout << "Masukan Nilai a : ";
			cin >> a;
			cout << "Masukan Nilai b : ";
			cin >> b;
			cout << endl;
			cout << "Hasil"<< a << "+" << b << "=" << a+b << endl;
			cout << "----------------------------" << endl;
		}
		
		else
		{
			cout << "operasi tidak tersedia" << endl;
			cout << "----------------------------" << endl;
		}
		cout << "Apakah Anda Ingin Melakukan Operasi Hitung (Y/N)  : ";
		cin >> pilihan;
		cout << "----------------------------" << endl;
	}
	while (pilihan=='y'||pilihan=='Y');
	cout << "Terima Kasih";
}