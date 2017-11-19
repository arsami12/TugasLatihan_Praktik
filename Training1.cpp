#include <iostream>
using namespace std;

void input(int& hours24, int& menit);
void convert(int& jam, char& AMPM);
void output(int jam, int menit, char AMPM);

int main(){
	int jam, menit;
	char AMPM, ans;
	do
{
	
	input(jam, menit);
	convert(jam, AMPM);
	output(jam, menit, AMPM);
	cout << "Tekan Y atau y untuk lanjut, tekan asal untuk keluar."
		 << endl;
	cin >> ans;}
   while('Y'== ans || 'y' == ans);
 return 0;
}

void input(int& hours24, int& menit){
	char colon;
	cout << "Masukkan waktu 24 jam dalam format HH:MM "
		 << endl;
	cin >> hours24 >> colon >> menit;
}

void convert(int& jam, char& AMPM){
	if(jam > 12) // Diwaktu siang/sore
{
	
		jam = jam - 12;
		AMPM = 'P';
}
	else if (12 == jam) // Pada jam siang/sore
		AMPM = 'P'; // tetapi jam tidak berubah.
	else if (0 == jam) // balas jam pagi
{
	
		jam = jam + 12;
		AMPM = 'A';
}

	else // (jam < 12) // pada jam pagi
		AMPM = 'A'; // jam tidak berubah
}

void output(int jam, int menit, char AMPM){
	cout << "Waktu dalam format 12 jam : " << endl
		 << jam << ":" << menit << " "
		 << AMPM << 'M' << endl;
}
