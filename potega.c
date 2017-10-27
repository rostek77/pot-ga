

#include <stdio.h>
 
int func(unsigned int podstawa, unsigned int potega)
{
    int wynik, i;
    wynik=1;
    for(i=1;i<=potega;i++)
    wynik=wynik*podstawa;
    return wynik;
}
 
int main()
{
    int pod, pot;
    printf("podaj podstawe\n");
    scanf("%d", &pod);
    printf("podaj potega\n");
    scanf("%d", &pot);
    printf("potega wynosi %d", func(pod, pot));
    return(0);
}


