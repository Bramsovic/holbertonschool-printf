
# 📄 `_printf` - Custom Implementation of the printf Function

Welcome to the **`_printf`** project! This repository contains a custom implementation of the C standard library function `printf`. The project was developed as part of the **Holberton School** curriculum to deepen our understanding of formatted output and advanced C concepts.

---

## 📚 Resources

Before diving into the code, you may find the following resources helpful:

- [Secrets of printf](https://intranet.hbtn.io/concepts/...)  
- [Group Projects Concept Page](https://intranet.hbtn.io/concepts/...)  
- [Flowcharts Concept Page](https://intranet.hbtn.io/concepts/...)  
- `man 3 printf`

---

## ⚙️ Project Overview

The **`_printf`** function mimics the functionality of the standard `printf` function, producing output according to a specified format. It handles a variety of conversion specifiers and writes formatted output to the standard output stream (`stdout`).

### Key Features:
- **Custom Formatting:** Handles basic format specifiers such as `%c`, `%s`, `%d`, and `%i`.
- **Simple Design:** Implements core functionality without unnecessary complexity.
- **Custom Error Handling:** Ensures robust and predictable behavior.

---

## 🛠️ Requirements

### General
- Code is written in **C** and adheres to the **Betty coding style**.
- Compilation is done on **Ubuntu 20.04 LTS** using `gcc` with the following flags:  
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- The project must include:
  - A `README.md` file (this file).  
  - A custom header file `main.h` containing all function prototypes.  
  - Include guards in all header files.  

### Constraints
- No global variables allowed.  
- Maximum **5 functions per file**.  
- Use only the following standard library functions and macros:
  - `write`  
  - `malloc`  
  - `free`  
  - `va_start`, `va_end`, `va_copy`, and `va_arg`.  
- **Do not use** the `_putchar` function.  

---

## 🧩 Usage

To use the **`_printf`** function, follow these steps:

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Bramsovic/holbertonschool-printf.git
   cd holbertonschool-printf
   ```

2. **Compile the code:**
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf
   ```

3. **Use `_printf` in your code:**
   Include `main.h` in your program and call `_printf` as you would with `printf`.

---

## 🔍 Examples

Here are some examples demonstrating the usage of **`_printf`**:

```c
#include "main.h"

int main(void)
{
    int len;

    len = _printf("Hello, %s!\n", "Holberton");
    _printf("Length: [%d]\n", len);

    _printf("Character: [%c]\n", 'H');
    _printf("Percent Sign: [%%]\n");

    _printf("Integer: [%d]\n", 42);
    _printf("Negative Integer: [%i]\n", -42);

    return (0);
}
```

**Output:**
```text
Hello, Holberton!
Length: [17]
Character: [H]
Percent Sign: [%]
Integer: [42]
Negative Integer: [-42]
```

---

## 📂 File Structure

- **`main.h`**: Header file containing all function prototypes and necessary includes.  
- **`_printf.c`**: The core implementation of the `_printf` function.  
- **`man_3_printf`**: Custom man page for the `_printf` function.  

---

## 📝 Tasks

### 0. Basic Specifiers
- Implement support for the following conversion specifiers:
  - `%c`  
  - `%s`  
  - `%%`  

### 1. Integers
- Add support for the following conversion specifiers:
  - `%d`  
  - `%i`  

### 2. Man Page
- Write a custom `man` page for the `_printf` function.  

---

## 🛠️ Development and Testing

- We encourage thorough testing of edge cases and various input formats.  
- Use the provided `main.c` files or create your own test files to verify the functionality.  

**Example Compilation Command:**
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

**Recommended Testing Approach:**
1. Create a `tests/` folder to store all test cases.  
2. Write test files covering different specifiers, edge cases, and invalid inputs.  

---

## 📋 Notes and Recommendations

- Follow the **Betty coding style** strictly to ensure code quality.  
- Avoid pushing `main.c` files to the repository root directory. Use a separate `tests/` folder instead.  
- Use the `-Wno-format` flag when comparing `_printf` with the standard `printf`.  


---

Thank you for exploring the `_printf` project! Feel free to contribute, raise issues, or suggest improvements. 😊
``` 

