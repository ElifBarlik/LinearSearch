#include <stdio.h>
#include <stdlib.h>



int LinearSearch(int dizi[], int diziBoyutu, int arananSayi)
{
	int i;
	for(i=0; i<diziBoyutu; i++){ //dizinin tum elemanlarini sirayla aranan sayi ile karsilastirip sayi bulunur.
		if(dizi[i]==arananSayi)
			return i; //sayi bulunursa indisi doner.
	}
	return -1; //sayi bulunmazsa -1 doner.
}

int main() {
	
	int i=0,diziBoyutu,arananSayi;
	
	printf("Dizinin boyutunu giriniz: ");
	scanf("%d",&diziBoyutu); //kullanicidan dizi boyutu alinir.
	
	int dizi[diziBoyutu]; //dizi boyutu ile dizi tanimlanir.
	
	while(i<diziBoyutu)
	{
		printf("Dizinin %d. elemanini giriniz: ",i+1); //kullanicidan dizi boyutu kadar eleman alinarak dizi olusturulur.
		scanf("%d",&dizi[i]);
		i++;
	}
	
	printf("Dizi icerisinde aranacak sayiyi girin: "); //arama yapilavcak sayi istenir.
	scanf("%d",&arananSayi);
	
	int sonuc=LinearSearch(dizi, diziBoyutu, arananSayi); //tanimlanan arama fonksiyonundan donecek deger sonuc degiskenine atanir.
	
	if(sonuc==-1) //sonuc -1 ise sayi bulunmamistir.
	{
		printf("Aranan sayi dizide bulunamadi.");
	}
	else //-1den farkli bir sayi donmusse aranan sayinin indisi donen sayidir.
	{
		printf("Aranan sayi dizinin %d. elemanidir.",sonuc+1);
	}
	
	
	
	
	
	return 0;
}
