#include <iostream>

using namespace std;

//STRUCT DATA CUCIAN
typedef struct DataPelanggan *alamatDP; 
struct DataPelanggan
{
    string nama;
    string alamat;
    string nohp;
    string jenis;
    int berat;
    int harga;
    int nomor;
    string waktu;
    alamatDP nextDP; 			
};

//MEMBUAT HEAD NODE DATA PELANGGAN
struct nodeDP
{
    alamatDP headDP; 
};

//MENDEKLARASI KONDISI DATA KOSONG
bool IsEmptyDP(nodeDP L)
{
    return (L.headDP == NULL);
}

//MEMBUAR KONDISI AWAL HEAD KOSONG
void CreateEmptyDP(nodeDP *L)
{
    (*L).headDP = NULL;
}

//MEMBUAT NODE BARU DAN MENGALOKASIKANNYA
alamatDP AllocationDP(string nama, string alamat, string nohp, string jenis, int berat, int harga, string waktu, int nomor)
{
    alamatDP baruDP; //mendeklarasikan node baru
    baruDP = new DataPelanggan;

    baruDP->nama = nama;
    baruDP->alamat = alamat;
    baruDP->nohp = nohp;
    baruDP->jenis = jenis;
    baruDP->berat = berat;
    baruDP->harga = harga;
    baruDP->waktu = waktu;
    baruDP->nomor = nomor;
    baruDP->nextDP = NULL;

    return  baruDP;
}


void tambahAfterDP(alamatDP *pred, string nama, string alamat, string nohp, string jenis, int berat, int harga, string waktu, int nomor)
{
    alamatDP baruDP; 
    baruDP = AllocationDP(nama, alamat, nohp, jenis, berat, harga, waktu, nomor); //mengambil data yang ada data yg sudah dialkoasi

    if(baruDP != NULL) 		//ketika baruDP sudah terisi atau tidak kosong
	{
        baruDP->nextDP = (*pred)->nextDP;  
        (*pred)->nextDP = baruDP;
    }
}

void tambahLastDP(nodeDP *L, string nama, string alamat, string nohp, string jenis, int berat, int harga, string waktu, int nomor)
{
    if (IsEmptyDP(*L))
	{
        alamatDP baruDP;
        baruDP = AllocationDP(nama, alamat, nohp, jenis, berat, harga, waktu, nomor);

        if (baruDP != NULL)
		{
            baruDP->nextDP    = (*L).headDP;
            (*L).headDP        = baruDP;
        }
        
    } else {
        alamatDP P;
        P = L->headDP;;

        while (P->nextDP != NULL)
		{
            P = P->nextDP;
        }
        
        tambahAfterDP(&P, nama, alamat, nohp, jenis, berat, harga, waktu, nomor);
    }   
}

//MENAMPILKAN JUDUL
void Judul()
{
	cout << "=====================================================================" << endl;
    cout << "=                          PROGRAM LAUNDRY                          =" << endl;
    cout << "=====================================================================" << endl;
	cout << endl;
}

//MENAMPILKAN DATA
void riwayatDP(nodeDP *L)
{
    alamatDP P;
    P = (*L).headDP;
    int number = 1;
    
	system("cls");
	Judul();
	cout << "     -----------------------------------------------------------     " << endl;
	cout << "	RIWAYAT PESANAN : " << endl;
	cout << "     -----------------------------------------------------------     " << endl;	
	
    if(IsEmptyDP(*L))
	{
    	cout << "	Belum ada laundry !";
	}
	else
	{	
		while (P->nextDP != NULL)
    	{
        	cout << "	#" << number << endl;
        	cout << "	Nomor Pesanan \t : " << P->nomor << endl;
			cout << "	Jenis Laundry \t : " << P->jenis << endl;
			cout << "	Nama \t\t : " << P->nama << endl;
    		cout << "	Alamat \t\t : " << P->alamat << endl;
    		cout << "	No HP/Telepon \t : " << P->nohp << endl;
    		cout << "	Berat Cucian \t : " << P->berat << " kg" << endl;
    		cout << "	Waktu selesai \t : " << P->waktu << endl;
    		cout << "	Harga \t\t : Rp." << P->harga << endl;
        	cout << "     -----------------------------------------------------------     " << endl;
        	
        	number++;
        	P = P->nextDP;
    	}

    	cout << "	#" << number << endl;
    	cout << "	Nomor Pesanan \t : " << P->nomor << endl;
    	cout << "	Jenis Laundry \t : " << P->jenis << endl;
		cout << "	Nama \t\t : " << P->nama << endl;
    	cout << "	Alamat \t\t : " << P->alamat << endl;
    	cout << "	No HP/Telepon \t : " << P->nohp << endl;
    	cout << "	Berat Cucian \t : " << P->berat << " kg" << endl;
    	cout << "	Waktu selesai \t : " << P->waktu << endl;
    	cout << "	Harga \t\t : Rp." << P->harga << endl;
        cout << "     -----------------------------------------------------------     " << endl;
	}
}

