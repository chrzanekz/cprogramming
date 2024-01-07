// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define ARRSIZ 64

int main()
{
    char imieNazwisko[ARRSIZ] = "Jan Nowak";
    int wiekUsera = 35;
    printf("Hej, mam na imie %s oraz mam %d lat. \n", imieNazwisko, wiekUsera);
    
    strcpy(imieNazwisko,"Mateusz Braun");
    printf("That's fine, %s ", imieNazwisko);
    
    return 0;
}
