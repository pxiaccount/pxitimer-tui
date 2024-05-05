# pxitimer

## Screenshot
![2024-04-17_09-08](https://github.com/pxiaccount/pxitimer/assets/122612391/c9ad5a2e-2b72-49fd-8a94-256413c15e6e)<br>
![2024-04-17_09-08_1](https://github.com/pxiaccount/pxitimer/assets/122612391/a6247e2d-e0c5-4163-b1fa-6977f3b4ac58)<br>
![2024-04-17_09-08_2](https://github.com/pxiaccount/pxitimer/assets/122612391/e07168eb-d143-48a0-9528-cde413eacefb)<br>

( Font in screenshots isn't include with a program )<br>
( Font in screenshots is Inconsolata. You can download Inconsolata font from https://fonts.google.com/specimen/Inconsolata )<br>

## About
pxitimer is a timer program in terminal interface<br>
** This software may contains bugs. But I'll try to fix it as soon as possible<br>
** Ctrl + C to exit program
** If you find a bug that doesn't count time or count time fail try run command again.

## Installation

##### Dependencies
- GCC compiler
- Bash
- git (Optionally)

Links for dependencies information: <br>
GCC Compiler: https://gcc.gnu.org/<br>
Bash: https://www.gnu.org/software/bash/<br>
Git: https://git-scm.com/<br>

##### Installation

You can install by using git or just download the project and install it
<br>
** This software only works on Linux! (From tested result)

##### 1. Install by download from project <br>

1. Download the project
2. Extract files
3. Change directory to your project
4. <code>chmod +x main.sh</code>
5. <code>./main.sh</code>

##### 2. Install using git

```
git clone https://github.com/pxiaccount/pxitimer.git
cd pxitimer
chmod +x main.sh
./main.sh
```

##### Configuration / Customization
You can custom format of time (hours/minutes/seconds) in ./custom/time.txt just simply insert format (with s) <br>
example:
time.txt
```
hours
```
yes just simply insert like that. <br>
code for customization
1. hours
2. minutes
3. seconds
<br>
or if you don't insert anything program will automatically give you a minutes format.
