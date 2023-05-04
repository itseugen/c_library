<h1 align="center">
	<p>
		c_library
	</p>
</h1>
<h2 align="center">
	<p>
			My library, composed from libft, ft_printf, get_next_line and other useful C functions I coded
	</p>
</h2>
<p align="center">
Coded in
	<a href="https://skillicons.dev">
		<img src="https://skillicons.dev/icons?i=c" />
	</a>
</p>

---
## Includes following functions:
- All functions in my [libft](https://github.com/itseugen/libft "Link to my libft repository").
- My [get_next_line](https://github.com/itseugen/get_next_line "Link to my get_next_line repository") function (Note that this version can handle more than one file descriptor at a time).
- My [own version of printf](https://github.com/itseugen/ft_printf "Link to my ft_printf repository").
- ft_isstr: A function that applies a function that takes an integer (for example isdigit) to an entire string and returns 1 if the function returns 1 for the entire string.
- Terminal colours: Functions to change the colour your programs output in the terminal.
---
## Installation and Usage
1. Clone the repository:
```shell
git clone https://github.com/itseugen/c_library libft
```
2. Enter the directory and build the library:
```shell
cd libft
make
```
Optional: Clean object files:
```shell
make clean
```
3. Include the headerfile in your function:
```C
#include "filepath/libft.h"
```
Example:
If you clone the libft inside the repository you are working on it would look as follows:
```C
#include "libft/libft.h"
```
4. To compile correctly just add the "libft.a" in your compiler call:
```shell
gcc myfile.c libft.a
```
---
## ❕ Note
I'm planning on updating this repository with new functions in the future. I might also update some existing functions to fix bugs, add features or make better error handling, although unlikely a new version of this library might not work with code built for an older version.

---

<sub><sup>This project is part of my studies at 42 Heilbronn</sup></sub>