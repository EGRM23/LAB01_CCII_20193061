#include <iostream>
#include <ctime>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {

	int h,m,min;
	cout<<"Minutos deseados: ";
	cin>>min;
	string zona="AM";
	
	time_t t = time(NULL);
	struct tm tiempoLocal = *localtime(&t);
	h=tiempoLocal.tm_hour;
	m=tiempoLocal.tm_min;
	
	
	if(m-min<0){
		m=min-m;
		h=h-((m-m%60)/60+1);
		m=60-m%60;
		if(h<0){
			h=h*-1;
			h=24-h%24;
		}
	} else
	   m-=min;
	
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

