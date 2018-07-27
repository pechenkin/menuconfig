# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([mconf], [4.18], [BUG-REPORT-ADDRESS])
AC_CONFIG_SRCDIR([src/mconf.c])

AC_CANONICAL_HOST
AC_CANONICAL_BUILD

# Checks for programs.
AC_PROG_CC
AM_INIT_AUTOMAKE([subdir-objects])
AC_PROG_YACC
AC_PROG_LEX

# Checks for libraries.

CROSS_COMPILE=
if test "x$cross_compiling" = "xyes"; then
    case "${host}" in
    *-mingw*)
        XX=UUU
        ;;
    esac
fi

AC_CHECK_LIB([ncurses], [delwin])

# Checks for header files.
AC_CHECK_HEADERS([ncurses.h])
#AC_CHECK_HEADERS([fcntl.h limits.h stdlib.h string.h sys/time.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
#AC_CHECK_HEADER_STDBOOL
#AC_C_INLINE
#AC_TYPE_OFF_T
#AC_TYPE_SIZE_T
#AC_TYPE_SSIZE_T

# Checks for library functions.
#AC_FUNC_MALLOC
#AC_FUNC_REALLOC
#AC_CHECK_FUNCS([bzero gettimeofday memmove memset mkdir regcomp strcasecmp strchr strcspn strdup strncasecmp strndup strpbrk strrchr strspn strtol strtoul strtoull])

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT
