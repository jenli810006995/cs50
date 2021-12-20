// argc - argument count, aka # of arguments passed to the program
// argv = argument vector, aka 1 dimensional array of strings

$ ./caesar 1 x z
argc = 4
argv = "./caesar", "1", "x", "z"
argv[0] = ./caesar
argv[1] = 1
argv[2] = x
argv[3] = z


// Goal = Check the keys are all digits, aka not letters, spaces or others
// Method:
// 1. for loop
// 2. string.h -> strlen: Calculate the length of string
// 3. if ... else statement
// 4. ctype.h -> isdigit
// Tracking concept



