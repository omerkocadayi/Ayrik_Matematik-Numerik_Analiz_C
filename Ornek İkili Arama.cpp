#include <stdio.h>
int BinarySearch(int[],int,int,int);

int main(){
	int A[7]={3,9,11,21,24,30,33};
	int l=0,r=6,x,m;
	
	for(int i=0;i<7;i++)
		printf("%d\t",A[i]);

	printf("\n\nAramak istediginiz sayi nedir : "); scanf("%d",&x);
	
	m=BinarySearch(A,x,l,r);
	
	printf("\n\nAradiginiz eleman %d. indiste bulundu..",m);	
	
	return 0;
}

int BinarySearch(int A[],int x,int l,int r){
	int m=(l+r)/2;
	
	if(x==A[m])
		return m;
		
	else if(x<A[m])	
		BinarySearch(A,x,l,m-1);

	else
		BinarySearch(A,x,m+1,r);

}
