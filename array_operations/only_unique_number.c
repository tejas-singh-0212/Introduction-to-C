#include<stdio.h>
#include<stdbool.h>
//all elements are present twice in array, except one, find it
void main(){
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for (int i=0; i<n; i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",arr+i);
    }
    bool flag;
    for(int i=0; i<n; i++){
        flag = false;
        for (int j=0; j<n; j++){
            if((i!=j) && (arr[i] == arr[j])){
                flag = true;
                break;
            }
        }if(flag == false){
            printf("%d appears only once in the given array.",arr[i]);
            break;
        }
    }
}