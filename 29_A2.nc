/* Sample nanoC code to test all lexical tokens */

// Single-line comment test

/* Multi-line comment test
   This should cover multi-line comments
*/

// Keywords
int main() {
    char characterVariable;
    int integerVariable;
    void functionTest();
    for(int i = 0; i < 10; i++) {
        if (i == 5) {
            return i;
        } else {
            integerVariable = i;
        }
    }
}

// Identifiers
int identifierTest1;
char identifierTest2;

// Constants
int x = 123;
int y = -123;
int z = 0;
char a = 'a';
char escapeChar1 = '\n';
char escapeChar2 = '\\';
char escapeChar3 = '\'';

// String Literals
char string1[] = "Hello, World!";
char string2[] = "Escape sequences: \n \t \v";
char string3[] = "";

// Punctuators
int array[10];
void testFunc(int arg1, char arg2) {
    int result;
    result = arg1 + arg2;
    result *= 2;
    result /= 3;
    result %= 4;
    result--;
    result++;
    result &&= 1;
    result ||= 0;
    result == 1;
    result != 0;
    result <= 5;
    result >= 5;
}