/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/mnt/a4455jkjh/android-arm64/i686-linux-android/sysroot/usr/include/asm/posix_types.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/* This file fixes a bug in the __FD_ZERO macro
   for older versions of the Linux kernel. */
#ifndef _POSIX_TYPES_H_WRAPPER
#include <features.h>
 #include_next <asm/posix_types.h>

#if defined(__FD_ZERO) && !defined(__GLIBC__)
#undef __FD_ZERO
#define __FD_ZERO(fdsetp) \
  do { \
    int __d0, __d1; \
__asm__ __volatile__("cld ; rep ; stosl" \
: "=&c" (__d0), "=&D" (__d1) \
: "a" (0), "0" (__FDSET_LONGS), \
  "1" ((__kernel_fd_set *) (fdsetp)) :"memory"); \
  } while (0)
#endif

#define _POSIX_TYPES_H_WRAPPER
#endif /* _POSIX_TYPES_H_WRAPPER */
