//program to print a statement without using printf statement
#include <unistd.h>

int main() {
    write(1, "welcome to ds\n", 14);
    return 0;
}
