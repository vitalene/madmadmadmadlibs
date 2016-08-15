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
    noun numberOfNounChosen = nounNull;
    noun nounChosen = nounNull;
    char *adjWord = '\0';
    char *verbWord = '\0';
    char *nounWord = '\0';
    char userName[20] = {'\0'};
    int numberOfItemsScanned = 0;
    
    
    while (numberOfItemsScanned != 1) {
        fpurge(stdin);
        printf("Please enter your first name: ");
        numberOfItemsScanned = scanf("%[^\n]s\n", userName);
        printf("Thanks, %s.  Welcome to the story.\n", userName);
        
    }
    while ((numberOfAdjChosen != 1) ||
           (adjChosen < adjectiveFirst) || (adjChosen > adjectiveLast)) {
        printf("    %d: tiny\n", adjectiveTiny);
        printf("    %d: cute\n", adjectiveCute);
        printf("    %d: small\n", adjectiveSmall);
        printf("Please select an adjective :");
        fpurge(stdin);
        numberOfAdjChosen = scanf("%d", &adjChosen);
    }
    switch (adjChosen) {
        case 1:
           adjWord = "tiny";
            printf("%s\n", adjWord);
            break;
        case 2:
            adjWord = "cute";
            printf("%s\n", adjWord);
            break;
        case 3:
            adjWord = "small";
            printf("%s\n", adjWord);
            break;
        default:
            printf("Something went wrong here!\n");
            break;
    }
    
    while ((numberOfVerbChosen != 1) ||
           (verbChosen < verbFirst) || (verbChosen > verbLast)) {
        printf("    %d: swam\n", verbSwam);
        printf("    %d: jumped\n", verbJumped);
        printf("    %d: flew\n", verbFlew);
        printf("Please select a verb :");
        fpurge(stdin);
        numberOfVerbChosen = scanf("%d", &verbChosen);
    }
    
    switch (verbChosen) {
        case 1:
            verbWord = "swam";
            printf("%s\n", verbWord);
            break;
        case 2:
            verbWord = "jumped";
            printf("%s\n", verbWord);
            break;
        case 3:
            verbWord = "flew";
            printf("%s\n", verbWord);
            break;
        default:
            printf("Something went wrong here!");
            break;
    }
    
    
    while ((numberOfNounChosen != 1) ||
           (nounChosen < nounFirst) || (nounChosen > nounLast)) {
        printf("    %d: puppy\n", nounPuppy);
        printf("    %d: kitty\n", nounKitty);
        printf("    %d: monster\n", nounMonster);
        printf("Please select a noun :");
        fpurge(stdin);
        numberOfNounChosen = scanf("%d", &nounChosen);
    }
    
    switch (nounChosen) {
        case 1:
            nounWord = "puppy";
            printf("%s\n", nounWord);
            break;
        case 2:
            nounWord = "kitty";
            printf("%s\n", nounWord);
            break;
        case 3:
            nounWord = "monster";
            printf("%s\n", nounWord);
            break;
        default:
            printf("Something went wrong here!");
            break;
    }
    
    
    printf("\n %s, one day a %s %s %s across the ocean.\n", userName, adjWord, nounWord, verbWord );
    /*  {
     printf("His friend, a %s %s wanted to travel too, but decided to try a different way, so she %s.\n\n",);
     
     
     printf("Once they met up, they called a mutual friend, a %s .\n\n", );
     
     
     printf("The %s %s to meet them.",);
     
     
     printf("They all %s to the nearest teahouse and had some very %s cups of tea.\n",);
     } */
    
    
    return 0;
}
