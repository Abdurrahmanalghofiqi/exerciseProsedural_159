#include <iostream>
using namespace std;

double rerata(double a,double b) {
		return (a = b)/ 2;
}
string status(double  rata) {
	if (rata >= 70)
		return "Lulus";
	else
		return "Gagal";
}

string status(double rata, double nilm) {
	if (rata >= 70, nilm > 80)
		return "Lulus";
	else
		return "Gagal";
}

int main() {
	double nilm, nilb;
	cout << "Masukan Nilai matematika = ";
	cin >> nilm;
	cout << "Masukan Nilai Bahasa Inggris = ";
	cin >> nilb;
	cout << "Status Kelulusan = " << status(rerata(nilm, nilb));
	cout << "\nStatus Kelulusan ke 2 = " << status(rerata(nilm, nilb), nilm);
}