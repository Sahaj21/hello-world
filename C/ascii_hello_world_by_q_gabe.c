#include <stdio.h>

/*
*  Created by q-gabe on 23/10/2018.
*/

/* This function prints "Hello World" in ASCII in the Sub-zero font.
*
*  If you would like to use a simple online C compiler to visualize this code use: https://www.onlinegdb.com/online_c_compiler#
*
*  Here are the steps I took in case you want to do this too!
*
*
*  Step-by-step:
*  1. Convert the string "Hello World" into ASCII art using the generator at patorjk.com/software/taag. Though, you will want to make sure the font is not too complex for the next few steps!
*
*  2. Write the code to print a statement in your favourite text editor (I use Sublime Text 3!).
*
*  3. Copy and paste the hello world ASCII art from the ASCII art generator and paste it into the "" of your print statement.
*
*  4. Put a newline character (\n) at the end of every line of your ASCII art.
*     This is because the compiler will think your code has been truncated if you span it across a few lines of code.
*     (It will just think that your code has been truncated. String literals may not span multiple logical source lines)
*
*  5. Put a backslash (\) behind all illegal characters within the ASCII art. This is quite tedious and probably possible to automate (if anyone is free to help, please be my guest!)
*     Also put a % in front of any "%" within the art.
*     Illegal characters: \, "
*     (If you are unsure of this step, use a text editor that is syntax specific and has color coding (like Sublime!) and it will highlight the characters that will break the string)
*
*  6. Have fun! (:
*/

int main(void) {
    printf("\n __  __     ______     __         __         ______        __     __     ______     ______     __         _____    \n/\\ \\_\\ \\   /\\  ___\\   /\\ \\       /\\ \\       /\\  __ \\      /\\ \\  _ \\ \\   /\\  __ \\   /\\  == \\   /\\ \\       /\\  __-.  \n\\ \\  __ \\  \\ \\  __\\   \\ \\ \\____  \\ \\ \\____  \\ \\ \\/\\ \\     \\ \\ \\/ \".\\ \\  \\ \\ \\/\\ \\  \\ \\  __<   \\ \\ \\____  \\ \\ \\/\\ \\ \n \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\_____\\  \\ \\_____\\  \\ \\_____\\     \\ \\__/\".~\\_\\  \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\____- \n  \\/_/\\/_/   \\/_____/   \\/_____/   \\/_____/   \\/_____/      \\/_/   \\/_/   \\/_____/   \\/_/ /_/   \\/_____/   \\/____/ \n                                                                                                                   \n");
    return 0;
}