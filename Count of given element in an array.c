#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=0,d;
    scanf("%d",&d);
    for(i=0;i<n;i++){
        if(a[i]==d){
            c=c+1;
        }
    }
    printf("%d",c);
}