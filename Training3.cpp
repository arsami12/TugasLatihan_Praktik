#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
	
// Fungsi protipe
	double ConvertToMPH(int paceMin, int paceSec);
	double ConvertToMPH(double kph);
	
// ======================
// ConvertToMPH
// Mengubah kecepatan menit/detik per mil
// mil per jam.
// ======================
	double ConvertToMPH(int paceMin, int paceSec){
		int secspermile;
	double mph;
// Konversi kecepatan untuk detik per mil
	secspermile = paceMin * 60 + paceSec;
// Konversi mil per satu jam/secspermile adalah mil/detik dan kemudian
// akala satu jam dengan mengalikan dengan 3600 detik / jam
	mph = (1 / static_cast<double>(secspermile)) * 3600;
	return mph;
}

// ======================
// ConvertToMPH
// Ubah kecepatan kilometer per mil ke
// mil per jam.
// ======================
	double ConvertToMPH(double kph){
	double mph;  mph = kph / 1.61;
	return mph;	
}

int main(){
	cout << "5:30 pace is " << ConvertToMPH(5,30) << " MPH." << endl;
	cout << "7:30 pace is " << ConvertToMPH(7,30) << " MPH." << endl;
	cout << "8:00 pace is " << ConvertToMPH(8,0) << " MPH." << endl;
	cout << "10 kph is " << ConvertToMPH(10) << " MPH." << endl;
	cout << "20 kph is " << ConvertToMPH(20) << " MPH." << endl;
	cout << "120 kph is " << ConvertToMPH(120) << " MPH." << endl << endl;
}
