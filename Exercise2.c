#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 48

void display_menu();
void write_file(char *filename);
void read_file(char *filename);

int main() {
    char filename[50];

    printf("Enter the name of the file to be processed:\n");
    scanf("%s", filename);

    while (1) {
        display_menu();

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("Exiting...\n");
                exit(0);
            case 1:
                write_file(filename);
                break;
            case 2:
                read_file(filename);
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    return 0;
}

void display_menu() {
    printf("Select from the options below\n");
    printf("1) Add a new name\n");
    printf("2) Print names\n");
    printf("0) Exit\n");
    printf("Enter your selection:\n");
}

void write_file(char *filename) {
    char name[MAX_NAME_LENGTH];
    FILE *fp = fopen(filename, "a");

    if (!fp) {
        printf("Failed to open file, terminating.\n");
        exit(0);
    }

    printf("Enter a name to add:\n");
    scanf("%s", name);

    if (strcmp(name, "") != 0) {
        fprintf(fp, "%s\n", name);
    }

    fclose(fp);
}

void read_file(char *filename) {
    FILE *fp = fopen(filename, "r");

    if (!fp) {
        printf("Failed to open file, terminating.\n");
        exit(0);
    }

    char name[MAX_NAME_LENGTH];
    int count = 0;

    while (fgets(name, MAX_NAME_LENGTH, fp)) {
        printf("%s", name);
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("File is empty.\n");
    } else {
        printf("File read and printed.\n");
    }
}
