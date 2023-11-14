#include "main.h"

int print_unsigned(unsigned int u) {
    char str[30];
    unsigned_itoa(u, str);
    return print_string(str);
}
int print_string(char *s) {
    int i, count = 0;
    for (i = 0; s[i] != '\0'; i++) {
        _putchar(s[i]);
        count++;
    }
    return count;
}
int print_special_string(char *s) {
    int i, count = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if ((s[i] > 0 && s[i] < 32) || s[i] >= 127) {
            _putchar('\\');
            _putchar('x');
            count += 2 + charToHex(s[i]);
        } else {
            _putchar(s[i]);
            count++;
        }
    }
    return count;
}

int print_int(int di) {
    char str[30];
    _itoa(di, str);
    return print_string(str);
}

int print_pointer(void *p) {
    return print_address(p);
}
