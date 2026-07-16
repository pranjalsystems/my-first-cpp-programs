// This is something many beginners don't notice:
// char word[] = "Hello";

// creates a copy of the characters in your array.

// But
// const char* word = "Hello";
// (or historically char*, though it's incorrect in modern C++)

// points to a string literal stored in read-only memory. Trying to modify that is undefined behavior and often crashes.
// We'll revisit this once we learn pointers. For now, just remember:

// Declaration	Can modify?
// char word[] = "Hello";	✅ Yes
// const char* word = "Hello";	❌ No

#include <iostream>

int main() {
    char word[] = "Hello";

    word[0] = 'Y';
    word[4] = '!';

    std::cout << word;
}