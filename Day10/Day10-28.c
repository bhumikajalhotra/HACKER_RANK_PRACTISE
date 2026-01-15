#include <stdio.h>

int main() {

    int n;
    
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("The verdict for the number %d is: INVALID", n);
        return 0;
    }
    
    int cond1 = n % 2 == 0  && n > 10;
    int cond2 = n > 15 && n % 3 == 0;
    int cond3 = n % 7 == 0;
    
    int count = cond1 + cond2 + cond3;
    
    if(count == 3){
        printf("The verdict for the number %d is: SUPERNATURAL" , n);
    }
    else if (count == 2 ){
        printf("The verdict for the number %d is: MIRACULOUS" , n);
    }
    else if (count == 1){
        printf("The verdict for the number %d is: MAGICAL" , n);
    }
    else {
        printf("The verdict for the number %d is: NORMAL" , n);
    }
    
    
    return 0;
}

// If-Else_Magical Mirror