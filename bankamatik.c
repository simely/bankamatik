#include <stdio.h>

int main () {
	
	
	int parola,islem,tutar,bakiye = 1000,parola2 = 1234;
	
	printf("--- BANKAMATIGE HOS GELDINIZ ---\n\n");
	
	while (parola != parola2) {
		
	    printf("Lutfen sifrenizi giriniz:");
	    scanf("%d",&parola);
	    
	     if (parola != parola2) {
	    	printf("HATALI SIFRE\n");
	    	Beep(610,500);
		}
	}
	
	printf("\n\n\n**** ISLEMLER ****\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");
	
	printf("Islemi seciniz:");
	scanf("%d",&islem);
	
	switch (islem) {
		
		case 1 :
			
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Cekmek istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			
			if (tutar > bakiye) {
				
				printf("Yetersiz bakiye\n");
			}
			
			else {
				
				bakiye -= tutar;  // bakiye = bakiye - tutar
				printf("Kalan bakiyeniz:%d\n",bakiye);
			}
			
			break;
			
		case 2 :
			
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Yatirmak istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			
			bakiye += tutar;  // bakiye = bakiye + tutar
			printf("Yeni bakiyeniz:%d\n",bakiye);
			
			break;
			
		case 3 :
			
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Havale yapmak istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			
			if (tutar > bakiye) {
				
				printf("Yetersiz bakiye\n");
			}
			
			else {
				
				bakiye -= tutar;
				printf("Kalan bakiyeniz:%d\n",bakiye);
			}
			
			break;
			
		case 4 :
			
			printf("Bakiyeniz:%d\n",bakiye);
			
			break;
		
		case 5 :
			
			printf("Kart iade ediliyor\n");
			
			break;
		
		default :
			
			printf("Bilinmeyen islem\n");
			
			break;
	}
	
	return 0;
}
