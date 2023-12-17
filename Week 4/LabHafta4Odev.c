#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	
	int islem;
	int i,j,k;
	int sayi=0,us,sabitsayi,basamak,toplam=0,bosluk=0,yildiz;
	double sonuc=0;
	double bakiye=2023;

	printf("---------------------------\n");
	printf("Lutfen bir islem seciniz\n");
	printf("1- Bir sayinin ussunu hesaplama\n");
	printf("2- Bir sayinin tek-cift oldugunu hesaplama\n");
	printf("3- Armstrong sayi hesaplama\n");
	printf("4- Fizzbuzz\n");
	printf("5- Ters ucgen cizdirme\n");
	printf("6- Kare ve dikdortgen olusturma\n");
	printf("7- Carpim tablosu\n");
	printf("8- Pozitif sayi girisi\n");
	printf("9- Kare/Karekok hesaplama\n");
	printf("10- Bankacilik sistemi\n");
	printf("11- Sayi tahmin etme oyunu\n");
	printf("12- 1-9 ASCII tablosu\n");
	printf("13- Cikis\n");
	printf("---------------------------\n");
	
	scanf("%d",&islem);
	
	switch(islem){
	
	
	case 1: //Us hesaplama
		printf("Lutfen taban kismini giriniz:\n");
		scanf("%d",&sayi);
		printf("Lutfen us kismini giriniz:\n");
		scanf("%d",&us);
		sayi = pow(sayi,us);
		printf("Sonuc: %d",sayi);
		break;
	case 2: //Tek cift sayi
	
	do{
		printf("Sayi giriniz:\n");
		scanf("%d",&sayi);
		if(sayi%2==0)
			printf("Sayiniz cifttir\n");
		else 
			printf("Sayiniz tektir\n");
		printf("Devam etmek ister misiniz?\n");
		printf("1- Evet\n");
		printf("2- Hayir\n");
		scanf("%d",&us);
	}
	while(us!=2);
		break;
	case 3: //Armstrong sayi
		printf("Bir sayi giriniz:\n");
		scanf("%d",&sayi);
		sabitsayi=sayi;
		while(sayi>0){
			sayi=sayi/10;
			basamak++;
		}
		sayi=sabitsayi;
		while(basamak>0){
			sayi/=pow(10,basamak-1);
			sayi=sayi%10;
			toplam+=pow(sayi,3);
			sayi=sabitsayi;
			basamak--;
		}
			printf("Toplam: %d\n",toplam);
			if(toplam==sabitsayi)
				printf("Bu sayi armstrong sayidir\n");
			else 
				printf("Bu sayi armstrong sayi degildir\n");
		break;
	case 4: //Fizzbuzz
		printf("Lutfen bir sayi giriniz:\n");
		scanf("%d",&sabitsayi);
		sayi=sabitsayi;
		for(sayi=1;sayi<=sabitsayi;sayi++){
		if(sayi%5==0&&sayi%3==0)
			printf("Fizzbuzz\n");
		else if(sayi%3==0)
			printf("Fizz\n");
		else if(sayi%5==0)
			printf("Buzz\n");
		else if(sayi%5!=0&&sayi%3!=0) 
			printf("%d\n",sayi);
	}
		break;
	case 5: 
		printf("Satir sayisi giriniz:\n");
		scanf("%d",&sabitsayi);
		yildiz=(2*sabitsayi)-1;
		for(i=0;i<=sabitsayi;i++){
			for(j=0;j<bosluk;j++){
				printf(" ");
			}
			for(k=0;k<yildiz;k++){
				printf("*");
			}
			bosluk++;
			yildiz-=2;
			printf("\n");
		}
		break;
	
	case 6: 
		printf("Lutfen islem seciniz:\n");
		printf("1- Kare\n");
		printf("2- Dikdortgen\n");
		scanf("%d",&sayi);
		if(sayi==1){
			printf("Lutfen kenar giriniz:\n");
			scanf("%d",&sabitsayi);
			for(i=0;i<sabitsayi;i++){
				printf("\t");
				for(j=0;j<sabitsayi;j++){
					printf("* ");
				}
				printf("\n");	
			}

		}
		else if(sayi==2){
		printf("Lutfen uzun kenar giriniz:\n");
		scanf("%d",&sabitsayi);
		printf("Lutfen kisa kenar giriniz:\n");
		scanf("%d",&us);
			for(i=0;i<sabitsayi;i++){
				printf("\t");
				for(j=0;j<us;j++){
					printf("* ");
				}
				printf("\n");	
			}

		}
		else 
			printf("Yanlis islem secildi\n");
		break;
		case 7: 
			printf("Lutfen bir sayi giriniz\n");
			scanf("%d",&sabitsayi);
			for(i=1;i<=sabitsayi;i++){
				for(j=1;j<=10;j++){
					printf("%dx%d=%d\t",i,j,(i*j));
				}
				printf("\n");
			}
			break;
		case 8:
			do{
				printf("Lutfen bir sayi giriniz\n");
				scanf("%d",&sayi);
				if(sayi<0)
				printf("Negatif sayi girdiniz\n");
			}
			while(sayi<=0);
			printf("Potizif Sayi girildi\nProgram sonlaniyor...\n");
		break;
		case 9: 
			printf("Lutfen bir secim yapiniz:\n");
			printf("1- Kare alma\n");
			printf("2- Karekok alma\n");
			scanf("%d",&us);
			if(us==1){
				printf("Lutfen sayi giriniz\n");
				scanf("%d",&sayi);
				sabitsayi=pow(sayi,2);
				printf("Sonuc: %d",sabitsayi);
			}
			else if(us==2){
				printf("Lutfen bir sayi giriniz\n");
				scanf("%d",&sayi);
				sonuc= sqrt(sayi);
				printf("Sonuc: %lf",sonuc);
			}
			break;
		case 10:
		do{
			printf("\tHosgeldiniz. Lutfen bir islem seciniz\n");
			printf("1- Para cekme\n");
			printf("2- Para yatirma\n");
			printf("3- Bakiye sorgulama\n");
			printf("4- Cikis\n");
			scanf("%d",&sabitsayi);
			if(sabitsayi==1){
				printf("Ne kadar cekmek istiyorsunuz?\n");
				printf("Guncel bakiye: %.2lfTL\n",bakiye);
				scanf("%d",&us);
				if(us>bakiye){
					printf("Bakiyeniz ustunde para cekemezsiniz\n");
				}
				else{
					printf("%dTL cektiniz\n",us);
					bakiye-=us;
				}
				}
			else if(sabitsayi==2){
				printf("Ne kadar yatirmak istiyorsunuz?\n");
				scanf("%d",us);
				bakiye+=us;
				printf("Hesabiniza %dTL yatirildi\n",us);
			}
			else if(sabitsayi==3){
				printf("Guncel bakiyeniz %.2lfTL'dir\n",bakiye);
			}
			else if(sabitsayi==4){
				printf("Cikis yapiliyor\n");
			}

		}

		while(sabitsayi!=4);

		break;

		case 11:
				srand(time(NULL));
				int puan=500;
				int randomsayi;
				printf("\nSayi tahmin oyununa hosgeldin!\n");
				printf("1 ile 1000 arasinda sayi tahmin etmen gerekli!\n");
				printf("Her yanlis tahmin size 20 puan kaybettirir\n");
				printf("5 Oyun ve her oyunda 5 tahmin hakkiniz var!\n");
				printf("Oyun sonunda 100 uzerinden ortalama puaniniz hesaplanir\n");
				printf("iyi eglenceler!\n");
			for(i=0;i<5;i++){
				
		
				randomsayi= rand()%1000;
				for(j=0;j<5;j++){

					printf("\nLutfen bir sayi tahmin et\n");
					scanf("%d",&sayi);
					if(sayi==randomsayi){
						printf("Tebrikler sayiyi buldunuz\n");
						break;
					}
					else if(sayi>randomsayi){
						printf("Daha kucuk bir sayi giriniz\n");
						puan-=20;
					}
					else if(sayi<randomsayi){
						printf("Daha buyuk bir sayi giriniz\n");
						puan-=20;
					}
					
				}
					printf("----------------------------------\n");
					printf("Aklimdaki sayi %d idi\n",randomsayi);
					printf("Simdi yeni bir sayi tutuyorum\n");
			}
				printf("5 Tahmin hakkiniz sona erdi.\n");
				printf("Ortalama puaniniz: %d\n",puan/5);

		break;

		case 12:;
			char karakter='1';
			printf("Bu program size 1 ile 9 arasindaki sayilarin ASCII tablosundaki degerini gosterir\n\n");
			for(karakter='1';karakter<='9';karakter++){
				printf("%c sayisinin ASCII tablosu degeri %d dir\n",karakter,karakter);
			}

		break;

		default:
		printf("Yanlis islem secildi\n");
		break;	
}
	
	return(0);
}
