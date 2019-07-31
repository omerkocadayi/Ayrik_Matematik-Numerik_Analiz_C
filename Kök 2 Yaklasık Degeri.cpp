#include <stdio.h>

float hesapla(int);

int main(){
	int n=5;	
	printf("Sonuc = %.6f",hesapla(n));
	return 0;
}

float hesapla(int n){
	float result;
	if(n==1)
		return (1);
	
	else
		result=0.5*(hesapla(n-1)+(2/hesapla(n-1)));
}

