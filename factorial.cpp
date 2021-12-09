/*Напишите функцию, которая
называется Factorial
возвращает int
принимает int и возвращает факториал своего аргумента. 
Гарантируется, что аргумент функции по модулю не превышает 10.
 Для отрицательных аргументов функция должна возвращать 1.
 */


#include<iostream>
using namespace std;


int Factorial(int x) {
    int factorial = 1;
    if (x < 0) {
        return 1;
    }
     while (x > 1) {
         factorial *= x;
         x -=1;
         
     }
    return factorial;
}

/*
int main (){
    int x;
    cin>>x;
    cout<< Factorial(x);
    return 0;
}
*/