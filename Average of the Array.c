#include<stdio.h>
int main(){
    int n,i,sum=0;
    float c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
        c=c+1.0;
    }
    printf("%.2f",sum/c);
}