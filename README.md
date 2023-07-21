# 0x11. C - printf

## Tasks

| Task | Description |
|------|-------------|
| 0    | I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life (mandatory) |
| 1    | Education is when you read the fine print. Experience is what you get if you don't (mandatory) |

---

## Task 0: I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life (mandatory)

Write a function that produces output according to a format.

**Prototype:** `int _printf(const char *format, ...);`
**Returns:** the number of characters printed (excluding the null byte used to end output to strings)
**Write output to stdout**, the standard output stream.
`format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
- `%c`: for printing characters
- `%s`: for printing strings
- `%%`: for printing the '%' character

You don't have to reproduce the buffer handling of the C library `printf` function.
You don't have to handle the flag characters, field width, precision, or the length modifiers.

---

## Task 1: Education is when you read the fine print. Experience is what you get if you don't (mandatory)

Handle the following conversion specifiers:
- `%d`: for printing integers
- `%i`: for printing integers

You don't have to handle the flag characters, field width, precision, or the length modifiers.

---

