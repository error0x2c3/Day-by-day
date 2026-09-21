// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <math.h> 
#include <stdbool.h>
int main(void) {
    //float resultat = 7.0f / 2; // ou (float)3 / 2
    float resultat;
    printf("Type a number: \n");
    scanf("%f", &resultat);
    resultat = resultat/2;
    
    float modulo = floorf(resultat);
    bool test = (resultat - floorf(resultat)) == 0;
    
    printf("%f",resultat);
    printf(" Le modulo aa : %f",modulo);
    printf("\n test bool : %d",test);
    
}
