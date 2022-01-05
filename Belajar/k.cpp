#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;

// =fungsi gotxy=
void gotoxy(int x, int y)
{ 
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//=fungsi main=
int main ()
{
    string nama;

	cout << "================================================================================" << endl;
    cout << "=================================SELAMAT DATANG=================================" << endl;
    cout << "================================================================================" << endl;
	cout << endl;

    //IDENTITAS
    cout << "Masukan Nama Anda : ";
	getline (cin,nama);																	/*[getline] berfungsi untuk mengambil inputan dapam satu garis*/
	cout << endl;

	//PERIODE
	int periode;
	string waktu;
	
	pilperiode :
		cout << "===============================PILIH PERIODE WAKTU==============================" << endl;
		cout << endl;
    	cout << "1. Harian" << endl;
    	cout << "2. Mingguan" << endl;
    	cout << "3. Bulanan" << endl;
    	cout << endl;
    	cout << "Pilihan Anda : ";
    	cin >> periode;
    	cout << endl;

    	if(periode == 1)
    	{
    		waktu = "Hari";																/*[goto] berfungsi untuk pindah*/
    		goto pilmasuk;
		}
		if (periode == 2)
		{
			waktu = "Minggu";
			goto pilmasuk;
		}
		if (periode == 3)
		{
			waktu = "Bulan";
			goto pilmasuk;
		}
		else
		{
			cout << "Pilihan yang anda inginkan tidak ada" << endl;
			cout << endl;
			system ("PAUSE");															/*[system ("PAUSE")] berfungsi untuk menjeda proses pemrograman]*/
			cout << endl;
			goto pilperiode;
		}

    //PEMASUKAN
    int pemasukan;
    
    pilmasuk:
    	cout << "===================================PEMASUKAN====================================" << endl;
    	cout << endl;
    	cout << "Pemasukan anda pada " << waktu << " ini : Rp.";
		cin >> pemasukan;
		cout << endl;

	//MENAMPILKAN KATEGORI PENGELUARAN
	int pengeluaran; 
	int jumlah = 7;
	char ubah;
	string kat[100]={"Makanan","Pakaian","Transportasi","Kesehatan","Hobi","Pendidikan","Dan Lain-lain"};
	
		
	cout << "==================================PENGELUARAN===================================" << endl;
	cout << endl;
	cout << "Daftar Kategori Pengeluaran : " << endl;
	cout << endl;
		
	for (int i=0;i<jumlah;i++)
	{
		cout << i+1 << ". " << kat[i] << endl;
	}		
	
	cout << endl;
	cout << "Apakah anda ingin mengubah kategori diatas ( Yes(Y) / No(N) ) ? ";
	cin >> ubah;
	cout << endl;

	//UBAH KATEGORI
	edit :
		if (ubah=='y'||ubah=='Y')
		{
			cout << "=================================UBAH KATEGORI==================================" << endl;
			cout << endl;
			cout << "Berapa banyak kategori pengeluaran yang anda inginkan : ";
			cin >> jumlah;
			cout << endl;
			
			for (int i=0;i<jumlah;i++)
			{
				int g;
				cout << "Kategori " << i+1 << " : ";
				cin >> kat[i];
				
			}
		}
		
		else
		{
			goto input;
		}
		
	cout << endl;
	cout << "==================================PENGELUARAN===================================" << endl;
	cout << endl;
	cout << "Daftar Kategori Pengeluaran Baru : " << endl;
	cout << endl;
	for (int i=0;i<jumlah;i++)
	{
		cout << i+1 << ". " << kat[i] << endl;
	}
	cout << endl;
		
	cout << "Apakah anda sudah yakin dengan Daftar Kategori Pengeluaran diatas ? " << endl;
	cout << "Apakah anda ingin mengubah kategori lagi ( Yes(Y) / No(N) ) ? ";
	cin >> ubah;
	cout << endl;
		
	if (ubah=='y'||ubah=='Y')
	{
		goto edit;
	}
	else
	{
		goto input;
	}
	
	//INPUT PENGELUARAN
	input :
		cout << "===============================INPUT PENGELUARAN================================" << endl;
		cout << endl;
		cout << "Masukan Biaya Pengeluaran Perkategori dibawah : " << endl;
		cout << endl;
		float input [100];
		
		for (int i=0;i<jumlah;i++)
		{
			cout << i+1 << ". " << kat[i] << " : Rp." ;
			for(int k=i;k<=i;k++)
			{
				cin >> input [i];
			}	
		}
		system("cls");	
			
	cout << endl;
		
	//HASIL AKHIR	
	cout << "=================================KEUANGAN ANDA==================================" << endl;		
	cout << endl;
		
	//TOTAL,MIN,MAX
	int tambah,min,max,rata,besar,kecil;
	tambah=0;
	min = input [0];
	max = input [0];
		
	for (int j=0;j<jumlah;j++)
	{
		tambah = tambah + input[j];
		
		if (input [j]<min)
		{
			min=input[j];
		}
		else if (input[j]>max)
		{
			max=input[j];
		}
	}
	rata = tambah/jumlah;
	
	cout << "Halo " << nama << endl;	
	cout << "Total Pengeluaran anda pada " << waktu << "  ini : " << tambah << endl; 
	cout << "Pengeluaran Terbesar : " << max << endl;   
	cout << endl;
	
	//PERSENTASE
	cout << "Persentase Pengeluaran perkategori : " << endl;
		
	for (int i=0;i<jumlah;i++)
	{
		for(int k=i;k<=i;k++)
		{
			cout << "- ";
			for (int l=1;l<=(input[i]/tambah*100);l++)
			{
				cout << "*";
			}
			
			cout << " ";
		}
		
		cout << kat[i];
		cout << " " << setprecision(2) << input[i]/tambah*100 << "%" << endl;				/*[setprecision(2)] berfungsi untuk menampilkan hanya 2 angka dibelakang koma*/
	}
	
	cout << endl;
	
	//KESIMPULAN
	if (pemasukan >= tambah)
	{
		cout << "Sisa uang anda pada " << waktu << " ini adalah " << pemasukan-tambah << endl;
		cout << "Anda sudah cukup baik dalam mengatur keuangan anda" << endl;
		cout << "Pertahankan untuk lebih hemat lagi ya" << nama << endl;
	}
		else if (pemasukan < tambah)
	{
		cout << "Anda sangat boros, pengeluaran anda melebihi pemasukan anda" << endl;
		cout << "Berusaha untuk hemat dalam memanejemen keuangan anda ya "<< nama << endl;
	}
	
	
	//PONDASI GRAFIK
	for(float m=0;m<=20;m++)
	{
		int n;
		n = m*5;
		gotoxy(2,35-m);cout<<n;  	 
	}
							
	for(int o=0;o<=20;o++) 
	{
		gotoxy(5,35-o);cout<<"|";
	}
	
	for(int p=0;p<=75;p++) 
	{
		for(int q=0;q<=20;q++)
		{
			gotoxy(6+p,15+q);cout<<"-"; 
		}
	}
	
	//GRAFIK PERSENTASE KATEGORI
	
	int i=0;
	do
	{
		for(float x=0;x<=((input[i]/tambah*100)/5);x++)
		{
			int p=(i*9)+9;
			int q=(i*7)+9;
			gotoxy(p,35-x);cout<<"|#|";
			gotoxy(q,36);cout<<i+1;
		}
		
		i++;
	}while (i<jumlah);
	
	
	getch ();
	return 0;
}

