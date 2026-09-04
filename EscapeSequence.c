#include <stdio.h>

int main()
{
    // \n - New Line
    printf("1. New Line (\\n)\n");
    printf("Hello\nWorld\n\n");

    // \t - Horizontal Tab
    printf("2. Tab (\\t)\n");
    printf("Name\tAge\n");
    printf("Atul\t25\n\n");

    // \\ - Backslash
    printf("3. Backslash (\\\\)\n");
    printf("C:\\Users\\Atul\n\n");

    // \" - Double Quote
    printf("4. Double Quote (\\\")\n");
    printf("\"Hello World\"\n\n");

    // \' - Single Quote
    printf("5. Single Quote (\\')\n");
    printf("\'A\'\n\n");

    // \b - Backspace
    printf("6. Backspace (\\b)\n");
    printf("ABC\bD\n\n");

    // \r - Carriage Return
    printf("7. Carriage Return (\\r)\n");
    printf("Hello\rHi\n\n");

    // \a - Alert/Bell
    printf("8. Alert (\\a)\n");
    printf("Beep Sound\a\n\n");

    // \f - Form Feed
    printf("9. Form Feed (\\f)\n");
    printf("Page1\fPage2\n\n");

    // \v - Vertical Tab
    printf("10. Vertical Tab (\\v)\n");
    printf("Hello\vWorld\n");

    return 0;
}