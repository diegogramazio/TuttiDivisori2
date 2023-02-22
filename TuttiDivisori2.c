#include <stdio.h>

/* programma che chiede all'utente di inserire un numero
 * e ne stampa tutti i divisori dal più grande al più piccolo */
 int main() {
       int numero;                 // il numero da leggere
       int i;                             // variabile contatore

       /* INPUT */
       printf("Caro utente inserisci un numero!\n");
       scanf("%d", &numero);

       /*guarda ciascun nunmero i compreso fra numero ed 1 e verifica
        * se i e' un divisore di numero; nel caso, stampalo */
        printf("I divisori di %d sono ", numero);
        for(i=numero;i>=1;i--)
              if(numero%i == 0)
                    printf("%d ", i);
                    system("PAUSE");
 }
