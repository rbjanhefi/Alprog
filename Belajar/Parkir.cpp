#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout << "-----------------------------------------" << endl;
    cout << "                 PARKIR" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Nomor Plat\t: BG";
    cin >> a;
    cout << "Jam masuk\t: ";
    cin >> b;
    cout << "Jam keluar\t: ";
    cin >> c;
    cout << "-----------------------------------------" << endl;
    cout << "Nomor Plat kendaraan anda BG " << a << endl;
    if(c-b<=2)
    {
        cout << "Biaya parkir anda Rp.2000" << endl;
    }
    if (c-b>2)
    {
        cout << "Biaya parkir anda Rp." << 1000+(c-b)*500 << endl;
    }
    cout << "-----------------------------------------" << endl;
    do
    {
        cout << "Jumlah uang yang anda bayarkan Rp." ;
        cin >> d;
        if (d>=100+(c-b)*500)
        {
            cout << "Jumlah uang kembalian Rp." << d-(1000+(c-b)*500) << endl;
            cout << "-----------------------------------------" << endl;
        }
        else
            cout << "Uang bayar parkir anda kurang" << endl;
            cout << "-----------------------------------------" << endl;
    }
    while (d<1000+(c-b)*500);
    cout << "Terima kasih sudah parkir disini" << endl;
    return 0;



















}
