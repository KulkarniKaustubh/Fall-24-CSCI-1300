**Contents**

<!-- toc -->

- [Week 3](#week-3)
  * [Operators](#operators)
    + [Relational Operators](#relational-operators)
    + [Logical Operators](#logical-operators)
    + [Operator Examples](#operator-examples)

<!-- tocstop -->

# Week 3

## Operators

### Relational Operators

- `>` - greater than
-  `<` - lesser than
-  `>=` - greater than or equal to
-  `<=` - lesser than or equal to
-  `==` - equal to (NOT the same as to `=`)
-  `!=` - not equal to (`!` - stands for **not**)

### Logical Operators

-  `&&` - and
-  `||` - or
-  `!` - not

> [!IMPORTANT]
> Refer to the workbook for the **truth tables** and **venn diagrams**

### Operator Examples

- `4 < 5` - gives us `true` - `true` is also represented as `1`
- `4 > 5` - gives us `false` - `false` is also represented as `0`

The `&&` operation will result in `true` ONLY if both conditions are `true`
- `(4 < 5) && (4 > 5)` - `false`
- `(4 < 5) && (1 < 2)` - `true`

The `||` operation will result in `true` if EITHER condition is `true`
- `(4 < 5) || (4 > 5)` - `true`
- `(4 < 5) || (1 < 2)` - `true`
- `(4 > 5) || (1 > 2)` - `false`

The `!` operation just negates whatever the condition is
- `!(4 < 5)` - `false`
- `!(4 > 5)` - `true`

## If-Else

### If and Nested If

One if condition:
```cpp
if (4 < 5) {
    cout << "4 is lesser than 5" << endl;
}
```

This would print `4 is lesser than 5`

Let's see if we want to test 2 conditions at once:
```cpp
if ((4 < 5) && (1 < 2)) {
    cout << "4 is lesser than 5 AND 1 is lesser than 2" << endl;
}
```

This would print `4 is lesser than 5 AND 1 is lesser than 2`

This can be written as 2 if conditions - also called a "nested if":

```cpp
if (4 < 5) {
    cout << "4 is lesser than 5" << endl;
    if (1 < 2) {
        cout << "1 is lesser than 2" << endl;
    }
}
```

This would print
```text
4 is lesser than 5
1 is lesser than 2
```

### Else

One else condition:
```cpp
if (4 > 5) {
    cout << "4 is greater than 5" << endl;
} else {
    cout << "4 is lesser than 5" << endl;
}
```

This would print `4 is lesser than 5`

Else-if:
```cpp
if (3 > 5) {
    cout << "3 is greater than 5" << endl;
} else if (4 > 5) {
    cout << "4 is greater than 5" << endl;
} else {
    cout << "3 and 4 are lesser than 5" << endl;
}
```

This would print `3 and 4 are lesser than 5`

Another example:
```cpp
if (4 < 5) {
    cout << "4 is lesser than 5" << endl;
} else if (3 < 5) {
    cout << "3 is lesser than 5" << endl;
} else {
    cout << "3 and 4 are greater than 5" << endl;
}
```

This would print `4 is lesser than 5`

Why? The first `if` condition gets satisfied, so any other conditions with `else if` or `else` are not executed.

### What happens if you use `=` instead of `==`?

```cpp
int a = 4;

if (a < 5) {
    cout << a << " is lesser than 5" << endl;
}

if (a == 4) {
    cout << a << " is equal to 4" << endl;
}

if (a = 5) {
    cout << a << " is equal to 5" << endl;
}

if (a == 5) {
    cout << a << " is equal to 5" << endl;
}
```

This would print
```text
4 is lesser than 5
4 is equal to 4
5 is equal to 5
5 is equal to 5
```

This is because `=` is an assignment operation and will always result in a `true`

You can play around with this code [here](./equal_to.cpp)
