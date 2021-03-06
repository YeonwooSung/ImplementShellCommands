//
// Created by YeonwooSung on 2018. 5. 25..
//

#include <stdio.h>
#include <unistd.h>

/**
 * The main function for the cd command.
 *
 * The aim of the cd command is to help user to change the working directory.
 * I used chdir function of POSIX to implement the cd command.
 *
 * @param argc the number of command line arguments.
 * @param argv the value of commnad line arguments.
 * @return 0
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "invalid number of arguments\n");
    } else {
        if (chdir(argv[1]) != 0) {
            fprintf(stderr, "Directory not changed\n");
        }
    }

    return 0;
}
