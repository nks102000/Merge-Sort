//1905622 - NITISH KUMAR SONTHALIA
//MERGE SORT
#include <stdio.h>
#include <stdlib.h>

int sortadd(int p1[],int p2[],int n1,int n2);
int main(){
     int i,n1,n2,j;  
 
    printf("Enter size of array 1: ");
    scanf("%d",&n1);
    int *p1=(int*)malloc(n1 * sizeof(int));

    printf("Enter %d elements in sorted array 1: ", n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&p1[i]);
    }

    printf("Enter size of array 2: ");
    scanf("%d",&n2);
    int *p2=(int*)malloc(n2 * sizeof(int));

    printf("Enter %d elements in sorted array 2: ", n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&p2[i]);
    }
    sortadd(p1,p2,n1,n2);
}

int sortadd(int p1[],int p2[],int n1,int n2){
    int *p3=(int*)malloc((n1+n2) * sizeof(int));

    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(p1[i]<p2[j]){
            p3[k]=p1[i];
            i++;
            k++;
        }
        else if(p1[i]>p2[j]){
            p3[k]=p2[j];
            j++;
            k++;
        }
        else if(p1[i]=p2[j]){
            p3[k]=p2[j];
            i++;
            j++;
            k++;
        }
    }
    while(i<n1){
        p3[k]=p1[i];
        i++;
        k++;
    }
    while(j<n2){
        p3[k]=p2[j];
        j++;
        k++;
    }
    for(int i=0;i<n1+n2;i++)
 
    {
        printf("%d  ", p3[i]);
    }
}