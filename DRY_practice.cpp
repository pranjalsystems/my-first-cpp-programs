// # ⚔️ Today's Boss

// Transform this:

// ```cpp
// case 1:
//     ...
//     getline(...)
//     ...
//     break;

// case 2:
//     ...
//     getline(...)
//     ...
//     break;

// case 3:
//     ...
//     getline(...)
// ```

// into something much cleaner.

// ---

// # 📚 Concepts

// Today you'll master:

// * ✅ Passing character arrays to functions
// * ✅ `char arr[]` vs `char *arr`
// * ✅ `void` functions
// * ✅ Breaking one big program into many small functions
// * ✅ Reusing code
// * ✅ Function prototypes
// * ✅ Cleaner program design

// ---

// # 📌 Quest 18.1 — Input Function

// You currently write this everywhere:

// ```cpp
// std::cout<<"Enter : ";
// std::cin.getline(str,100);
// ```

// Make ONE function.

// Prototype:

// ```cpp
// void getString(char str[]);
// ```

// Usage:

// ```cpp
// getString(str);
// ```

// ---

// # 📌 Quest 18.2 — Uppercase Function

// Instead of

// ```cpp
// case 1:
// {
//     ...
// }
// ```

// make

// ```cpp
// void toUpper(char str[]);
// ```

// Then

// ```cpp
// getString(str);
// toUpper(str);
// std::cout<<str;
// ```

// ---

// # 📌 Quest 18.3 — Lowercase Function

// Exactly the same.

// ---

// # 📌 Quest 18.4 — Toggle Case Function

// Same idea.

// ---

// # 📌 Quest 18.5 — Count Characters Function

// Instead of printing inside `main()`

// Create

// ```cpp
// int countCharacters(char str[]);
// ```

// Returns

// ```
// number of characters
// ```

// Notice...

// This is your **first useful function that returns a value.**

// ---

// # 📌 Quest 18.6 — Reverse Function

// Create

// ```cpp
// void reverse(char str[]);
// ```

// For now it's okay if it only prints.

// Later we'll make it actually reverse the array.

// ---

// # 📌 Quest 18.7 — Compare Function

// Prototype

// ```cpp
// bool compare(char a[], char b[]);
// ```

// Usage

// ```cpp
// if(compare(str1,str2))
// ```

// instead of

// ```cpp
// bool Equal=true;
// ...
// ```

// ---



// # 🏆 Goal for Day 18

// By the end of today, your **Text Utility** shouldn't feel like one giant `main()` anymore.

// It should feel like this:

// ```text
// main()
// │
// ├── getString()
// ├── toUpper()
// ├── toLower()
// ├── toggleCase()
// ├── countCharacters()
// ├── removeSpaces()
// ├── reverse()
// └── compare()
// ```