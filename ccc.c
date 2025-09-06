#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) {
    char *cmd = (char *) malloc(512);
    int result;

    if(argc == 1  || argc > 3) {
        printf("usage: cc file\n");
        exit(1);
    }
    char *file = *++argv;
    char name[sizeof file];
    strncpy(name, file, strlen(file) - 2);
    name[strlen(file) - 2] = '\0';
    if(argc == 2) {
        system("mkdir -p compiled");
        sprintf(cmd, "gcc %s -o compiled/%s", file, name);
    }
    else {
        char *dir = *++argv;
        sprintf(cmd, "mkdir -p %s", dir);
        system(cmd);
        sprintf(cmd, "gcc %s -o %s/%s", file, dir, name);
    }
    if((result = system(cmd)) == 0)
        printf("success\n");
    else    
        printf("something went wrong\n");
    exit(0);
}