#pragma warning(disable:4996)

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp;

    rename("file.txt", "newfile.txt");
    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        perror("Error: ");
        return (-1);
    }

    fclose(fp);

    _getch();
    return (0);
}