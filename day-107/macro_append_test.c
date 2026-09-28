#include <stdio.h>
#include <stdlib.h>

typedef struct{
  float* items;
  size_t count;
  size_t capacity; 
} Numbers;

void addCapacity(Numbers* xs)
{
  /*
  Déréférencement automatique 
   La flèche: -> <==> *(xs).count.
  */ 
  if (xs->count >= xs->capacity)
  {
    if (xs->capacity == 0)
    {
      xs->capacity = 5;
    }
    else
    {
      xs->capacity *=2;
    }
    xs->items = realloc(xs->items,sizeof(xs->items));
  }
}
int main()
{
  Numbers numbers;
  printf("struc : %s",numbers);
  printf("\nTaille Struc Numbers :%d",sizeof(numbers));
  Numbers xs={0}; // item = null.
  addCapacity(&xs);
  printf("\nTaille de Struc xs :%d",sizeof(xs));
  printf("\nTaille de la liste item de xs :%d", xs.capacity*sizeof(*xs.items));
  printf("\nCapacité de la struc xs :%d",xs.capacity);

} 
