# 0-preprocessor
This script runs a C file through the preprocessor and save the result into another file.
  > The C file name will be saved in the variable $CFILE
  > The output should be saved in the file c

# 1-compiler
This script compiles a C file but does not link.
  > The C file name will be saved in the variable $CFILE
  > The output file should be named the same as the C file, but with the extension .o instead of .c.
    Example: if the C file is main.c, the output file should be main.o

# 2-assembler
This script generates the assembly code of a C code and save it in an output file.
  > The C file name will be saved in the variable $CFILE
  > The output file should be named the same as the C file, but with the extension .s instead of .c.
    Example: if the C file is main.c, the output file should be main.s

# 3-name
This script compiles a C file and creates an executable named cisfun
  > The C file name will be saved in the variable $CFILE

# 4-puts.c
This C program prints out "Programming is like building a multilingual puzzle, followed by a new line.
  > It uses the function puts 
  > The program ends with the value 0
  > The printf function is not allowed in this program 

# 5-printf.c
This C program prints out "with proper grammar, but the outcome is a piece of art,", followed by a new line
  > Used the printf function
  > Didn't use puts function
  > The program returs 0
  > It compiles without warning when using the -Wall gcc option

# 6-size.c
This C program prints the size of various types on the computer it compiled and run on
  > Warnings are allowed
  > The program should return 0
  > You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option

# 