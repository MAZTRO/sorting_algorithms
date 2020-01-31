# Sorting algorithms & Big O
## Project 0x1B in C.

In computer science, a sorting algorithm is an algorithm that puts elements of a list in a certain order. The most frequently used orders are numerical order and lexicographical order. Efficient sorting is important for optimizing the efficiency of other algorithms (such as search and merge algorithms) that require input data to be in sorted lists. Sorting is also often useful for canonicalizing data and for producing human-readable output. More formally, the output of any sorting algorithm must satisfy two conditions:

The output is in nondecreasing order (each element is no smaller than the previous element according to the desired total order);
The output is a permutation (a reordering, yet retaining all of the original elements) of the input.
Further, the input data is often stored in an array, which allows random access, rather than a list, which only allows sequential access; though many algorithms can be applied to either type of data after suitable modification.

Sorting algorithms are often referred to as a word followed by the word "sort," and grammatically are used in English as noun phrases, for example in the sentence, "it is inefficient to use insertion sort on large lists," the phrase insertion sort refers to the insertion sort sorting algorithm.

## Learning Objectives:
 - At least four different sorting algorithms
 - What is the Big O notation, and how to evaluate the time complexity of an algorithm
 - How to select the best sorting algorithm for a given input
 - What is a stable sorting algorithm.

## Requirements:
 - All your files should end with a new line
 - A README.md file, at the root of the folder of the project, is mandatory
 - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 - You are not allowed to use global variables
 - No more than 5 functions per file
 - Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
 - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
 - The prototypes of all your functions should be included in your header file called sort.h
 - Don’t forget to push your header file
 - All your header files should be include guarded
 - A list/array does not need to be sorted if its size is less than 2.

## Github:
There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

###### Please, note this format is used for Quiz and Task questions.

 - ```O(1)```
 - ```O(n)```
 - ```O(n!)```
 - n square -> ```O(n^2)```
 - log(n) -> ```O(log(n))```
 - n * log(n) -> ```O(nlog(n))```
 - …
Please use the “short” notation (don’t use constants). Example: O(nk) or O(wn) should be written O(n). If an answer is required within a file, all your answers files must have a newline at the end.

## Tests:
Here is a quick tip to help you test your sorting algorithms with big sets of random integers:
[Random.org](https://www.random.org/integer-sets/)

## TASKS:
 - 0. Bubble sort:
 Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm.
 - 1. Insertion sort:
 Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.
 - 2. Selection sort:
 Write a function that sorts an array of integers in ascending order using the Selection sort algorithm.
 - 3. Quick sort:
 Write a function that sorts an array of integers in ascending order using the Quick sort algorithm.

## Authors:
[Jonatan Mazo](https://twitter.com/JonatanRMC)
