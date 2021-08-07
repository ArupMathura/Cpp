#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n, *ptr, sum=0;
    printf("Enter the number of elements :");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if(ptr=NULL){
        printf("unable to allocate memory");
    }
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d", ptr+i);
        sum = sum + *(ptr+i);
    }
    printf("sum = %d", sum);
    free(ptr);
    return 0;
}