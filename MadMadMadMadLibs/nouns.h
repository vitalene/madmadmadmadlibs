//
//  nouns.h
//  MadMadMadMadLibs
//
//  Created by Neil Vitale on 8/13/16.
//  Copyright © 2016 Neil Vitale. All rights reserved.
//

#ifndef nouns_h
#define nouns_h

#include <stdio.h>
#include <limits.h>

typedef enum noun {
    nounPuppy = 1,
    nounKitty,
    nounMonster
} noun;

char *stringFromNoun(noun noun);

#endif /* nouns_h */
