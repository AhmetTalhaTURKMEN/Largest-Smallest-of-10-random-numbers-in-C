#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define N 10
int main()
{
    int dizi[N];
    srand(time(0));

    for(int i=0;i<N;i++){
        dizi[i]=rand();
        printf("Rand number %2d : %d \n",i+1,dizi[i]);
    }

    printf("\n");



    int enkucuk,enbuyuk;
    enkucuk=INT_MAX;
    enbuyuk=INT_MIN;

    for(int j=0;j<N;j++){
        if(dizi[j]<enkucuk)
            enkucuk=dizi[j];
        if(dizi[j]>enbuyuk)
            enbuyuk=dizi[j];

    }
    printf("Smallest number:%d \n\nBiggest number:%d \n",enkucuk,enbuyuk);

    return 0;
}
