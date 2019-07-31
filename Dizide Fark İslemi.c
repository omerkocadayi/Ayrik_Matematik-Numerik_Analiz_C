#include <stdio.h>

int main(){
	int i, j, sayi, boyut, bulundu=0;
	char s[100],s1[100];
	
	for(i=0; i<100; i++)
		s[i] = i+1;
	
	printf("1'den 100'e kadar sirali bir dizimiz var.\n\n");
	printf("Alt dizinin elemanlarini giriniz (-1 girince dur !!!)\n");
	
	for(i=0; i<100; i++){
		printf("Sayi giriniz : "); scanf("%d",&sayi);
		
		if(sayi == -1)
			break;	
		s1[i] = sayi;
	}
	
	boyut = i+1;
	
	printf("\n\nDizilerin Farki\n");
	
	for(i=0; i<100; i++){
		for(j=0; j<boyut; j++){
			if(s[i] == s1[j]){
				bulundu++;
				break;
			}
		}
		
		if(bulundu == 0)
			printf("%d ",s[i]);
			
		bulundu = 0;
	}
	
	return 0;
}
