//
//  adjectives.h
//  MadMadMadMadLibs
//
//  Created by Neil Vitale on 8/13/16.
//  Copyright © 2016 Neil Vitale. All rights reserved.
//

#ifndef adjectives_h
#define adjectives_h

#include <stdio.h>
#include <limits.h>

typedef enum adjective {
    adjectiveTiny =1,
    adjectiveCute =2,
    adjectiveSmall =3,
    adjectiveNull = INT_MIN,
    adjectiveLast = adjectiveSmall,
    adjectiveFirst = adjectiveTiny
} adjective;

int *stringFromAdjective(adjective adjective);

#endif /* adjectives_h */