//MENAMPILKAN NOTA
void notaDP(nodeDP *L)
{
    alamatDP P;
    P = (*L).headDP;
    
    while (P->nextDP != NULL)
    {
        P = P->nextDP;
	}
		
    system("cls");
    cout << endl << endl << endl;
    cout << "     -----------------------------------------------------------     " << endl;
    cout << "                               NOTA                                  " << endl;
	cout << "     -----------------------------------------------------------     " << endl;
	cout << "	Nomor Pesanan \t : " << P->nomor << endl;
    cout << "	Jenis Laundry \t : " << P->jenis << endl;
	cout << "	Nama \t\t : " << P->nama << endl;
    cout << "	Alamat \t\t : " << P->alamat << endl;
    cout << "	No HP/Telepon \t : " << P->nohp << endl;
    cout << "	Berat Cucian \t : " << P->berat << " kg" << endl;
    cout << "	Waktu selesai \t : " << P->waktu << endl;
    cout << "	Harga \t\t : Rp." << P->harga << endl;
	cout << "     -----------------------------------------------------------     " << endl;
}

void cariDP(string cari1, int cari2,nodeDP *L)
{
	
	alamatDP P;
	P = (*L).headDP;
    
	bool ketemu=false;
    
    system("cls");
	Judul();
	cout << "     -----------------------------------------------------------     " << endl;
	cout << "	CARI LAUNDRY : " << endl;
	cout << "     -----------------------------------------------------------     " << endl;	
	
    
    if(IsEmptyDP(*L))
	{
    	cout << endl << "	Belum ada laundry !";
	}
	else
	{
		while (P!=NULL)
        {
          	
          	if(cari1==P->nama||cari1==P->nohp)
          	{
        		cout << "     -----------------------------------------------------------     " << endl;  	
          		cout << "	Nomor Pesanan \t : " << P->nomor << endl;
				cout << "	Jenis Laundry \t : " << P->jenis << endl;
				cout << "	Nama \t\t : " << P-> nama << endl;
    			cout << "	Alamat \t\t : " << P-> alamat << endl;
    			cout << "	No HP/Telepon \t : " << P-> nohp << endl;
    			cout << "	Berat Cucian \t : " << P-> berat << " kg" << endl;
    			cout << "	Waktu selesai \t : " << P-> waktu << endl;
    			cout << "	Harga \t\t : Rp." << P-> harga << endl;
        		cout << "     -----------------------------------------------------------     " << endl;
            	ketemu=1;
          	}
          	else if(cari2==P->nomor)
          	{
        		cout << "     -----------------------------------------------------------     " << endl;  	
          		cout << "	Nomor Pesanan \t : " << P->nomor << endl;
				cout << "	Jenis Laundry \t : " << P->jenis << endl;
				cout << "	Nama \t\t : " << P-> nama << endl;
    			cout << "	Alamat \t\t : " << P-> alamat << endl;
    			cout << "	No HP/Telepon \t : " << P-> nohp << endl;
    			cout << "	Berat Cucian \t : " << P-> berat << " kg" << endl;
    			cout << "	Waktu selesai \t : " << P-> waktu << endl;
    			cout << "	Harga \t\t : Rp." << P-> harga << endl;
        		cout << "     -----------------------------------------------------------     " << endl;
            	ketemu=1;
          	}
          	
         	P = P->nextDP;
        }
        if (ketemu==0)
        {
    		cout << "	Data Tidak Ditemukan";
        }
	}
    cout << endl << "	";system("pause");
}

