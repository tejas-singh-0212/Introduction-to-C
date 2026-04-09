#include<stdio.h>
#include<stdbool.h>
//finding pairs of elements of array such that their sum is the target
void main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    //Taking elements of array in sorted form
    printf("Enter elements of array (in sorted form):\n");
    for(int i=0; i<size; i++){
        printf("Element number %d: ",i+1);
        scanf("%d",arr+i);
    }
    int target_sum;
    printf("Enter the target sum: ");
    scanf("%d",&target_sum);
    
    //finding the pairs
    int i=0, j=size-1;
    bool pair_found = false;
    while(i<j){
        if(arr[i]+arr[j]==target_sum){
            printf("(%d,%d) is a pair\n",arr[i],arr[j]);
            pair_found = true;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>target_sum)   j--;
        else if(arr[i]+arr[j]<target_sum)   i++;
    }
    if(!pair_found)    printf("No pair found");
}