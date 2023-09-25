#SORTING ALGORITHM
#include "sort.h"
#ifndef SORT_H

#SORTING ALGORITHM
#include "sort.h"
#include "sort.h"
O(n)
Last login: Mon Sep 25 10:49:48 on ttys010
➜  sofri-user-service git:(quadri-fixes) redis -v
zsh: command not found: redis
➜  sofri-user-service git:(quadri-fixes) redis-server -v
Redis server v=7.2.1 sha=00000000:0 malloc=libc bits=64 build=7b8617dd94058f85
➜  sofri-user-service git:(quadri-fixes) cd ..
➜  carbontech cd ..
➜  Documents cd workspace
➜  workspace cd alx
➜  alx ls
Betty                         alx-pre_course                printf
alx-higher_level_programming  alx-system_engineering-devops simple_shell
alx-low_level_programming     monty                         zero_day
➜  alx mkdir sorting_algorithms
➜  alx cd sorting_algorithms
➜  sorting_algorithms cd ..
➜  alx rm -rf sorting_algorithms
➜  alx git clone https://github.com/olashina201/sorting_algorithms.git
Cloning into 'sorting_algorithms'...
warning: You appear to have cloned an empty repository.
➜  alx cd sorting_algorithms
➜  sorting_algorithms git:(main) vi README.md
➜  sorting_algorithms git:(main) ✗ vi 0-bubble_sort.c
➜  sorting_algorithms git:(main) ✗ ls
0-bubble_sort.c README.md
➜  sorting_algorithms git:(main) ✗ vi sort.h
➜  sorting_algorithms git:(main) ✗ ls
0-bubble_sort.c README.md       sort.h
➜  sorting_algorithms git:(main) ✗ vi sort.h
➜  sorting_algorithms git:(main) ✗ rm -rf sort.h
➜  sorting_algorithms git:(main) ✗ vi sort.h
➜  sorting_algorithms git:(main) ✗ vi 1-insertion_sort_list.c
➜  sorting_algorithms git:(main) ✗ ls
0-bubble_sort.c         1-insertion_sort_list.c README.md               sort.h
➜  sorting_algorithms git:(main) ✗ vi 2-selection_sort.c
#include "sort.h"
➜  sorting_algorithms git:(main) ✗ vi 0-O
➜  sorting_algorithms git:(main) ✗ git add .
➜  sorting_algorithms git:(main) ✗ git commit -m "update"
[main (root-commit) f98b5ba] update
 6 files changed, 195 insertions(+)
 create mode 100644 0-O
 create mode 100644 0-bubble_sort.c
 create mode 100644 1-insertion_sort_list.c
 create mode 100644 2-selection_sort.c
 create mode 100644 README.md
 create mode 100644 sort.h
➜  sorting_algorithms git:(main) gp
Enumerating objects: 8, done.
#include "sort.h"

/**
 * swap_ints - Swap two integers.
 * @a: The first integer.
 * @b: The second integer.
 */
void swap_ints(int *a, int *b)
{
        int tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: Array of integers.
 * @size: Size of array.
 *
 * Description: This Prints an array after each swap is done.
 */
void bubble_sort(int *array, size_t size)
{
        size_t i, len = size;
        bool bubbly = false;

        if (array == NULL || size < 2)
                return;

        while (bubbly == false)
        {
                bubbly = true;
                for (i = 0; i < len - 1; i++)
                {
                        if (array[i] > array[i + 1])
                        {
                                swap_ints(array + i, array + i + 1);
                                print_array(array, size);
                                bubbly = false;
                        }
                }
                len--;
        }
}

~
~
~
-- INSERT --
