#include <unistd.h>        //unistd.h kutuphanesini cagiriyoruz.
void ft_putchar(char c) // void(bo� dongu) aciyoruz ve fonksyon adini giriyoruz(degisken turumuzu ve degisken ismini veriyoruz)
{
	write(1,&c,1); //write (yaz) ile (1(output),&c(yazmak istedigmiz degisken degeri),1(degisken icindeki yazi kac bayt))
}
int main()        // main(ana)fonkisyonumuzu olusturuyoruz bu olmadan kod cal�smaz.
{
	ft_putchar("m");  //yukar�da olusturdugumuz fonksiyonu cagiriyoruz ve atad�g�m�z c degiskeninin icinde ne yazmak istedigimizi belirtiyoruz('m')
return(0);
// dondur
}
