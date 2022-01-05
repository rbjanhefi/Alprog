#include <iostream>
using namespace std;

int main ()
{
	int tinggi, baris, kolom;
	cout << "Masukan Tinggi Segitiga : ";
	cin >> tinggi;
	
	cout << "----Pola 1----" << endl;
	
	for (baris=1;baris<=tinggi;baris++)
	{
		for (kolom=1;kolom<=baris;kolom++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "----Pola 2----" << endl;
	
	for (baris=1;baris<=tinggi;baris++)
	{
		for (kolom=tinggi;kolom>=baris;kolom--)
		{
			cout << "*";
		}
		cout << endl;
	}	
	
	cout << "----Pola 3----" << endl;
	
	for (baris=1;baris<=tinggi;baris++)
	{
		for (kolom=tinggi;kolom>=baris;kolom--)
		{
			cout << " ";
		}
		for (kolom=1;kolom<=baris;kolom++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "----Pola 4----" << endl;
	
	for (baris=1;baris<=tinggi;baris++)
	{
		for (kolom=1;kolom<=baris;kolom++)
		{
			cout << " ";
		}
		for (kolom=tinggi;kolom>=baris;kolom--)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "----Pola 5----" << endl;
	
	for (baris=1;baris<=tinggi;baris++)
	{
		for (kolom=tinggi;kolom>=baris;kolom--)
		{
			cout << " ";
		}
		for (kolom=1;kolom<=(2*baris-1);kolom++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "----Pola 6----" << endl;
	
	for (baris=1;baris<=tinggi;baris++)
	{	
		for (kolom=1;kolom<=baris;kolom++)
		{
			cout << " ";
		}
		for (kolom=tinggi;kolom>=(2*baris-tinggi);kolom--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "----Pola 7----" << endl;
	
	for (baris=1;baris<=tinggi;baris++)
	{
		for (kolom=tinggi;kolom>=baris;kolom--)
		{
			cout << " ";
		}
		for (kolom=1;kolom<=(2*baris-1);kolom++)
		{
			if (kolom==1||kolom==2*baris-1||baris==tinggi)
				cout << "*";
			else 
				cout << " ";
		}
		cout << endl;
	}

	cout << "----Pola 8----" << endl;
	
	for (baris=1;baris<=tinggi;baris++)
	{
		for (kolom=1;kolom<=baris;kolom++)
		{
			cout << " ";
		}
		for (kolom=tinggi;kolom>=(2*baris-tinggi);kolom--)
		{
			if (kolom==tinggi||kolom==2*baris-tinggi||baris==1)
				cout << "*";
			else 
				cout << " ";
		}
		cout << endl;
	}	
	
	return 0;
}