//
//  verbs.h
//  MadMadMadMadLibs
//
//  Created by Neil Vitale on 8/13/16.
//  Copyright © 2016 Neil Vitale. All rights reserved.
//

#ifndef verbs_h
#define verbs_h

#include <stdio.h>
#include <limits.h>

typedef enum verb {
    verbSwam = 1,
    verbJumped,
    verbFlew,
    verbNull = INT_MIN, 
    verbFirst = verbSwam,
    verbLast = verbFlew
} verb;

char *stringFromVerb(verb verb);

#endif /* verbs_h */
