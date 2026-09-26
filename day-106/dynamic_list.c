#include <stdio.h>
#include <stdlib.h>

typedef struct{
  float *items;
  size_t count;
  size_t capacity;
} Numbers;

int main()
{
  Numbers numbers;
  printf("%s",numbers);

  Numbers xs ={0}; // => Tous les elems : *items vaut null, count et capacity valent 0.
  // printf("%d",numbers.capacity); => 00.00 
  for(int x =0; x<10; x++){
    if(xs.count >= xs.capacity){
      if(xs.capacity == 0){xs.capacity = 256;}
      else{xs.capacity *=2;};
      /*
       Rappel : sizeof(): Donne le Bytes du type d'une variable.
       Au tour 1 : 
        xs.item = null, ne pointe vers aucun tableau, ce qui revient à :
        xs.item = realloc(null,256*sizeof(float));
        realloc(Null,taille) <=> malloc(taille) : 
          Réserve un nouveau bloc mémoire et renvoie l'adresse à xs.items,
          xs.items sert enfin de tab.
      */ 
      xs.items = realloc(xs.items,xs.capacity*sizeof(*xs.items));
    }
    xs.items[xs.count++] = x;
  }
  for(size_t i=0; i< xs.count; i++){printf("%f\n",xs.items[i]);}
  printf("%zu",sizeof(float));
}
