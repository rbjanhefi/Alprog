#include <iostream>
using namespace std;

int main ()
{
    awal:
    	string nama;

    	cout << "---------------SELAMAT DATANG---------------" << endl;
    	cout << endl;

    	//IDENTITAS
    	cout << "Masukan Nama Anda : ";
		getline (cin,nama);
		cout << endl;

		//PERIODE
		int periode;
		string waktu;
		cout << "------------PILIH PERIODE WAKTU-------------" << endl;
		cout << endl;
    	cout << "1. Harian" << endl;
    	cout << "2. Mingguan" << endl;
    	cout << "3. Bulanan" << endl;
    	cout << endl;
    	cout << "Pilihan Anda : ";
    	cin >> periode;

    	if(periode == 1)
    	{
    		waktu = "Hari";
		}
		if (periode == 2)
		{
			waktu = "Minggu";
		}
		if (periode == 3)
		{
			waktu = "Bulan";
		}
    	cout << endl;

    	//PEMASUKAN
    	int masuk;
    	cout << "------------------PEMASUKAN-----------------" << endl;
    	cout << endl;
    	cout << "Pemasukan anda pada " << waktu << " ini : Rp.";
		cin >> masuk;
		cout << endl;

		//PENGELUARAN
		int pengeluaran;
		int i,jml;
		char ubah;
		string kat[100]={"Makanan","Pakaian","Transportasi","Kesehatan","Hobi","Pendidikan","Dan Lain-lain"};
		
		cout << "----------------PENGELUARAN-----------------" << endl;
		cout << endl;
		cout << "Kategori Pengeluaran : " << endl;
		cout << endl;
		
		for (i=0;i<7;i++)
		{
			cout << i+1 << ". " << kat[i] << endl;
		}		
		cout << endl;
		
		/*cout << "Apakah anda ingin mengubah kategori diatas (y/n) ? ";
		cin >> ubah;
		cout << endl;*/

		/*//ubah Kategori
		edit :
			if (ubah=='y'||ubah=='Y')
			{
				cout << "---------------UBAH KATEGORI----------------" << endl;
				cout << endl;
				cout << "Berapa banyak kategori yang anda inginkan : ";
				cin >> jml;
				cout << endl;
			
				for (i=0;i<jml;i++)
				{
					cout << "Kategori " << i+1 << " : ";
					cin >> kat[i];
				}
			}
		
			else if (ubah =='n'||ubah=='N')
			{
				cout << "ok";
			}
		
			else
			{
				cout << "wrong";
			}
		
		cout << endl;
		cout << "----------------PENGELUARAN-----------------" << endl;
		cout << endl;
		for (int i=0;i<jml;i++)
		{
			cout << i+1 << ". " << kat[i] << endl;
		}
		cout << endl;
		
		cout << "Apakah anda ingin mengubah kategori diatas (y/n) ? ";
		cin >> ubah;
		cout << endl;
		
		if (ubah=='y'||ubah=='Y')
		{
			goto edit;
		}
		else
		{
	
		}*/
		
		//INPUT PEMASUKAN
		cout << "-------------INPUT PENGELUARAN--------------" << endl;
		cout << endl;
		
		/*int
		for (int i=0;i<jml;i++)
		{
			cout << i+1 << ". " << kat[i] << endl;
			for(int k=0;i<1;i++)
			{
				
			}
		}
		cout << endl;*/
		
		
		
		
		float a,b,c,d,e,f,g;
		cout << "Pengeluaran " << kat[0] << " : Rp."; cin >> a; 
		cout << "Pengeluaran " << kat[1] << " : Rp."; cin >> a;
		cout << "Pengeluaran " << kat[2] << " : Rp."; cin >> b;
		cout << "Pengeluaran " << kat[3] << " : Rp."; cin >> c;
		cout << "Pengeluaran " << kat[4] << " : Rp."; cin >> d;
		cout << "Pengeluaran " << kat[5] << " : Rp."; cin >> f;
		cout << "Pengeluaran lainnya : Rp."; cin >> g;
		cout << endl;
		
		cout << "---------------KEUANGAN ANDA----------------" << endl;
		cout << endl;
		
		float keluar=a+b+c+d+e+f+g;
		cout << "Hai " << nama << endl;
		cout << "Total Pemasukan anda pada " << waktu << " ini adalah Rp." << masuk << endl;
		cout << "Total Pengeluaran anda pada " << waktu << " ini adalah Rp." << keluar << endl;
		cout << endl;
		cout << "Dengan persentase pengeluaran : " << endl;
		cout << kat[0] ;
		
		cout << a/keluar*100;
	
		cout << kat[1] << " : Rp."; cin >> a;
		cout << kat[2] << " : Rp."; cin >> b;
		cout << kat[3] << " : Rp."; cin >> c;
		cout << kat[4] << " : Rp."; cin >> d;
		cout << kat[5] << " : Rp."; cin >> f;
		cout << kat[6] << " : Rp."; cin >> g;
		cout << endl;
		
		if (masuk >= keluar)
		{
			cout << "Anda sudah cukup baik dalam mengatur keuangan anda, pertahankan untuk lebih hemat lagi" << endl;
		}
		else if (masuk<keluar)
		{
			cout << "Anda sangat boros, pengeluaran anda melebihi pemasukan anda, berusaha untuk hemat dalam memanejemen keuangan anda" << endl;
		}
	
		/*cout << "1. Makanan" << endl;
		cout << "2. Pakaian" << endl;
		cout << "3. Transportasi" << endl;
		cout << "4. Kesehatan" << endl;
		cout << "5. Hobi" << endl;
		cout << "6. Pendidikan" << endl;
		cout << "7. Dan Lain-lain" << endl;
		cout << endl;*/




}

