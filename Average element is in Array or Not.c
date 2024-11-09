#include<stdio.h>
int main(){
    int n,flag=0;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        c=c+a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==c/n){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("True");
    }
    else{
        printf("False");
    }
}