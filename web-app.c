#include <emscripten/emscripten.h>
#include <stdio.h>
#define EXIT_SUCCESS 0

typedef char * String;
typedef char** StringArray;

String EMSCRIPTEN_KEEPALIVE handleClick() {
    return "Click is handled by app.";
}

int main(int argc, StringArray argv) {
    printf("Hello, world!\n");
    return EXIT_SUCCESS;
}
