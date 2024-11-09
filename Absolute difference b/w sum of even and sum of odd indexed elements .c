#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],e=0,o=0,i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            e=e+a[i];
        }
        else if(i%2!=0){
            o=o+a[i];
        }
    }
    if(e>o){
        printf("%d",e-o);
    }
    else{
        printf("%d",o-e);
    }
}