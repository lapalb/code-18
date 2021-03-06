#### Write an Efficient Method to Check if a Number is Multiple of 3
   * n%3== 0 ? return true: return false
   * (Sum of digits)%3==0 :return true: return false
   * If (count of odd set bit - count of even set bit)%3 == 0 ? return true: return false'
- - -

#### Fast Multiplication
* Multiply by 7: x>>3 -x
* Multiply by 9: x>>3 +x
- - -

#### Lucky Number
> A number is lucky if it is not discarded if we are on a discard mission of every nth number where n ε(2,3,4...)
check if it discarded after each pass and next position is calculated via
`next_position -= next_position/counter;`
- - -

#### Multiplying two number without product or loop
Use recursion
mul(x,y)
if(y>0)
x+mul(x,y-1)
if(y==0)
return 0
else
mul(x,-y)
- - -

####  Fibonacci number
0,1,1,2,3
It can be calculate in o(n) time using DP, to solve it in o(n) time:
{1,1} to power n =f(n+1), f(n)
{1,0}             f(n),  f(n-1)

- - -

#### Trivia
> a^n can be calculated in o(logN) time
- - -

#### Generate 8 out of 1,2,3
```
if(n==0) return
else
for(int i=0;i<3;i++)
{
f(n)= 1+ f(n-1) 
f(n)= 2+ f(n-2)
f(n)= 3+f(n-3)
}
```
- - - 
#### Sophie Germain prime
> A prime number p is called a sophie prime number if 2p+1 is also a prime number
- - -

#### Day of week
```
int dow(int y, int m, int d)
{
   static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
   y -= m < 3;
   return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
```
- - - 

#### Magic square

n any magic square, the first number i.e. 1 is stored at position (n/2, n-1). Let this position be (i,j). The next number is stored at position (i-1, j+1) where we can consider each row & column as circular array i.e. they wrap around.
if position is already filled, decrement j by 2 and increment i by 1

int bit1 : 1;
int bit3 : 4;
int bit4 : 4;
defines bit field
- - -

#### Horner method of polynomial evaluation
Horner’s method can be used to evaluate polynomial in O(n) time. To understand the method, let us consider the example of 2x3 – 6x2 + 2x – 1. The polynomial can be evaluated as ((2x – 6)x + 2)x – 1. The idea is to initialize result as coefficient of xn which is 2 in this case, repeatedly multiply result with x and add next coefficient to result. Finally return result.
- - -

#### GCD Calculation
```
int gcd(int a, int b) 
{
    return b == 0 ? a : gcd(b, a % b);
}
```
- - -

#### Trailing zero in factorial of number
count 5 in its factorial
//Checking fibonacci
A number is Fibonacci if and only if one or both of (5*n2 + 4) or (5*n2 – 4) is a perfect square
- - -
#### sprintf()
int sprintf ( char * str, const char * format, ... );
Write formatted data to string


```
#include <stdio.h>

int main ()
{
  char buffer [50];
  int n, a=5, b=3;
  n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
  printf ("[%s] is a string %d chars long\n",buffer,n);
  return 0;
}
```
Output: \[5 plus 3 is 8] is a string 13 chars long
