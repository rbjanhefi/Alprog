#include <iostream>
//#include <stdlib.h>

using namespace std;

typedef basic_string<char> string;


// List and Node Gedung Single List
typedef struct gedungLists *addressGedung;
typedef struct gedungLists {
    string kodeGedung;
    string namaGedung;
    int jumlahRuangan;
    addressGedung nextGedung;
} gedungList;

typedef struct gedungNode {
    addressGedung firstGedung;
};

// selector untuk Gedung
#define KodeGedung(P)           P->kodeGedung
#define NamaGedung(P)           P->namaGedung
#define JumlahRuangan(P)        P->jumlahRuangan
#define NextGedung(P)           (P)->nextGedung
#define FirstGedung(P)          ((P).firstGedung)

// ALL IsEmpty

bool IsEmptyGedung(gedungNode L){
    return ((FirstGedung(L)) == NULL);
}

// ALL CreateEmpty

void CreateEmptyGedung(gedungNode *L){
    FirstGedung(*L) = NULL;
}

// ALL Dealocation
/*
void DeallocationKelas(addressKelas hapus){
    free(hapus);
}

void DeallocationGedung(addressGedung hapus){
    free(hapus);
}

void DeallocationMKuliah(addressMKuliah hapus){
    free(hapus);
}
*/
// ALL Allocation 

addressGedung AllocationGedung(string KodeGedung, string NamaGedung, int JumlahRuangan){
    addressGedung NewElmt;
    NewElmt = new gedungList;

    KodeGedung(NewElmt)       = KodeGedung;
    NamaGedung(NewElmt)       = NamaGedung;
    JumlahRuangan(NewElmt)    = JumlahRuangan;
    NextGedung(NewElmt)       = NULL;

    return  NewElmt;
}

// random String
/*
string printRandomString(int n) 
{ 
    char alphabet[36] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z', '1', '2',
                          '3', '4' ,'5', '6', '7', '8', '9',
                          '0'}; 
  
    string res = ""; 
    for (int i = 0; i < n; i++)  
        res = res + alphabet[rand() % 36]; 

    for (int i = 0; i < res.length(); i++)
    {
        res[i] = toupper(res[i]);
    }
    
    return res; 
}*/ 

// CRUD Kelas
// CRUD Gedung
void tambahAfterGedung(addressGedung *pred, string KodeGedung, string NamaGedung, int JumlahRuangan){
     addressGedung NewElmt;
     NewElmt = AllocationGedung(KodeGedung, NamaGedung, JumlahRuangan);

     if(NewElmt != NULL){
         NextGedung(NewElmt)   = NextGedung(*pred);
         NextGedung(*pred)     = NewElmt;
     }
}

void tambahLastGedung(gedungNode *L, string KodeGedung, string NamaGedung, int JumlahRuangan){
    if (IsEmptyGedung(*L)){
        addressGedung NewElmt;
        NewElmt = AllocationGedung(KodeGedung, NamaGedung, JumlahRuangan);

        if (NewElmt != NULL){
            NextGedung(NewElmt)    = FirstGedung(*L);
            FirstGedung(*L)        = NewElmt;
        }
    } else {
        addressGedung P;
        P = FirstGedung(*L);

        while (NextGedung(P) != NULL){
            P = NextGedung(P);
        }
        
        tambahAfterGedung(&P, KodeGedung, NamaGedung, JumlahRuangan);
    }   
}

void viewListGedung(gedungNode *L){
    addressGedung P;
    P = FirstGedung(*L);
    int number = 1;
    if(IsEmptyGedung(*L)){
    	cout << "data tidak ada";
	}
	else{
		while (NextGedung(P) != NULL)
    {
        cout    << "#" << number            << endl
                << "Kode Gedung \t : "      << KodeGedung(P)    << endl
                << "Nama Gedung \t : "      << NamaGedung(P)    << endl
                << "Jumlah Ruangan \t : "   << JumlahRuangan(P) << endl << endl;
        number++;
        P = NextGedung(P);
    }

    cout    << "#" << number            << endl
            << "Kode Gedung \t : "      << KodeGedung(P)    << endl
            << "Nama Gedung \t : "      << NamaGedung(P)    << endl
            << "Jumlah Ruangan \t : "   << JumlahRuangan(P) << endl << endl;    
}
	}
    

// main program
int main(){
    
    // HardCordData Gedung dan Mata Kuliah
    //MKuliahNode MKuliah;
    gedungNode Gedung;
    //kelasNode Kelas;
    //CreateEmptyKelas(&Kelas);
    //CreateEmptyMKuliah(&MKuliah);
    CreateEmptyGedung(&Gedung);
    
    // input Data Hardcord
    //dataHardcordMKuliah(&MKuliah);
    //HardcordDataGedung(&Gedung);

    int pilihan = 1;
    while(pilihan != 0){

        cout    << "\n--------------- Pilihan Menu --------------- \n\n" << "1. Daftar Kelas Terpakai \n" << "2. Pinjam Kelas \n" << "3. Batalakan Peminjaman Kelas \n" << "4. Perbaharui Peminjaman Kelas \n"
                << "5. Cari Ruangan Kosong \n" << "6. Daftar Gedung \n" << "7. Tambah Gedung \n" << "8. Lihat Daftar Mata Kuliah \n" << "9. Tambah Mata Kuliah \n" << "0. Keluar";  
        cout << endl << endl;
        cout << "Pilih \t : "; cin >> pilihan; cout << endl;

        switch (pilihan){
            
            case 6: 
                viewListGedung(&Gedung);
                break;

            case 7:
                {
                    char status = 'T';
                    string kodeGedung;
                    string namaGedung;
                    int jumlahRuangan;

                    while(status != 'Y'){
                        cout << "-------- Tambah Data Gedung --------" << endl;
                        cout << "Kode Gedung(Otomatis) \t : " ; cin.ignore(); getline(cin, kodeGedung); cin.clear();
                        cout << "Nama Gedung \t\t : ";          cin.ignore(); getline(cin, namaGedung); cin.clear();
                        cout << "Jumlah Ruangan \t\t : ";       cin >> jumlahRuangan; cout << endl;
                        if(!cin){ cin.clear(); pilihan = 404; };
                        cout << endl;
                        cout << "Apakah Data diatas sudah yakin Benar ? (Y/T) \t : "; cin >> status; cout << endl;
                        status = toupper(status);
                    }
                    if(!cin.fail()){ tambahLastGedung(&Gedung, kodeGedung, namaGedung, jumlahRuangan);}
                    viewListGedung(&Gedung);
                        system("pause");
                }
                break;

            case 404:
                continue;
                break;

            default: 
                if(pilihan == 0){
                    break;
                } else {
                    continue;
                }
                break;
        }
    }
}
