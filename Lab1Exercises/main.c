#include <stdio.h>
#include <stdlib.h>

int main()
{


// lab1 ex1
    int a=2021;

    printf("%d \n",a);
    printf("0x%x",a);



// lab1 ex2

 int numofops=0;
 int val[20];

 for (int i=0; a>0;i++){
    numofops++;
    val[i]=a%2;
    a=a/2;
 }

//printf("\n%d",numofops);

int binary[numofops];
for (int i=0;i<numofops;i++){
    binary[i]=val[i];
}

printf("\nBinary rep is:");

for (int j=numofops-1;j>=0;j--){
    printf(" %d",binary[j]);
}




    return 0;
}


