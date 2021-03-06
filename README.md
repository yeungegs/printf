<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# _printf

### Author: Bobby Yang && Elaine Yeung (Batch 2)

## Synopsis
This is a custom implementation of `printf` from the standard library `<stdio.h>`. This project is an application of all C programming knowledge that students have acquired since starting at Holberton School on January 30, 2017.

![image](https://cloud.githubusercontent.com/assets/23224088/24168852/ea80a146-0e38-11e7-881c-97735fbb91c7.jpg)

## Compilation and use

```
$ git clone [insert repository link here]
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```
Compile everything within the directory and use _printf in your main function.

## Project Breakdown
| Task # | Type | Short description |
| ---: | --- | --- |
|0 | **Mandatory**     | Write a function that produces output according to a format. |
|1 | **Mandatory**     | Handle the following conversion specifiers: `d` `i` |
|2 | **Mandatory** | [Create a man page for your function.](./man_3_printf)
|3 | *Advanced* | Handle the following custom conversion specifiers: <br>`b` the unsigned int argument is converted to binary |
|4 | *Advanced* | Handle the following conversion specifiers: <br> `u`, `o`, `x`, `X`|
|5 | *Advanced* | Use a local buffer of 1024 chars in order to call write as little as possible.|
|6 | *Advanced* | Handle the following custom conversion specifier: <br>`S` |
|7 | *Advanced* | Handle the following conversion specifier: <br>`p`|
|8 | *Advanced* |Handle the following flag characters for non-custom conversion specifiers:<br>`+`, ` ` (space), `#` |
|9 | *Advanced* |Handle the following length modifiers for non-custom conversion specifiers:<br>`l`, `h`<br><br>Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X` |
|10 | *Advanced* |Handle the field width for non-custom conversion specifiers. |
|11 | *Advanced* | Handle the precision for non-custom conversion specifiers. |
|12 | *Advanced* | Handle the `0` flag character for non-custom conversion specifiers.|
|13 | *Advanced* | Handle the `-` flag character for non-custom conversion specifiers.|
|14 | *Advanced* |Handle the following custom conversion specifier:<br>`r` : prints the reversed string |
|15 | *Advanced* |Handle the following custom conversion specifier:<br>`R`: prints the rot13'ed string |
|16 | *Advanced* |All the above options work well together. |

## History
The Game of Thrones references throughout this project can be traced back to this message on slack:
![image](https://cloud.githubusercontent.com/assets/23224088/24180640/43ada0a4-0e73-11e7-8ee3-95a78aa7da2f.png)

When Elaine asked Bobby the reason why she was the "mother of dragons" he stated that this project was like Game of Thrones in that it required students to form alliances in order to conquer the task at hand. 

## To Do
### Handle the following conversion specifiers:
- [x] c - `char`
- [x] s - `string`
- [ ] % - `percent`
- [x] d - `decimal`
- [x] i - `integer`
- [x] b - `binary`

### Base Printf
- [ ] Write output to stdout, the standard output stream
- [x] Returns: the number of characters printed (excluding the null byte used to end output to strings)
- [ ] Get [@Julien Barbier](https://github.com/jbarbier) to say I did a good job ;)

![image](https://cloud.githubusercontent.com/assets/23224088/24182203/55307342-0e7d-11e7-85cc-22c9189f8d13.jpg)