#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Farklı data typelar için değişken(int float char double) tanımlayıp değer ataması yapınız.Hem bunları hem bellektekileri bastırınız.
    char karakter='C';
    int integerdegerim=1;
    float floatsayim=5.43;
    double doublesayim=231231231321;

    printf("Karakterim = %c, Karakterimin adresi = %d\n",karakter,&karakter);
    printf("Integer degerim = %d, Integerimin adresi = %d\n",integerdegerim,&integerdegerim);
    printf("Float degerim = %f, Floatimin adresi = %d\n",floatsayim,&floatsayim);
    printf("Double degerim = %lf,Doublemin adresi = %d\n",doublesayim,&doublesayim);
}
