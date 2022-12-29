# Environment Setup

## gVim
1. [Download here](https://www.vim.org/download.php) 
2. [(Refer to this config)](https://github.com/ajmdz/compe/blob/3ef7332e846e8910fd53bb4abd8d5e2f27bbb47f/.vimrc) Modify the `.vimrc`: `:e! ~/.vimrc`
3. Change the default working directory
4. Enter `:so %` to refresh without restarting vim

## C++
1. [Download](https://sourceforge.net/projects/mingw/) compiler for C++. 
2. Select `mingw32-base` and `mingw32-gcc-g++` for installation. Apply changes
3. Add `C:\MinGW\bin` to `PATH` 
4. After installing gVim, create a template `main.cpp` in the project directory:
```cpp
/* main.cpp */
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
```