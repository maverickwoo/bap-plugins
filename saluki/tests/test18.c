//!  00000...: p := malloc()
//!  00000...: when c jmp _
//!  Coverage: .* 100%

#include <stdlib.h>

int init(void *p) {
    p = NULL;
}

int main(int argc, const char* argv[]) {
    char *p;
    init(p);
    p = (char *) malloc(42);
    if (argc > 0) {
            exit(1);
    } else {
        if (!p) {
            exit(2);
        }
    }

    p[0] = '\0';
}
