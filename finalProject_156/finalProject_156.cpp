#include <iostream> 
using namespace std;

class bidangDatar {
private: 
int x, y; 
public: 
	bidangDatar() { 
		x = 0;
		y = 0; 
	}
	virtual void input() {}
	virtual float Luas(int a) 
	{ return 0; }
	virtual float Keliling(int a) 
	{ return 0; }
	virtual void cekUkuran() {return 0; }
	void setX(int a) {
		this->x = a;
	} 
	int getX() {
		return x;
	}

	};




class Lingkaran : public bidangDatar {
public:
	void input() {
		cout << "Lingkaran dibuat";
		cout << "\nMasukkan jejari : ";
		float r;
		cin >> r;
		setX(r);
	
}

	float Luas() {
		float r = getX();
		return 3.14 * r * r;
	}

	float Keliling() {
		float r = getX();
		return 2 * 3.14 * r;

		void cekukuran (); {
			float cul = Keliling();
			if (cul > 60);
		}
		cout << "besar" << endl;

		}
	else if (Keliling () <20) {
		
	}
	{
		<< "kecil" << cul << endl;
	}
	else
	{
		cout << "kecil" << cul << endl;
	}
};


class Persegipanjang :public bidangDatar {
public:
	void input() {
		cout << "\nPersegipanjang dibuat";
		cout << "\nMasukkan sisi : ";
		int s;
		cin >> s;
		setX(s);
	}

	float Luas() {
		int s = getX();
		return s * s;
	}

	float Keliling() {
		int p,l = getX();
		return p * l;
	}
};

int main() {
	cout << "output program" << endl;

	Lingkaran lingkaran;
	lingkaran.input();

	cout << "Luas Lingkaran = " << lingkaran.Luas() << "\nKeliling Lingkaran = " << lingkaran.Keliling() << endl;

	Persegipanjang Persegipanjang;
	Persegipanjang.input();
	cout << "Luas persegi panjang = " << Persegipanjang.Luas() << "\nKeliling persegipanjang = " << Persegipanjang.Keliling() << endl;

	return 0;
}