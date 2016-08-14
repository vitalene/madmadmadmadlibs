//  main.c
//  MadMadMadMadLibs


#include <stdio.h>
#include "verbs.h"
#include "adjectives.h"
#include "nouns.h"

int main(int argc, const char * argv[]) {
    adjective adjChosen = adjectiveNull;
    adjective numberOfAdjChosen = adjectiveNull;
    verb verbChosen = verbNull;
    verb numberOfVerbChosen = verbNull;
    char *adjWord = '\0';
    char *verbWord = '\0';
    
    
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
    while ((numberOfAdjChosen != 1) ||
           (adjChosen < adjectiveFirst) || (adjChosen > adjectiveLast)) {
        fpurge(stdin);
        printf("Please enter: \n:");
        printf("    %d: tiny\n", adjectiveTiny);
        printf("    %d: cute\n", adjectiveCute);
        printf("    %d: small\n", adjectiveSmall);
        numberOfAdjChosen = scanf("%d", &adjChosen);
    }
    switch (adjChosen) {
        case 1:
           adjWord = "tiny";
            printf("%s", adjWord);
            break;
        case 2:
            adjWord = "cute";
            printf("%s", adjWord);
            break;
        case 3:
            adjWord = "small";
            printf("%s", adjWord);
            break;
        default:
            printf("Something went wrong here!");
            break;
    }
    
    while ((numberOfVerbChosen != 1) ||
           (verbChosen < verbFirst) || (verbChosen > verbLast)) {
        fpurge(stdin);
        printf("Please enter: \n:");
        printf("    %d: swam\n", verbSwam);
        printf("    %d: jumped\n", verbJumped);
        printf("    %d: flew\n", verbFlew);
        numberOfVerbChosen = scanf("%d", &verbChosen);
    }
    
    switch (verbChosen) {
        case 1:
            verbWord = "swam";
            printf("%s", verbWord);
            break;
        case 2:
            adjWord = "jumped";
            printf("%s", verbWord);
            break;
        case 3:
            adjWord = "flew";
            printf("%s", verbWord);
            break;
        default:
            printf("Something went wrong here!");
            break;
    }
    
    printf("\n %s one day a %s %d %s across the ocean.\n", userName, adjWord, nounKitty, verbWord );
    /*  {
     printf("His friend, a %s %s wanted to travel too, but decided to try a different way, so she %s.\n\n",);
     
     
     printf("Once they met up, they called a mutual friend, a %s .\n\n", );
     
     
     printf("The %s %s to meet them.",);
     
     
     printf("They all %s to the nearest teahouse and had some very %s cups of tea.\n",);
     } */
    
    
    return 0;
}
