#include <stdio.h>

union Data {
    int a;
    int b;
};

int main() {
    union Data data;

    data.a = 1945;
    data.b = 2023 - data.a;

    printf("%d %d", data.a, sizeof(data));

    return 0;
}
