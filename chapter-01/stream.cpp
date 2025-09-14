// A stream is a sequence of characters read from or written to an IO device.

// The standard library defines four IO objects.
// 1. To handle input, it defines std::cin, which is an instance of the class std::istream.
// 2. To handle output, it defines std::cout, which is an instance of the class std::ostream.
// 3. To handle error messages, it defines std::cerr, which is also an instance of the class std::ostream.
// 4. To handle logging messages, it defines std::clog, which is also an instance of the class std::ostream.


#include <iostream>

int main(){
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

    return 0;
}