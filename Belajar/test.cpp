#include<iostream>
#include<conio.h>
#include<windows.h> // Library untuk fungsi gotoxy. gotoxy = Mengatur koordinat tampilan output pada program
using namespace std;
void gotoxy(int x, int y){ // Fungsi gotoxy
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main (){
	
	awal: // segment awal
	int pil;
	cout<<"          |===================================|            "<<endl;
	cout<<"          |PROGRAM MANAJEMEN KEUANGAN ANAK KOS|            "<<endl;
	cout<<"          |===================================|            "<<endl;
	cout<<"          |Pilihan\n";
	cout<<"          |1. HITUNG KEUANGAN HARIAN          |\n";
	cout<<"          |2. HITUNG KEUANGAN MINGGUAN        |\n";
	cout<<"          |3. HITUNG KEUANGAN BULANAN         |\n";
	cout<<"Pilih: ";
	cin>>pil;
	cout<<"==============================================             "<<endl;
	
	if(pil==1){		// untuk pilihan user memilih perhitungan keuangan harian,mingguan,bulanan
		goto harian;
	}
	else if(pil==2){
		goto mingguan;
	}
	else if(pil==3){
		goto bulanan;
	}
	else {
		cout<<"Inputan tidak Tersedia"; // jika angka yang diinputkan user tidak tersedia di menu
		goto awal;
	}
	
	harian:	// segment harian							// menu untuk pilihan (terdapat pemasukan dan pengeluaran)
		float pemasukan;
		cout<<"1. Masukkan Pemasukan Anda :Rp.";
		cin>>pemasukan;
		cout<<"2. Pengeluaran Anda"<<endl;
		goto kategori;  // goto fungsinya untuk menuju ke segment yang ditentukan
	mingguan: // segment mingguan
		cout<<"1. Masukkan Pemasukan Anda :Rp.";
		cin>>pemasukan;
		cout<<"2. Pengeluaran Anda"<<endl;
		goto kategori;  // goto fungsinya untuk menuju ke segment yang ditentukan
	bulanan: // segment bulanan
		cout<<"1. Masukkan Pemasukan Anda :Rp.";
		cout<<"2. Pengeluaran Anda"<<endl;
		goto kategori;	// goto fungsinya untuk menuju ke segment yang ditentukan
	

	kategori: // segment kategori
		cout<<"2. Kategori Pengeluaran" <<endl;
		cout<<"Silahkan Isi dulu pengeluaran anda di tiap kategori"<<endl;
		string kategori[7]={"Makanan","Belanja","Pakaian","Pendidikan","Olahraga","Kesehatan","lain-lain"}; //array untuk kategori pengeluaran
		
		int panjang = (sizeof(kategori)/8)/3; // Sizeof untuk menampilkan isi dari array yang sudah diisi yaitu yang ada pada array kategori
		
		for(int x=0;x<panjang;x++){					  // Perulangan untuk menampilkan isi array kita tadi
		cout<<" "<<" "<<x+1<<". "<<kategori[x]<<endl; // x+1 untuk membuat angka list untuk urutan perkategori
													  // kategori[x] untuk menampilkan isi array yaitu array kategori
		}
		int kat;
		cout<<"Pilih Kategori : ";					  // Penggunaan if untuk menentukan pilihan user. contoh: jika user menginputkan 1 maka akan ke segment makanan
		cin>>kat;
		if(kat==1){
			goto Makanan; // goto fungsinya untuk menuju ke segment yang ditentukan
		}else if(kat==2){
			goto Belanja; // goto fungsinya untuk menuju ke segment yang ditentukan
		}else if(kat==3){
			goto Pakaian; // goto fungsinya untuk menuju ke segment yang ditentukan
		}else if(kat==4){
			goto Pendidikan; // goto fungsinya untuk menuju ke segment yang ditentukan
		}else if(kat==5){
			goto Olahraga; // goto fungsinya untuk menuju ke segment yang ditentukan
		}else if(kat==6){
			goto Kesehatan; // goto fungsinya untuk menuju ke segment yang ditentukan
		}else if(kat==7){
			goto lainnya; // goto fungsinya untuk menuju ke segment yang ditentukan
		}
	
	float a,b,c,d,e,f,g; // Variabel untuk inputan pengeluaran user
	Makanan: // segment makanan
	cout << "(Kategori Makanan)"<<endl;
	cout << "Masukkan Pengeluaran:Rp.";
	cin>>a;
	cout<<endl;
	goto kategori; // goto fungsinya untuk menuju ke segment yang ditentukan

	Belanja: // segment belanja
	cout << "(Kategori Belanja)"<<endl;
	cout<< "Masukkan Pengeluaran:Rp.";
	cin>>b;
	cout<<endl;
	goto kategori; // goto fungsinya untuk menuju ke segment yang ditentukan

	Pakaian: // segment  pakaian
	cout << "(Kategori Pakaian)"<<endl;
	cout<<"Masukkan Pengeluaran:Rp.";
	cin>>c;
	cout<<endl;
	goto kategori; // goto fungsinya untuk menuju ke segment yang ditentukan

	Pendidikan: // segment pendidikan
	cout << "(Kategori Pendidikan)"<<endl;
	cout<<"Masukkan Pengeluaran:Rp.";
	cin>>d;
	cout<<endl;
	goto kategori; // goto fungsinya untuk menuju ke segment yang ditentukan

	Olahraga: // segment olahraga
	cout << "(Kategori Olahraga)"<<endl;
	cout<<"Masukkan Pengeluaran:Rp.";
	cin>>e;
	cout<<endl;
	goto kategori; // goto fungsinya untuk menuju ke segment yang ditentukan

	Kesehatan: // segment kesehatan
	cout << "(Kategori Kesehatan)"<<endl;
	cout<<"Masukkan Pengeluaran:Rp.";
	cin>>f;
	cout<<endl;
	goto kategori; // goto fungsinya untuk menuju ke segment yang ditentukan

	lainnya: // segment lainnya
	int x; // Variabel untuk menampung pilihan user
	cout << "(Kategori lainnya)"<<endl;
	cout<<"Masukkan Pengeluaran:Rp.";
	cin>>g;
	cout<<"========================================================================================"<<endl;
	cout<<"Setelah Menginputkan Pengeluaran Anda di tiap kategori sistem akan melakukan perhitungan"<<endl;
	cout<<"Apakah Anda ingin melihat hasilnya ? (jika iya input: 1 | jika tidak input: 2) : ";
	cin>>x;
	if(x==1){ 
		goto hasil; // Jika User menginputkan 1 maka akan pergi ke segment hasil
	}else{
		exit(0); // Jika User menginputkan angka selain 1 maka program akan keluar
	
	hasil:
	float total;  // variabel total inputan pengeluaran
	int ratarata; // variabel rata-rata pengeluaran
	float p1,p2,p3,p4,p5,p6,p7,p8; // variabel untuk persentase pengeluaran
	int sisa; // variabel sisa uang pengeluaran
	total=a+b+c+d+e+f+g;   // Semua inputan User dijumlahkan
	sisa=pemasukan-total;  // Pemasukan - total pengeluaran
	ratarata=total/7;      // mencari rata-rata pengeluaran
	p1=(a/pemasukan)*100;  // mencari Persentase Pengeluaran dengan membagi inputan user perkategori dengan pemasukan lalu dikali 100
	p2=(b/pemasukan)*100;
	p3=(c/pemasukan)*100;
	p4=(d/pemasukan)*100;
	p5=(e/pemasukan)*100;
	p6=(f/pemasukan)*100;
	p7=(g/pemasukan)*100;
	p8=(sisa/pemasukan)*100;
	cout<<endl;
	cout<<"================================="<<endl;    // Output/hasil dari data user
	cout<<"Total Pemasukan Anda:Rp."<<pemasukan<<endl;
	cout<<"Total Pengeluaran Anda:Rp."<<total<<endl;
	cout<<"Sisa Uang Anda:Rp."<<sisa<<endl;
	cout<<"Rata-rata Pengeluaran Anda:Rp."<<ratarata<<endl;
	cout<<"Persentase Pengeluaran Anda:"<<endl;
	cout<<"1.Makanan\t: "<<p1<<"%"<<endl;
	cout<<"2.Belanja\t: "<<p2<<"%"<<endl;
	cout<<"3.Pakaian\t: "<<p3<<"%"<<endl;
	cout<<"4.Pendidikan\t: "<<p4<<"%"<<endl;
	cout<<"5.Olahraga\t: "<<p5<<"%"<<endl;
	cout<<"6.Kesehatan\t: "<<p6<<"%"<<endl;
	cout<<"7.lainnya\t: "<<p7<<"%"<<endl;
	cout<<"8.Sisa Uang Anda: "<<p8<<"%"<<endl;
	cout<<endl;
	cout<<"Grafik Persentase Pengeluaran Anda :\n";
	cout<<"-------------------------------------\n";
	cout<<"\n";
	
	// perulangan yang digunakan untuk menampilkan Grafik Persentase
	float g1,g2,g3,g4,g5,g6,g7; // Variabel untuk tampilan per kategori
	// Perulangan untuk menampilkan chart bar yaitu fondasi tampilan dari grafik
	for(float m=0;m<=20;m++)
	{
	int n;
	n= m*5;
	gotoxy(2,150-m);cout<<n;  // gotoxy(2,140) merupakan koordinat peletakan angka yang diinginkan (x,y)
							 // gotoxy ini fungsinya untuk menampilkan bilangan kelipatan 5. contohnya 0 5 10 15 20 dan seterusnya sampai 100. angka dimulai vertikal dari bawah ke atas.
	}						// fungsi variabel n disini untuk mengalikan pertambahan m dengan 5. jika m=1 maka dikalikan 5 hasilnya 1. jika m=2 maka dikalikan dengan 5 hasilnya 10 begitu seterusnya sampai nilai m<=20
	for(int o=0;o<=20;o++) // gotoxy ini fungsinya untuk menempatkan tanda | sesuai dengan gotoxy sebelumnya
	{
	gotoxy(5,150-o);cout<<"|";
	}
	for(int p=0;p<=70;p++) 
	{
	for(int q=0;q<=20;q++)
	{
	gotoxy(6+p,130+q);cout<<"-"; // Perulangan ini fungsinya untuk menampilkan garis (-)
	}
	}
	
	// perulangan ini untuk menampilkan hasil persentase per kategori
	// untuk penjelasan lebih lanjut nanti akan saya jelaskan di pertemuan kelompok selanjutnya
	// Revisi : 1. Belum bisa mengubah inputan kategori yang diinginkan user
			//	2. Kekurangan selanjutnya bisa dikasi tau di grup kesayangan kita semua

	g1=p1/5; 
	for(float x=0;x<=g1;x++)
	{
	gotoxy(9,150-x);cout<<"|#|";
	gotoxy(7,151);cout<<"Makanan";
	}
	g2=p2/5;
	for(float y=0;y<=g2;y++)
	{
	gotoxy(18,150-y);cout<<"|#|";
	gotoxy(16,151);cout<<"Belanja";
	}
	g3=p3/5;
	for(float z=0;z<=g3;z++)
	{
	gotoxy(27,150-z);cout<<"|#|";
	gotoxy(25,151);cout<<"Pakaian";
	}
	g4=p4/5;
	for(float u=0;u<=g4;u++)
	{
	gotoxy(37,150-u);cout<<"|#|";
	gotoxy(34,151);cout<<"Pendidikan";
	}
	g5=p5/5;
	for(float v=0;v<=g5;v++)
	{
	gotoxy(48,150-v);cout<<"|#|";
	gotoxy(46,151);cout<<"Olahraga";
	}
	g6=p6/5;
	for(float w=0;w<=g6;w++)
	{
	gotoxy(59,150-w);cout<<"|#|";
	gotoxy(56,151);cout<<"Kesehatan";
	}
	g7=p7/5;
	for(float h=0;h<=g7;h++)
	{
	gotoxy(69,150-h);cout<<"|#|";
	gotoxy(67,151);cout<<"lainnya";
	}

	getch();

		}
	}
