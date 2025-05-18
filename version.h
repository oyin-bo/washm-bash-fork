#ifndef _VERSION_H_
#define _VERSION_H_

/* The distribution version number of this shell. */
#define DISTVERSION	"5.1"	/* Major version number */

/* The build version number of this shell. */
#define BUILDVERSION	0	/* Build version number */

/* The release status of this shell. */
/* #define RELSTATUS "beta1" */ /* Uncomment and set if not a final release */

/* A SCCS version string. */
#define SCCSVERSION "@(#)Bash version 5.1.0"

/* Default shell compatibility level. */
#define DEFAULT_COMPAT_LEVEL 51 /* 5.1 */

/* The machine type. */
#ifndef MACHTYPE
#define MACHTYPE "wasm32-unknown-emscripten" /* Or a more generic placeholder */
#endif

#endif /* _VERSION_H_ */