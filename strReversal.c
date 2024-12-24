#include <stdio.h>
#include <string.h>

void reverseString(char * x){
    int len = strlen(x);
    int i, j;
    for(i = 0, j = len - 1; i < j; i++, j--){
        char temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        //As we iterate through the string we replace each character
        //by assigning a temp variable to x[i] we can reassign x[i]
        //to x[j] and then assign x[j] to temp to replace each
        //character in the string in place to reverse it
    }
}

int main(){

    char x[] = "Hello";

    printf("Original String: %s\n", x);

    reverseString(x);
    
    printf("Reversed String: %s\n", x);

    return 0;
}



