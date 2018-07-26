#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([standalone crossplatform menuconfig], [VERSION], [BUG-REPORT-ADDRESS])

# Checks for programs.
AC_PROG_CC
AM_INIT_AUTOMAKE
AC_PROG_YACC
AC_PROG_LEX

# Checks for libraries.
AC_CHECK_LIB([ncurses], [delwin])

# Checks for header files.
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

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
