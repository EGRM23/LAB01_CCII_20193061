#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string hora;
	int h, m;
	int min;
	string zona="AM";
	cout<<"Ingrese la hora deseada (HH:MM formato 24 horas): ";
	cin>>hora;
	cout<<"Minutos a agregar: ";
	cin>>min;
	h=(hora[0]-'0')*10+(hora[1]-'0');
	m=(hora[3]-'0')*10+(hora[4]-'0')+min;
	
	if(m>=60){
		h+=((m-m%60)/60);
		m=m%60;
	}
	
	if(h>=12){
		if(h==12)
			zona="PM";
		else if(h>=24){
			zona="AM";
			h-=24;
		}
		else{
			h-=12;
			zona="PM";
		}
	}
	
	cout<<"HORA RESULTANTE: "<<h<<":"<<m<<" "<<zona;
	
	return 0;
}

