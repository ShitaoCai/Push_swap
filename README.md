*This project has been created as part of the 42 curriculum by \<shicai> and \<mde-rove>*

# Description
`push_swap` is a command-line program. You give it numbers, and it prints the stack instructions that would sort them into ascending order. For example, a valid output for `./push_swap 2 1` is `sa`, which swaps the top two elements. If the numbers are already sorted or there are no arguments, it prints nothing. If the input is invalid, it writes `Error` followed by a newline to stderr.
1. 	main.c starts the program, calls the parser, hands the stacks to the sorter, and cleans up.
2. 	src/parsing/ validates the arguments and builds stack A.
3. 	src/sorting/ decides which moves to make.
4. 	src/operations/ performs those moves and prints their instruction names.
## Shitao's Contribution
### Nov.22
I was responsible for designing the stack data structure, choosing a doubly linked list approach, and defining the t_node and t_stack structures. I also implemented all 11 Push_swap operations (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr), ensuring efficient node manipulation through pointer operations.
### Nov.25
Today I implemented the simple O(n²) sorting strategy, added instruction printing to each stack operation, listed the current C source files in the top-level Makefile, and made the operations handle edge cases such as empty or one-element stacks safely.

## Miko's Contribution
### nov 22
I've started working on the main function by creating an `argument_checker` function.
This function checks if the given input is actually an integer, eliminating arguments such as '--4', '+-5', '8x', an empty argument, or anything outside of the `INT_MIN` - `INT_MAX` range.
I've used the `long long` data type for this function. The reasoning behind this is because of safety of system architecture, since on Windows operating systems, the regular `long` uses 32-bits; which is the same as the `int` data type. This could still cause silent overflow. Since we use Linux on our 42 network iMacs, which uses 64-bit `long`, it should work. However, `long long` usage turns out to be good practice in terms of compatibility. 
On failure, the function returns `LLONG_MIN` value, since this can not be produced by a valid integer.
I chose to consider +5 as a valid integer. 
The functions takes the argument in string form and returns it as `long long`. I intend to re-use this function also to add them into the stack structure.

### nov 25
today I managed to finish the making of the stack with argument input. finishing the parsing making it ready for the operations. it checks for duplicate integers with some helper functions for the stack. it correctly frees up any allocated memory for any fail or error encountered.

### nov 27
fixed the edgecase on parsing and started the disorder function. using `double` and `long long` to be safe of for big stacks.

## Simple strategy — selection sort
The simple strategy repeatedly finds the smallest value remaining in stack a. It rotates that value to the top using the shorter direction (ra or rra), then pushes it onto stack b with pb. Once a is empty, it moves all values back with pa. The values are then in ascending order in a, with the smallest at the top.
For n values, finding the minimum scans each remaining part of a, for O(n²) comparisons overall. Moving each minimum to the top takes at most about half the current stack size in rotations, so the total rotations are O(n²). The pb and pa operations add 2n moves. Therefore, the generated Push_swap operation count is O(n²), meeting the required simple-strategy complexity. The algorithm reuses the existing nodes and stack b, with O(1) extra space beyond the stacks.

## FAQs:
1. Why use linked list rather than dynamic array?
	Linked list makes shifting integers much easier without the need to change the positioning of all other integers in the stack.

2. Why doubly linked list? Why each node contains both 'next' and 'previous' and each stack containing 'top' and 'bottom'?
	Makes it easier to do (reverse)rotations.

3. libft/ and ft_printf/ should be in the root folder rather than includes/, becaus that directory is conventionally dedicated to header files.

### Makefile
1. Why use $(MAKE) -C?
	This tells Make to enter the ft_printf directory and execute its Makefile. The same applies to Libft.
	
2. Why list the libraries as dependencies? \$(NAME): \$(OBJS) \$(PRINTF) \$(LIBFT)
	This ensures both libraries are built before the executable is linked.

3. Why use INCLUDES? INCLUDES = -Iincludes -Ilibft -Ift_printf
	This lets your source files include headers directly. You won't need to write relative paths such as ../../libft/libft.h.

# Instructions



# Resources
## AI usage
