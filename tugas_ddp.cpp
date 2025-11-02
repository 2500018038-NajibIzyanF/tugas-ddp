#include <iostream>
using namespace std;

int main() {
    int totalDetik, jam, menit, detik;

    cout << "Masukkan bilangan (satuan detik) > 1: ";
    cin >> totalDetik;

    if (totalDetik < 1) {
        cout << "Input harus lebih dari 1!" << endl;
        return 0;
    }

    jam = totalDetik / 3600;              
    menit = (totalDetik % 3600) / 60;     
    detik = totalDetik % 60;              

    cout << "\nHasil konversi:" << endl;
    cout << totalDetik << " detik = " << jam << " jam, "<< menit << " menit, " << detik << " detik." << endl;


    return 0;
}
