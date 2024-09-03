**Contents**

<!-- toc -->

- [Week 1](#week-1)
  * [Data Types](#data-types)
  * [Variables](#variables)
  * [Input](#input)
    + [How to get input from the user of your program?](#how-to-get-input-from-the-user-of-your-program)

<!-- tocstop -->

# Week 1

## Data Types

`int` - a number / an integer
`float` and `double` - a decimal number
`char` - a character / alphabet
`string` - a string of characters a.k.a a word
`bool` - true or false

## Variables

Rules:
- Has to start with an alphabet or an underscore `_`
- Can contain numbers in between or at the end
- They have to be unique
- They cannot have special characters except underscore `_`

Examples:
- `int`

```cpp
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << "a is: " << a << endl;

    return 0;
}
```

- `float` and `double`

```cpp
#include <iostream>

using namespace std;

int main()
{
    float f = 10.01;
    double d = 10.879845;

    cout << "f is: " << f << endl;
    cout << "d is: " << d << endl;

    return 0;
}
```

- `char`

```cpp
#include <iostream>

using namespace std;

int main()
{
    // a char will ALWAYS have single quotes
    // a char will ALWAYS have one alphabet
    char ch = 'A';
    cout << "ch is: " << ch << endl;

    return 0;
}
```

- `string`

```cpp
#include <iostream>

using namespace std;

int main()
{
    // a string will ALWAYS have double quotes
    // a char can have one/more than one alphabet(s)
    string str1 = "A";
    string str2 = "CSCI 1300";

    cout << "str1 is: " << str1 << endl;
    cout << "str2 is: " << str2 << endl;

    return 0;
}
```

- `bool`

```cpp
#include <iostream>

using namespace std;

int main()
{
    bool b = true;
    cout << "b is: " << b << endl;

    return 0;
}
```

## Input

`cout` is for standard output
`cin` is for standard input

### How to get input from the user of your program?

For example, you want to get numbers / integers from the user. Here is how you could do it. Let's take in the user's date of birth:

```cpp
#include <iostream>

using namespace std;

int main()
{
    int month, day, year;

    cout << "Enter the number for the month you were born in: " << endl;
    cin >> month;

    cout << "Enter the number for the day you were born in: " << endl;
    cin >> day;

    cout << "Enter the number for the year you were born in: " << endl;
    cin >> year;

    cout << "You were born on " << month << "/" << day << "/" << year << endl;

    return 0;
}
```

You can find this code [here](./date_of_birth.cpp) as well.
