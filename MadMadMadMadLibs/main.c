//  main.c
//  MadMadMadMadLibs


#include <stdio.h>
#include "verbs.h"
#include "adjectives.h"
#include "nouns.h"

int main(int argc, const char * argv[]) {

    //******Get user's name*************
    //**********************************
    char userName[20] = {'\0'};
    int numberOfItemsScanned = 0;
    //*********************************
    while (numberOfItemsScanned != 1) {
        //Asks user for name and gathers input
        fpurge(stdin);
        printf("Please enter your first name: ");
        numberOfItemsScanned = scanf("%[^\n]s\n", userName);
        printf("Thanks, %s.  Welcome to the story.\n", userName);
    }
    
    
    
    
        printf("\n %s one day a %d %d %d across the ocean.\n", userName, adjectiveCute, nounKitty, verbFlew );
  /*  {
    printf("His friend, a %s %s wanted to travel too, but decided to try a different way, so she %s.\n\n",);
    
    
    printf("Once they met up, they called a mutual friend, a %s .\n\n", );
    
    
    printf("The %s %s to meet them.",);
    
    
    printf("They all %s to the nearest teahouse and had some very %s cups of tea.\n",);
    } */
    
    
    return 0;
}
