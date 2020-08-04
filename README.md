# Functional-Progamming-Quiz-Game

Concept: You will use functions in this program. Below I will outline the functions that you will need. In the future, I
won't do this as it will be assumed that you will come to fully appreciate the utility of functions and have a good
idea of how your programs should be broken up into separate functions. In the future, this will be part of the
grading of your programs, so it will behoove you to "think" functions.
Specifications: Your program will be a "quiz-er" for the user. That is, your program will present the user with a quiz
of arithmetic problems. Each "play" of the quiz will be 10 questions. The user will initially be presented with a short
menu of options on difficulty level. It could look something like this:
DIFFICULTY LEVEL
1. Easy
2. Moderate
3. Advanced
The difficulty levels determine the number of digits in the operands to be added or subtracted. Easy means
only single digit numbers; moderate means double digit numbers; and advanced means 4-digit numbers. After
the user picks the level they desire, your program presents problems that look like this:
45 + 9 = _
34 - 88 = _
etc.
But for each problem presented, the user is given a chance to answer. If the answer is correct, another problem
is presented. If the answer is wrong, the user is to be given one more chance at that problem. Once your
program has moved on to the next problem, the correctness/incorrectness of the preceeding problem is tallied.
The number of correct and incorrect answer is to be presented at the termination of the quiz along with
percentage correct. So, how are the problems produced? Well, you will use the random number generator
provided by the compiler to determine:
1. the values to be added or subtracted
2. whether the problem is addition or subtraction
Remember: use the function srand() in your main to seed the generator and rand() to retrieve random numbers
after that. Notes: (1) rand() returns a long int; and (2) pass time(NULL) as an argument to srand() and
#include<ctime> to be able to use the system's time clock to seed the generator.
  
 #Solution to this program can be found in the source file

