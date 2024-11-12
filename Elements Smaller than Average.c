#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,avg=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        avg=avg+a[i];
    }
    for(i=0;i<n;i++){
        if((avg/n)>= a[i])
        c=c+1;
    }
    printf("%d",c);
}