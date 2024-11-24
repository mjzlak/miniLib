# 🛠️ Minilib 🛠️

Welcome to the **Minilib**! 🎉  
This is a collection of handy functions written in C, designed to make your life easier when working with strings, memory manipulation, linked lists, and file output. 🚀

## 📚 Contents

- [String Functions](#string-functions)
- [Memory Functions](#memory-functions)
- [Malloc Functions](#malloc-functions)
- [Linked List Functions](#linked-list-functions)
- [Print to File Functions](#print-to-file-functions)

---

## String Functions ✨

These are functions that help you handle strings like a pro. 💪

- `ft_isalpha()` — Checks if a character is alphabetic. 🔤  
- `ft_isdigit()` — Checks if a character is a digit. 1️⃣  
- `ft_isalnum()` — Checks if a character is alphanumeric (a letter or a digit). 🔠🔢  
- `ft_isascii()` — Checks if a character is an ASCII character. 🖥️  
- `ft_isprint()` — Checks if a character is printable. 💻  
- `ft_strlen()` — Returns the length of a string. 📏  
- `ft_strchr()` — Locates the first occurrence of a character in a string. 🔍  
- `ft_strrchr()` — Locates the last occurrence of a character in a string. 🔎  
- `ft_strncmp()` — Compares two strings up to a certain length. 📐  
- `ft_memchr()` — Searches for a byte in a block of memory. 🔍  
- `ft_memcmp()` — Compares two blocks of memory. ⚖️  
- `ft_strnstr()` — Finds the first occurrence of a substring within a string. 🔗  
- `ft_atoi()` — Converts a string to an integer. 🔢
- `ft_itoa()` — Converts an integer to a string. 🔢➡️🔤  

---

## Memory Functions 🧠

These functions are here to manage memory like a boss! 🏆

- `ft_memset()` — Fills memory with a specific value. 🔲  
- `ft_bzero()` — Sets memory to zero. 🛑  
- `ft_memcpy()` — Copies memory from one location to another. 🔄  
- `ft_memmove()` — Safely moves memory when there’s overlap. 🔄🔁  
- `ft_memchr()` — Searches for a byte in a block of memory. 🔍  
- `ft_memcmp()` — Compares two blocks of memory. ⚖️  

---

## Malloc Functions 💡

Need to dynamically allocate memory? These will do the trick. 🧰

- `ft_calloc()` — Allocates memory for an array and initializes it to zero. 🧼  
- `ft_strdup()` — Duplicates a string (allocates new memory for it). 💎  
- `ft_substr()` — Extracts a substring from a given string. ✂️  
- `ft_strjoin()` — Joins two strings into one. 🔗  
- `ft_strtrim()` — Trims leading and trailing whitespace from a string. ✂️🧹  
- `ft_split()` — Splits a string into an array of substrings. 🪄  
- `ft_strmapi()` — Applies a function to each character of a string, and returns a new string. 🔄🔤  
- `ft_striteri()` — Applies a function to each character of a string, modifying the string in place. 🔄🔄   

---

## Linked List Functions 🔗

Handling linked lists made easy! 🚀

- `ft_lstnew()` — Creates a new list element. 🌱  
- `ft_lstadd_front()` — Adds an element to the front of the list. 🏃‍♂️  
- `ft_lstsize()` — Returns the size of the list. 📏  
- `ft_lstlast()` — Returns the last element in the list. 🚶‍♂️  
- `ft_lstadd_back()` — Adds an element to the back of the list. 🚗  
- `ft_lstdelone()` — Deletes a single element from the list. ❌  
- `ft_lstclear()` — Clears the entire list. 🧹  
- `ft_lstiter()` — Iterates over the list and applies a function to each element. 🔄  
- `ft_lstmap()` — Creates a new list by applying a function to each element. 🔄🔄  

---

## Print to File Functions 📝

These functions help you print to a file descriptor! Perfect for logging or file-based output. 📂

- `ft_putchar_fd(char c, int fd)` — Outputs a character to a specified file descriptor. 🖋️  
- `ft_putstr_fd(char *s, int fd)` — Outputs a string to a specified file descriptor. 📝  
- `ft_putendl_fd(char *s, int fd)` — Outputs a string followed by a newline to a specified file descriptor. ✨  
- `ft_putnbr_fd(int n, int fd)` — Outputs an integer to a specified file descriptor. 🔢🖤  

---

## 🚀 How to Use

Clone the repository:

```bash
git clone https://github.com/mjzlak/minilib.git
```

To use any of these functions in your project, simply include the `minilib.h` header file, and link to the compiled `.a` library. 🎯

---

Enjoy using **Minilib** in your C projects as i'm doing ! 🤖