typedef struct 
{
	string namaA;
    string alamatA;
    string nohpA;
    string jenisA;
    int beratA;
    int hargaA;
    int nomorA;
    string waktuA;
}Array;

void sortDP(nodeDP *L, int jumlah, int metode)
{
	Array Dat[jumlah];
	
	alamatDP P;
	P = (*L).headDP;
	
	if(IsEmptyDP(*L))
	{
    	cout << endl << "	Belum ada laundry !";
	}
	else
	{
		for(int k=0;k<jumlah;k++)
		{
			Dat[k].namaA = P->nama;
    		Dat[k].alamatA = P->alamat;
    		Dat[k].nohpA = P->nohp;
    		Dat[k].jenisA = P->jenis;
    		Dat[k].beratA = P->berat;
    		Dat[k].hargaA = P->harga;
    		Dat[k].waktuA = P->waktu;
    		Dat[k].nomorA = P->nomor;
    		
    		P=P->nextDP;
		}
		
		
		
		for(int i=0; i<jumlah; i++)
		{
			int awal = i;
		
			for(int j=i+1; j< jumlah; j++)
			{
			//asc/
				if (metode == 1)
				{
					if (Dat[awal].namaA > Dat[j].namaA)
					{
						awal = j;
					}
				}
			//des
				else if (metode == 2)
				{
					if (Dat[awal].namaA < Dat[j].namaA)
					{
						awal = j;
					}
				}
			}
		
			if(Dat[i].namaA != Dat[awal].namaA)
			{
			
				//wadah untuk simpan
				string SnamaA;			
    			string SalamatA;
    			string SnohpA;
    			string SjenisA;
    			int SberatA;
    			int ShargaA;
    			int SnomorA;
    			string SwaktuA;
			
				SnamaA = Dat[i].namaA;
    			SalamatA = Dat[i].alamatA;
    			SnohpA = Dat[i].nohpA;
    			SjenisA = Dat[i].jenisA;
    			SberatA = Dat[i].beratA;
    			ShargaA = Dat[i].hargaA;
    			SwaktuA = Dat[i].waktuA;
    			SnomorA =Dat[i].nomorA;
    		
    			Dat[i].namaA = Dat[awal].namaA;
    			Dat[i].alamatA = Dat[awal].alamatA;
   		 		Dat[i].nohpA = Dat[awal].nohpA;
    			Dat[i].jenisA = Dat[awal].jenisA;
   				Dat[i].beratA = Dat[awal].beratA;
    			Dat[i].hargaA = Dat[awal].hargaA;
    			Dat[i].waktuA = Dat[awal].waktuA;
    			Dat[i].nomorA = Dat[awal].nomorA;
    		
    			Dat[awal].namaA = SnamaA;
    			Dat[awal].alamatA = SalamatA;
    			Dat[awal].nohpA = SnohpA;
    			Dat[awal].jenisA = SjenisA;
    			Dat[awal].beratA = SberatA;
    			Dat[awal].hargaA = ShargaA;
    			Dat[awal].waktuA = SwaktuA;
    			Dat[awal].nomorA = SnomorA;
			}
		}
		
		for(int j=0;j<jumlah;j++)
		{
			cout << "     -----------------------------------------------------------     " << endl;  	
          	cout << "	Nomor Pesanan \t : " << Dat[j].nomorA << endl;
			cout << "	Jenis Laundry \t : " << Dat[j].jenisA << endl;
			cout << "	Nama \t\t : " << Dat[j].namaA << endl;
    		cout << "	Alamat \t\t : " << Dat[j].alamatA << endl;
   			cout << "	No HP/Telepon \t : " << Dat[j].nohpA << endl;
   			cout << "	Berat Cucian \t : " << Dat[j].beratA << " kg" << endl;
   			cout << "	Waktu selesai \t : " << Dat[j].waktuA << endl;
   			cout << "	Harga \t\t : Rp." << Dat[j].hargaA << endl;
       		cout << "     -----------------------------------------------------------     " << endl;
		}		
	}
}

