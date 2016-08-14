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
    adjectiveCute,
    adjectiveSmall
} adjective;

char *stringFromAdjective(adjective adjective);

#endif /* adjectives_h */
