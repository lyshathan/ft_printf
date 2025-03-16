# ft_printf Project 🎨

The **ft_printf** project requires you to implement your own version of the `printf` function, supporting a limited set of format specifiers. In this version, you’ll handle the following specifiers:
- `%s` for strings
- `%i` for integers
- `%d` for signed integers
- `%x` for hexadecimal (lowercase)
- `%X` for hexadecimal (uppercase)
- `%p` for pointer addresses

---

## 🛠️ How to Get Started

1. **Clone the repository**:
   ```bash
   git clone https://github.com/lyshathan/ft_printf.git
   cd ft_printf
   ```

2. **Compile the project**:
   Using `Makefile` to compile your code:
   ```bash
   make
   ```

3. **Run the project**:
   After compiling, you can test your `ft_printf` function with a sample program:
   ```bash
   ./ft_printf "Hello, %s! Your number is %d" "World" 42
   ```

---

## 📝 Project Overview

- **ft_printf**: Implement a function that mimics the standard `printf` with support for a limited set of format specifiers.
- **Formatting**: The function should correctly handle types like strings, integers, and pointers, and convert them into the correct format (e.g., hexadecimal numbers).
- **Memory Management**: Efficiently manage memory without using any standard library functions (except for `write`).

---

## ⚡ Features

- Supports the following specifiers:
  - `%s`: Print a string
  - `%i`: Print an integer
  - `%d`: Print a signed integer
  - `%x`: Print a hexadecimal (lowercase)
  - `%X`: Print a hexadecimal (uppercase)
  - `%p`: Print a pointer address

