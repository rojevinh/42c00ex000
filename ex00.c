#include <unistd.h>        //unistd.h kutuphanesini cagiriyoruz.
void ft_putchar(char c) // void(boþ dongu) aciyoruz ve fonksyon adini giriyoruz(degisken turumuzu ve degisken ismini veriyoruz)
{
	write(1,&c,1); //write (yaz) ile (1(output),&c(yazmak istedigmiz degisken degeri),1(degisken icindeki yazi kac bayt))
}
int main()        // main(ana)fonkisyonumuzu olusturuyoruz bu olmadan kod calýsmaz.
{
	ft_putchar("m");  //yukarýda olusturdugumuz fonksiyonu cagiriyoruz ve atadýgýmýz c degiskeninin icinde ne yazmak istedigimizi belirtiyoruz('m')
return(0);
// dondur
}
