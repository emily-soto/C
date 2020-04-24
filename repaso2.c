#include <stdio.h>

int search(void) {
int arrg[5]={1,2,3,4,5};
int number;
printf("Ingrese un numero del 1 al 5\n");
scanf("%d", &number);
if (number>5){
printf("%d no se encuentra en el arreglo", number);
}
for(int i=0;i<5 ;i++){
if (arrg[i]==number){
printf("%d",i);
}
}
return 0;
}

int give_me(void){
    int number;
    printf("Ingrese un numero menor o igual a 25\n");
    scanf("%i", &number);
    int arreglo[number];
    for (int i=0; i<number; i++){
        int relleno;
        printf("Ingrese el numero que corresponde a la posicion %i:", i+1);
        scanf("%i", &relleno );
        arreglo[i]=relleno;
    }
    for(int i = 0; i < number; i++){
    printf("%d ",arreglo[i]);
}
//Size of an array
printf("\n %lu", sizeof(arreglo)/sizeof(int));
return 0;
}

int reverse(void){
    int arr[5]={2,4,6,8,10};
    int reves[5];
    int contador=4;
    for (int i=0; i<5; i++){
        reves[contador]=arr[i];
        contador=contador-1;
    }
    for (int i=0; i<5; i++){
        printf("%d,", arr[i]);
    }
    printf("\n");
    for (int i=0; i<5; i++){
        printf("%d,", reves[i]);
    }
return 0;
}
int search_char(void){
  char arr[5]={'a', 'b', 'c', 'd', 'e'};
  char letra;
  printf("Ingrese la letra que desea buscar:\n");
  scanf("%c", &letra);
  for (int i=0; i<5; i++){
    if (letra==arr[i]){
      printf("La letra %c esta en la posicion %d", letra, i+1);
    }
  }
return 0;
}
int lenght(char* palabra){
  int contador=0;
  while (*(&palabra[contador])!='\0'){
    contador=contador+1;
  }
  return contador;
}

int main(void){
    reverse();
}
