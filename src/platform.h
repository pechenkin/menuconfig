/*
 * Copyright (C) 2018 pechenkin <n.pechenkin@mail.ru>
 * Released under the terms of the GNU GPL v3.0.
 */

#ifndef PLATFORM_H
#define PLATFORM_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef HAVE_STRNDUP
#include <stdlib.h>
#include <string.h>
static inline char *strndup(const char *s, size_t n)
{
    const size_t l = strlen(s);
    const size_t size = (l < n ? l : n) + 1;
    char *r = (char *) malloc(size * sizeof(char));
    if (r != NULL) 
    {
        memcpy(r, s, size);
        r[size] = '\0';
    }
    return r;
}
#endif /* HAVE_STRNDUP */

#if defined(__MINGW32__) || defined(__MINGW64__) || defined(MINGW32)
# define PLT_WINDOWS
# define MKDIR(p, m) mkdir(p)
#else
#include <sys/utsname.h>
# define PLT_POSIX
# define MKDIR(p, m) mkdir(p, m)
#endif


#ifdef __cplusplus
}
#endif

#endif /* PLATFORM_H */
