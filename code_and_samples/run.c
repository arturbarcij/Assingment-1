#include <stdio.h>
#include <stdlib.h>

//another method to run code with "&" between commands
//To run (win): .\main.exe .\samples\easy\1EASY.bmp .\samples\easy\1EASY_inv.bmp & .\main.exe .\samples\easy\2EASY.bmp .\samples\easy\2EASY_inv.bmp ...

int main() {
    char command[256];  // Buffer to hold the command string
    for (int i = 0; i < 11; i++) {
        // Construct the command with the current value of i
        sprintf(command, ".\\main.exe .\\samples\\easy\\%dEASY.bmp .\\samples\\easy\\%dEASY_inv.bmp", i, i);

        // Execute the command
        system(command);
    }
    // for (int i = 0; i < 11; i++) {
    //     // Construct the command with the current value of i
    //     sprintf(command, ".\\main.exe .\\samples\\medium\\%dMEDIUM.bmp .\\samples\\medium\\%dMEDIUM_inv.bmp", i, i);

    //     // Execute the command
    //     system(command);
    // }

    clock_t start, end;
    double cpu_time_used;start = clock();
    /* The code that has to be measured. */
    end = clock();
    
    cpu_time_used = end - start;
    printf("Total time: %f ms\n", cpu_time_used * 1000.0 /CLOCKS_PER_SEC);
    
    return 0;
}
