#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,avg,c=0,e=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        c=c+a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>=(c/n)){
            e=e+1;
        }
    }
    printf("%d",e);
}