#include <iostream>
using namespace std;
main() {
	char symbol = 'C';
    printf( "precedes the character C in the code table: %c the follows the chracter C: %c", static_cast<char>(symbol - 1) , static_cast<char>(symbol + 1));
    return 0;
}
