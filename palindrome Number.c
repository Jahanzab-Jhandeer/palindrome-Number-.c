#include<stdio.h>



int main () {
    int n, rev = 0, sum = 0, temp =0, r;
    printf("enter the number : ");
    scanf("%d" , &n);
    
    temp = n;
    
    while(temp > 0) {
        r = temp % 10;
        rev = (rev * 10) + r;
        temp = temp/10;
    }
    
    
    if(n == rev) {
        printf("%d is the  palindrome Number : " , rev);
    }
    else {
            printf("%d is not palindrome Nmber : " , rev);
    }
    
    return 0;

}

