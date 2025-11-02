#include <iostream>
using namespace std;

int main(){
	long totaldetik;
	int hari, jam, menit, detik;	
	
	cout<<"masukkan bilangan (satuan detik) > 1: ";
	cin>>totaldetik;
	
	if (totaldetik < 1){
    	cout<<" input harus lebih dari 1"<<endl;
		return 0;
	}
	
	hari = totaldetik / 86400;                 
    jam = (totaldetik % 86400) / 3600;         
    menit = (totaldetik % 3600) / 60;          
    detik = totaldetik % 60;     

    cout << "\nHasil konversi:" << endl;
    cout << totaldetik << " detik = " << hari << " hari, "<< jam << " jam, " << menit << " menit, " << detik << " detik." << endl;
      
       
    return 0;
		
}
