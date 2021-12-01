#include <stdio.h>
#include "espl_lib.h"

int main() { 
    unsigned int n;
    char answer;
    do{ 
        printf("Enter a number: ");
        scanf("%d", &n);  
        printf("%s\n",num_to_words(n));
        printf("Would you like to try another number [y/n]?");
        scanf(" %c", &answer);
    }while(answer == 'y');
    return 0;
}