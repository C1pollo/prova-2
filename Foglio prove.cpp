#include <stdio.h>

float sommaf( float in1,float in2);
//tipo senza ritorno, che la variabile di ritono non ha un tipo specificato 
void scambiof(float *in1, float *in2);
// se mettessi a b c al di fuori del main sarebbero varaibili globali 
int main (void){

    float a=3.0,b=2.4,c;

    c=sommaf(a,b);
    printf("la somma tra %f e %f fa %f\n",a,b,c);

    printf("Prima lo scambio A: %f, B: %f\n", a,b);
    scambiof(&a,&b);
    //& davanti alla variabile va a passare la variabile all'inidirzzo a cui punta 


    return 0;
}
float sommaf (float in1, float in2)
{
    return in1+in2;
}

void scambiof (float *addr_a, float *addr_b)
{
    float tmpA, tmpB;
    tmpA=*addr_a;
    tmpB=*addr_b;
    //andiamo a mettere il valore dell'indirizo puntato in a e b
    //andiamo ad accedere al valore puntato dall'indirizzo con *
    *addr_a=tmpB;
    *addr_b=tmpA;
    printf("%f e %f dopo scambio \n",*addr_a,*addr_b);

    return;
}