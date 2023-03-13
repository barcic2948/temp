//Task 1. Change the following program so that it uses modules instead of #include
#include "headers.h"

int main()
{
    double a, b;
    int c;
    a = 4.4;
    b = 3.2;
    c = 234;
    add(a, b);
    substract(a, b);
    multiply(a, b);
    even(c);
//Task 2. Create a new module. In the module write a private function (inaccessible from the main file) 
//that prints "Hello, world!" and a public function that uses this private function.
//Try to use both functions in the main file. Comment the line(s) which will make an error occur.

//Task 3. a) Create a module named "dogs".
//b) Create two partitions of this module, one describing behavior of dogs (e.g. eating, drinking, sleeping)
//   and the other describing sounds made by dogs (e.g. barking, growling, howling).
//c) In the partitions write a simple functions for the aforementioned behaviors and sounds (e.g. export void eat(){})
//d) In the module dogs export only one partition. In the main file try using functions from both partitions. 
//   Try importing the other partition in the main file.
//e) Fix the problem and comment the problematic line(s) as well as the line(s) that fixed it.

//Task 4. Create a module sub_dogs similar to the one in task 3. but instead of partitions of a module use submodules. 
//Name the files in the following way: sub_dogs.ixx, sub_behaviors.ixx, sub_sounds.ixx.
//For point b) and c) you can just copy what you have written in the previous task and make necessary adjustments
//(remember to also change the names of the functions!).
//See how using submodules changes the outcome of point d).

}