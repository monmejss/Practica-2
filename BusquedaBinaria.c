#include <stdio.h>

int array[6];
int size = 6;
int main(){
    
    int left, right, middle;
    int target=12;
    int targetLocation = -1;

    for(int i=0; i<6; i++){
    
    }

    left =0;
    right= size -1;

    while(left<= right){
        middle= (left+right)/2;
        if(array[middle]==target){
            targetLocation = middle;
            break;
        }
        if(array[middle] < target)
            left = middle + 1;
        else
            right= middle -1;
    }

}
