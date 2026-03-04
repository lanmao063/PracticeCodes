#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* getEncryptedString(char* s, int k);

int main() {
    // Test case 1: Normal case with positive shift
    char str1[] = "abcde";
    assert(strcmp(getEncryptedString(str1, 1), "bcdef") == 0);

    // Test case 2: Normal case with negative shift
    char str2[] = "abcde";
    assert(strcmp(getEncryptedString(str2, -1), "zabcd") == 0);

    // Test case 3: Shift is zero
    char str3[] = "abcde";
    assert(strcmp(getEncryptedString(str3, 0), "abcde") == 0);

    // Test case 4: Shift is greater than the length of the string
    char str4[] = "abcde";
    assert(strcmp(getEncryptedString(str4, 5), "fabcde") == 0);

    // Test case 5: Empty string
    char str5[] = "";
    assert(strcmp(getEncryptedString(str5, 3), "") == 0);

    // Test case 6: String with spaces
    char str6[] = "hello world";
    assert(strcmp(getEncryptedString(str6, 2), "jgnnq yqtnf") == 0);

    printf("All test cases pass");
    return 0;
}

char* getEncryptedString(char* s, int k) {
    for(int i = 0; i < strlen(s); i++) {
        *(s + i) = *(s + i + k); // 将字符向后偏移k个位置
        if(i + k > strlen(s)) {
            *(s + i) = *(s + i + k) - strlen(s); // 如果偏移后超过字符串长度，则减去字符串长度
        }
    }
    return s;
}
