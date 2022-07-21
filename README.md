# c-language-learning
 c language learning

# [interactive-debugging](interactive-debugging)
Watch variables as I execute line by line.

betty test-file.c; #Check style guideline aganist betty
gcc -g test-file.c -o test-file; #Compile c source code file to executable file, preserve symbols (function and varaible names) -g flag
./test-file; #Run executable file

gdb -tui ./a.out #Run executable interactively

gdb test-file; 

gdb layout n

## References
 [https://www.xmodulo.com/gdb-command-line-debugger.html](https://www.xmodulo.com/gdb-command-line-debugger.html)