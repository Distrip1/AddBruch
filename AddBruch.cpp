#include<iostream>

int gGT(int, int);
int kuerzen(int, int, int, int);

int main(){
	int n1, n2, z1, z2, n, z, x, i = 0;
	std::cout << "Bitte geben Sie den Zaehler der ersten Zahl an: ";
	std::cin >> z1;
	std::cout << "Bitte geben Sie den Nenner der ersten Zahl an: ";
	std::cin >> n1;
	std::cout << "Bitte geben Sie den Zaehler der zweiten Zahl an: ";
	std::cin >> z2;
	std::cout << "Bitte geben Sie den Nenner der zweiten Zahl an: ";
	std::cin >> n2;
	n = n1 * n2;
	z1 = z1 * n2;
	z2 = z2 * n1;
	z = z1 + z2;
	std::cout << "Das Zwischen-Ergebnis lautet: " << z << " / " << n << "." << std::endl << "Errechne ggT ..." << std::endl;
	if(n > z){
		x = gGT(n, z);
	}else{
		x = gGT(z, n);
	}
	std::cout << "Somit lautet also der ggT aus den oben stehenden Zahlen: " << x << std::endl << "Kuerze ..." << std::endl;
	n = kuerzen(x, n, z, i);
	i++;
	z =  kuerzen(x, n, z, i);
	std::cout << "Das End-Ergebnis lautet: " << z << " / " << n << "." << std::endl;
	system("Pause");
	return 0;
}

int kuerzen(int x, int n, int z, int i){
	if(i == 0){
		n = n / x;
		return n;
	}else{
		z = z / x;
		return z;
	}
}


int gGT(int n, int z){
	if(n == 0){
		return z;
	}else{
		return gGT(z % n, n);
	}
}
