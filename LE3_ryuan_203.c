
#include <stdio.h>
#include<stdlib.h>
#define SIZE 50

int main()
{
    char inBuf[SIZE];
    int choice;
    
    printf("********************\n");
    printf("\"Hello World\" in different languages\n");
    printf("********************\n");
    printf("Option      Language\n");
    printf("1           Spanish\n");
    printf("2           French\n");
    printf("3           Japanese\n");
    printf("4            Quit\n");
    printf("Please, select an option: ");
    
    fgets(inBuf, SIZE, stdin);
    sscanf(inBuf, "%d", &choice);
    

    
    switch(choice){
        case 1:
            printf("Spansh: Hola Mundo\n");
            break;
        case 2:
            printf("French: Bonjour le monde\n");
            break;
        case 3:
            printf("Japanese: こんにちは世界\n");
            break;
        case 4:
            printf("Quit the program.\n");
            break;
        default:
        printf("Invalid Choice.\n");
        exit (-1);
        
        
    }
    

    return 0;
}
