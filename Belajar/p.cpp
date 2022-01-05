#include <iostream>
using namespace std;

int main()
{
	int data[100];
	int n,i;
	
	cout << "Masukan data : ";
	cin >> n;
	cout << endl;
	
	for (i=1;i<=n;i++)
	{
		cout << "Masuk ke " << i << " : ";
		cin >> data [i];
	}
	
	/*out << " Data Masuk : ";
	cout << endl;
	
	for (i=1;i<=n;i++)
	{
		cout << " " << data [i] << endl;
	}*/
}
