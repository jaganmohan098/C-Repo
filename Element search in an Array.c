#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c,d=0;
    scanf("%d",&c);
    for(i=0;i<n;i++){
        if(a[i]==c){
            d=1;
            break;
        }
    }
    if(d==1){
        printf("True");
    }
    else{
        printf("False");
    }
}