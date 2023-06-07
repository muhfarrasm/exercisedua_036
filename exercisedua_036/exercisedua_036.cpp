#include <iostream>
#include "Kumpulan Prosedur.h"
using namespace std;

int main()//program utama
{
	bidangDatar* BD;

	//Bagian Dari Lingkaran
	cout << "Lingkaran Dibuat ";
	BD = new lingkaran();
	BD->input();
	int r = BD->getX();
	cout << "Luas Lingkaran = " << BD->Luas(r) << endl;
	cout << "Keliling Lingkaran = " << BD->Keliling(r) << endl;

	//Bagian Dari Bujursangkar
	cout << "Bujursangkar Dibuat";
	BD = new lingkaran();
	BD->input();
	int s = BD->getX();
	cout << "Luas Lingkaran = " << BD->Luas(s) << endl;
	cout << "Keliling Lingkaran = " << BD->Keliling(s) << endl;

	return 0;
}