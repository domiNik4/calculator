#include <stdio.h>
#include <math.h>
//this is a small calculator app

void vypocetSplatky(float s, float u, int d, float* psplatka);
void countMaxSplatka(float plat,float splatka ,float* pmaxSplatka);

main()
{
	float suma;
	float urok=0;
	int dlzka=0;
	float splatka=0;
	float plat=0;
	float maxSplatka;
	float* psplatka=&splatka;
	float* pmaxSplatka= &maxSplatka;
	
	printf("Enter amount you want to borrow:\n");
	scanf("%f",&suma);
	getchar();
	
	printf("Enter interest height:\n");
	scanf("%f",&urok);
	getchar();
	
	printf("Enter length in months:\n");
	scanf("%d",&dlzka);
	getchar();
	
	printf("Enter size of monthly wage:\n");
	scanf("%f",&plat);
	getchar();
	
	vypocetSplatky(suma,urok,dlzka,psplatka);
	printf(" Height of your monthly payment: %.2f\n",splatka);
	countMaxSplatka(plat,splatka,pmaxSplatka);
	printf(" Max height of monthly payment: %.2f\n",maxSplatka);
	if(maxSplatka<splatka){
		printf("You can't borrow that much.");
	}
	else{
		printf("Request accepted");
	}
	

	
}

void vypocetSplatky(float s, float u, int d, float *psplatka)
{
	
	*psplatka=(s/d)*u;
}

void countMaxSplatka(float plat,float splatka,float* pmaxSplatka)
{
	
	printf(" %f %f ",plat,splatka);
	*pmaxSplatka=(plat/100)*15; 
	
	
}
