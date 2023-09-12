#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *filename = "testfile.txt";
    const char *newfilename = "newfile.txt";
    const char *linkname = "symbolic_link.txt";
    const char *dirname = "testdir";

    // Create a file
    if (access(filename, F_OK) == -1) {
        printf("Creating a new file...\n");
        FILE *file = fopen(filename, "w");
        if (file == NULL) {
            perror("File creation error");
            return 1;
        }
        fclose(file);
    }

    // Change owner of the file
    if (chown(filename, getuid(), getgid()) == -1) {
        perror("chown error");
        return 1;
    }

    // Truncate the file
    if (truncate(filename, 50) == -1) {
        perror("truncate error");
        return 1;
    }

    // Create a hard link
    if (link(filename, newfilename) == -1) {
        perror("link error");
        return 1;
    }

    // Remove the hard link
    if (unlink(newfilename) == -1) {
        perror("unlink error");
        return 1;
    }

    // Create a symbolic link
    if (symlink(filename, linkname) == -1) {
        perror("symlink error");
        return 1;
    }

    // Read the content of the symbolic link
    char buf[256];
    ssize_t len = readlink(linkname, buf, sizeof(buf) - 1);
    if (len == -1) {
        perror("readlink error");
        return 1;
    }
    buf[len] = '\0';
    printf("Symbolic link points to: %s\n", buf);

    // Remove the directory
    if (rmdir(dirname) == -1) {
        perror("rmdir error");
        return 1;
    }

    return 0;
}
