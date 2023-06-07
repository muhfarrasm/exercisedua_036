#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class lingkaran : public bidangDatar {
public:
	void input() {
		int r;
		cout << "Masukkan jejari: ";
		cin >> r;
		setX(r);
	}

	float LuasL(int r) {
		return 3.14 * r * r;
	}

	float KelilingL(int r) {
		return 2 * 3.14 * r;
	}
};


class Bujursangkar : public bidangDatar {
public:
	void input() {
		int s;
		cout << "Masukkan Sisinya : ";
		cin >> s;
		setX(s);
	}

	float LuasBS(int r) {
		return 3.14 * r * r;
	}

	float KelilingBS(int r) {
		return 2 * 3.14 * r;
	}
};