//MAIN
int main()
{
	int PilihanMenu;
	int nomor =0;
	nodeDP Pelanggan;
	CreateEmptyDP(&Pelanggan);
	int jumlah=0;
	//hapusLastDP(&Pelanggan);
	
	//Perulangan menu utama
	do
	{
		system("CLS");
		Judul();
		string cari1;
		int cari2;
		
		int PilihanLaundry;
		
		cout << "     -----------------------------------------------------------     " << endl;
		cout << "	MENU UTAMA : " << endl;
		cout << "     -----------------------------------------------------------     " << endl;
		cout << "	1. Laundry" << endl;
		cout << "	2. Cari Laundry" << endl;
		cout << "	3. Riwayat" << endl;
		cout << "	4. Keluar" << endl;
		cout << "     -----------------------------------------------------------     " << endl;
		cout << "	Pilihan anda : "; cin >> PilihanMenu;
		
		switch(PilihanMenu)
		{
			case 1 :
				//	Perulangan menu laundry
				do
				{
					system("CLS");
					Judul();
					
					string sementara[2][3]={{"Cuci Setrika Reguler","Cuci Sestrika Ekspress","Cuci Setrika Kilat"},
											{"Cuci Reguler","Cuci Ekspress","Cuci Kilat"}};
					string nama;
					string alamat;
					string nohp;
					string waktu;
					string jenis;
					
					char status = 'T';
					int berat;
					int harga;
					int layanan;
					
					
					cout << "     -----------------------------------------------------------     " << endl;
					cout << "	LAUNDRY : " << endl;
					cout << "     -----------------------------------------------------------     " << endl;
					cout << "	1. Laundry Reguler" << endl;
					cout << "	2. Laundry Ekspress" << endl;
					cout << "	3. Laundry Kilat" << endl;
					cout << "	4. Kembali" << endl;
					cout << "     -----------------------------------------------------------     " << endl;
					cout << "	Pilihan anda : "; cin >> PilihanLaundry;
					
										
					if(PilihanLaundry == 1 ||PilihanLaundry == 2 || PilihanLaundry == 3)
					{
						do
						{
							do
							{
								system("cls");
								Judul();
						
								cout << "     -----------------------------------------------------------     " << endl;
								cout << "	PILIH JENIS LAYANAN : " << endl;
								cout << "     -----------------------------------------------------------     " << endl;
								cout << "	1. Cuci Setrika" << endl;
								cout << "	2. Cuci Biasa" << endl;
								cout << "     -----------------------------------------------------------     " << endl;
								cout << "	Pilihan anda : ";
								cin >>  layanan; cout << endl;
							
								if(layanan !=1 && layanan !=2)
								{
									cout << "	Pilihan tidak tersedia " << endl;
									cout << "	"; system("pause");
								}
							
							}while(layanan != 1 && layanan !=2);
						
							jenis=sementara[layanan-1][PilihanLaundry-1];	
							
							cout << "     -----------------------------------------------------------     " << endl;
							cout << "	INPUT DATA PELANGGAN : " << endl;
							cout << "     -----------------------------------------------------------     " << endl;
                			cout << "	Nama \t : "; cin.ignore(); getline(cin, nama);
               				cout << "	No HP \t : "; cin >> nohp; 
            				cout << "	Alamat \t : "; cin.ignore(); getline(cin, alamat); cout << endl;
               				cout << "     -----------------------------------------------------------     " << endl;
							cout << "	INPUT DATA CUCIAN : " << endl;
							cout << "     -----------------------------------------------------------     " << endl;
               				cout << "	Berat(kg) \t : "; cin >> berat; cout << endl;
               				
               				if(PilihanLaundry == 1)
               				{
								waktu = "3 Hari";
								
               					if(layanan == 1)
               					{
									harga = berat*6000;
								}
								else
								{
									harga = berat*5000;
								}
							}
							else if(PilihanLaundry == 2)
							{
								waktu = "1 Hari";
								
								if(layanan == 1)
               					{
									harga = berat*8000;
								}
								else
								{
									harga = berat*7000;
								}
							}
							else if(PilihanLaundry == 3)
							{
								waktu = "10 Jam";
								
								if(layanan == 1)
               					{
									harga = berat*10000;
								}
								else
								{
									harga = berat*9000;
								}
						 }
								
                    		cout << endl;
                    		cout << "     -----------------------------------------------------------     " << endl;
                    		cout << "	Apakah Data diatas sudah yakin Benar ? (Y/T) \t : "; cin >> status; cout << endl;
                		 	
						}while(status != 'Y' && status !='y');
						jumlah=jumlah+1;
						nomor=nomor+1;
						tambahLastDP(&Pelanggan, nama, alamat, nohp, jenis, berat, harga, waktu, nomor);
						
							
						notaDP(&Pelanggan);
                    	cout << "	"; system("pause");
					}
					
					else
					{
						if(PilihanLaundry == 4)
						{
							cout << endl;
							cout << "	Terima kasih" << endl;
							break;
						}
						else
						{
							cout << endl;
							cout << "	Pilihan tidak tersedia" << endl << "	";
							system("pause");
											
						}
					}
				}while(PilihanLaundry != 4);
				break;
			
			case 2 :
				
				int PilihanCari;
				do
				{
					system("cls");
					Judul();
					cout << "     -----------------------------------------------------------     " << endl;
					cout << "	CARI LAUNDRY : " << endl;
					cout << "     -----------------------------------------------------------     " << endl;
					cout << "	1. Cari dengan data pelanggan" << endl ;
					cout << "	2. Cari dengan nomor pesanan" << endl;
					cout << "     -----------------------------------------------------------     " << endl;
					cout << "	Pilihan anda : "; cin >> PilihanCari;
					cout << "     -----------------------------------------------------------     " << endl;
					if(PilihanCari==1)
					{
						cout << "	Input data yang ingin dicari  (nama/nohp/alamat) ?";
						cin >> cari1;
						cariDP(cari1, cari2,&Pelanggan);
					}
					else if(PilihanCari==2)
					{
						cout << "	Input nomor pesanan yang ingin dicari ?";
						cin >> cari2;
						cariDP(cari1, cari2,&Pelanggan);
					}
					else
					{
						cout << endl << "	Pilihan tidak tersedia" << endl << "	";
						system("pause");
					}
				
				}while(PilihanCari != 1 && PilihanCari != 2);
				
				break;
				
			case 3 :
				int PilihanRiwayat;
				int metode;
				do
				{
					system("cls");
					Judul();
					cout << "     -----------------------------------------------------------     " << endl;
					cout << "	RIWAYAT LAUNDRY : " << endl;
					cout << "     -----------------------------------------------------------     " << endl;
					cout << "	1. Berdasarkan Pesanan" << endl ;
					cout << "	2. Berdasarkan Nama A-Z" << endl;
					cout << "	3. Berdasarkan Nama Z-A" << endl;
					cout << "     -----------------------------------------------------------     " << endl;
					cout << "	Pilihan anda : "; cin >> PilihanRiwayat;
					cout << "     -----------------------------------------------------------     " << endl;
					if(PilihanRiwayat==1)
					{
						riwayatDP(&Pelanggan);
					}
					else if(PilihanRiwayat==2)
					{
						metode =1;
						sortDP(&Pelanggan, jumlah, metode);
					}
					else if(PilihanRiwayat==3)
					{
						metode = 2;
						sortDP(&Pelanggan, jumlah, metode);
						system("pause");	
					}
					else
					{
						cout << endl << "	Pilihan tidak tersedia" << endl << "	";
						system("pause");
					}
					
				}while(PilihanRiwayat != 1 && PilihanRiwayat != 2 && PilihanRiwayat != 3);
				
				cout << endl << "	";
				system("pause");
				break;
				
			default :
				if(PilihanMenu == 4)
				{
					cout << endl;
					cout << "	Terima kasih" << endl;
					break;
				}
				else
				{
					cout << endl;
					cout << "	Pilihan tidak tersedia" << endl << "	";
					system("pause");
					break;			
				}
		}
	}while(PilihanMenu != 4);
	
}

