#include <iostream>

using namespace std;

void tampil(int data[],int n)
{
	cout << "DAFTAR NILAI" << endl;
	for(int i=0;i<n;i++)
	{
		cout << "Data ke-" << i+1 << " : " << data[i] << endl;
	}
}

void sortAZ(int data [],int n)
{
	int simpan;
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (data[i]<data[j])
			{
				simpan=data[i];
				data[i]=data[j];
				data[j]=simpan;
			}
		}
	}
}

void sortZA(int data [],int n)
{
	int simpan;
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (data[i]>data[j])
			{
				simpan=data[i];
				data[i]=data[j];
				data[j]=simpan;
			}
		}
	}
}

int main()
{
	int jumlah;
	cout << "Masukan Jumlah Data : ";
	cin >> jumlah;
	cout << endl;
	
	int nilai [jumlah];
	for(int i=0;i<jumlah;i++)
	{
		nilai[i]=1+i*2;
		cout << "Data ke-" << i+1 << " : " << nilai[i] << endl;;
	}
	cout << endl;
	
	sortAZ(nilai,jumlah);
	tampil(nilai,jumlah);
	sortZA(nilai,jumlah);
	tampil(nilai,jumlah);
}
