#ifndef AVR32_ABI_H_INCLUDED
#define AVR32_ABI_H_INCLUDED


/* The GNU assembler is ABI compliant*/
#ifndef __AVR32_ABI_ASSEMBLER__
# ifdef __GNUC__
#  ifdef __ASSEMBLER__
#   define __AVR32_ABI_ASSEMBLER__
#  endif
# endif
#endif

/* The GNU C/C++ compiler is ABI compliant */
#ifndef __AVR32_ABI_COMPILER__
# ifdef __GNUC__
#  ifndef __ASSEMBLER__
#   define __AVR32_ABI_COMPILER__
#  endif
# endif
#endif


/* The IAR Systems C/C++ Compiler is ABI compliant */
#ifndef __AVR32_ABI_COMPILER__
# ifdef __ICCAVR32__
#  define __AVR32_ABI_COMPILER__
# endif
#endif

/* The IAR Systems Assembler is ABI compliant */
#ifndef __AVR32_ABI_ASSEMBLER__
# ifdef __AAVR32__
#  define __AVR32_ABI_ASSEMBLER__
# endif
#endif



/*#ifndef AVR32_ABI_H_INCLUDED*/
#endif

