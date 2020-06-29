//1306170013 Talha Aðgez
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;
int main() {
	ifstream inClientFile("veri.txt", ios::in);
	if (!inClientFile) {
		cerr << "File could not be opened" << endl;
		exit(EXIT_FAILURE);
	}
	double a, b;
	vector<double> x_i;
	vector<double> fx_i;
	int i = 0;
	//Aralýk belirleme...
	double x = 0.45;
	cout << "Ara degeri giriniz: ";
	cin >> x;
	//Dosya Okuma
	while (inClientFile >> a >> b){
		x_i.push_back(a); fx_i.push_back(b);
		i++;
	}
	//Lagrance metodu....
	vector<double> lagrance_katsayýsý;
	double temp = 1;
	int z = 0;
	for (int j = 0; j < i; j++) {
		z = 0;
		for (z = 0; z < i; z++) {
			if (z != j) {
				temp = ((x - x_i[z]) / (x_i[j] - x_i[z])) * temp;
			}
		}
		cout << j << ": Lagrance katsayýsýsý: " << temp << endl;
		lagrance_katsayýsý.push_back(temp);
		temp = 1;
	}
	temp = 0;
	for (int i = 0; i < lagrance_katsayýsý.size(); i++) {
		temp = lagrance_katsayýsý[i] * fx_i[i] + temp;
	}
	cout << temp;
}