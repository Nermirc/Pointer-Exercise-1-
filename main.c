#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Farkl� data typelar i�in de�i�ken(int float char double) tan�mlay�p de�er atamas� yap�n�z.Hem bunlar� hem bellektekileri bast�r�n�z.
    char karakter='C';
    int integerdegerim=1;
    float floatsayim=5.43;
    double doublesayim=231231231321;

    printf("Karakterim = %c, Karakterimin adresi = %d\n",karakter,&karakter);
    printf("Integer degerim = %d, Integerimin adresi = %d\n",integerdegerim,&integerdegerim);
    printf("Float degerim = %f, Floatimin adresi = %d\n",floatsayim,&floatsayim);
    printf("Double degerim = %lf,Doublemin adresi = %d\n",doublesayim,&doublesayim);
}
