GenPass Repository

This repostory conatains strong and randomized password generators wriiten in different programming language.

First of all, clone this repository with:
git clone https://github.com/1mriz/GenPass or, Download the repository as a zip file, then extract it. 

genpass.py:
This password generator is wriiten in python. To run this, install python in your system and enter the following commmand:
```Python
python genpass.py
```
genpass.c:
This password generator is written in c, but does the same work as the python version. To run it:
1st step:
Compile the program, with gcc or other compilers. Run:
```bash
gcc genpass.c -o genpass
```
This will result in a executable. Let's say it outputs a file called "a.out". To run it:
```bash
./genpass
```
To access it from any location of the terminal emulator: 
```bash
cp genpass ~/.local/bin/genpass
