#include <stdio.h>
#include <string.h>

// Insert
void insert_char(char str[], char ch, int pos) {
    int len = strlen(str);
    if (pos >= 0 && pos <= len) {
        for (int i = len; i >= pos; i--) {
            str[i+1] = str[i];
        }
        str[pos] = ch;
    }
}

// Replace
void replace_char(char str[], char old_ch, char new_ch) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == old_ch) {
            str[i] = new_ch;
        }
    }
}


// Delete
void delete_char(char str[], int pos) {
    int len = strlen(str);
    if (pos >= 0 && pos < len) {
        for (int i = pos; i < len-1; i++) {
            str[i] = str[i+1];
        }
        str[len-1] = '\0';
    }
}

int main() {
    char str[100] = "Hello World";
    printf("Orginal String: %s\n",str);

    insert_char(str, '!', 5);
    printf("After Inserting: %s\n", str);

    replace_char(str, 'l', 'L');
    printf("After Replacing: %s\n", str);

    delete_char(str, 3);
    printf("After Deleting: %s\n", str);

    return 0;
}
