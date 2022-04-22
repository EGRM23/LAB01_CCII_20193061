#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string n, ap, am, correo;
	cout<<"Nombre: ";
	cin>>n;
	n[0]+=32;
	cout<<"Apellido paterno: ";
	cin>>ap;
	ap[0]+=32;
	cout<<"Apellido materno: ";
	cin>>am;
	am[0]+=32;
	correo=n[0]+ap+am[0]+"@unsa.edu.pe";
	cout<<"CORREO INSTITUCIONAL: "<<correo;
	return 0;
}

