/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   int idade;
   
   cout << "Digite sua idade: " << endl;
   cin >> idade;
   
   bool maiorEdirige;
   maiorEdirige = (idade >= 18) && (idade >= 16);
   
   cout << "Pode votar e pode dirigir: " << maiorEdirige;
   
   return 0;
   
}