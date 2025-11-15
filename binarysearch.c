#include<stdio.h>
int main() {
    int high,low,mid,found=0,i,num,n,pos=-1,arr[25];
    printf("enter no of elements");
    scanf("%d",&n);
    printf("array is ");
    for(i=0;i<n;i++){
    scanf("%d", &arr[i]);
    }
    printf("search number");
    scanf("%d",&num);
    low=0;high=n-1;
    while(low<=high){
        mid=low+high/2;
        if(arr[mid]==num){

        
        printf("number %d found at pos %d",num,mid);
        found=1;
        break;
        }
    

    else if(arr[mid]<num){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    if(low>high && found==0){
        printf("%d number not found",num);

    }
}
    return 0;

}
