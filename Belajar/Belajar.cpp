#include <iostream>

using namespace std;

int main()
{
	cout << "=============================================================================" << endl;
    cout << "=                        PROGRAM MANAJEMEN KEUANGAN                         =" << endl;
    cout << "=============================================================================" << endl;
	cout << endl;
	
	/*cout << "Pilih Menu :" << endl << endl;
	cout << "1. Tampilkan Grafik" << endl;
	cout << "2. Ringkasan Pemasukan dan Pengeluaran" << endl;
	cout << "3. Bantuan" << endl;
	cout << "4. Keluar" << endl;*/
	PERIODE :
		int pilperiode, pilinput;
		string waktu;
		cout << "Pilih Periode Waktu : " << endl << endl;
		cout << "1. Harian" << endl;
		cout << "2. Mingguan" << endl;
		cout << "3. Bulanan" << endl;
		cout << "4. Tahunan" << endl << endl;
		cout << "Pilihan anda : ";
		cin >> pilperiode;
	
			if(pilperiode == 1)
    		{
    			waktu = "hari";
    			goto PEMASUKAN;
			}
			if (pilperiode == 2)
			{
				waktu = "minggu";
				goto PEMASUKAN;
			}
			if (pilperiode == 3)
			{
				waktu = "bulan";
				goto PEMASUKAN;
			}
			else
			{
				cout << "Pilihan yang anda inginkan tidak ada" << endl;
				cout << endl;
				system ("PAUSE");
				cout << endl;
				goto PERIODE;
			}
			
	PEMASUKAN:
		system("cls");
		int masuk;
		cout << "===\t\tPEMASUKAN\t\t==" << endl<< endl;
    	cout << "Input Pemasukan anda : Rp.";
		cin >> masuk;
	
	PENGELUARAN :
		system ("cls");
		int keluar, pilwaktu;
		cout << "===\t\tPENGELUARAN\t\t===" << endl << endl;
		cout << "1. Input data per" << waktu << endl;
		cout << "2. Input data dalam satu " << waktu << " saja" << endl << endl;
		cout << "Pilihan anda : ";
		cin >> pilwaktu;
		
		if (pilwaktu == 1)
		{
			if(pilperiode == 1)
    		{
    			waktu = "hari";
    			goto HARIAN;
			}
			if (pilperiode == 2)
			{
				waktu = "minggu";
				goto MINGGUAN;
			}
			if (pilperiode == 3)
			{
				waktu = "bulan";
				goto BULANAN;
			}
			else
			{
				cout << "Pilihan yang anda inginkan tidak ada" << endl;
				cout << endl;
				system ("PAUSE");
				cout << endl;
				goto PERIODE;
			}
		}
		if (pilwaktu == 2)
		{
			goto SATUWAKTU;
		}
		else
		{
			cout << "Pilihan yang anda inginkan tidak ada" << endl;
			cout << endl;
			system ("PAUSE");
			cout << endl;
			goto PERIODE;
		}
	
		SATUWAKTU :
			
		HARIAN :
			cout << "berhasil";
		
		MINGGUAN :
		BULANAN :
			cout << "";
}
