#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

float aire(float x) {
	float res = M_PI * (x * x);
	return res;
}
float volume(float x2) {
	float res2 = (4 / 3) * M_PI * (x2 * x2 * x2);
	return res2;
}
void affichage(float x3, float y3) {
	cout << x3 << endl;
	cout << y3 << endl;
}
int main() {
	float r;
	bool t = true;
	while (t) {
		cin >> r;
		if (r >= 0) {
			float resultat = aire(r);
			float resultat2 = volume(r);
			affichage(resultat, resultat2);
			t = false;
		}
		else {
			cout << "erreur la variable r ne peux pas etre negatif" << endl;
			t = true;
		}
	}

}