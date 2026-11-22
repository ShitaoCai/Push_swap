*This project has been created as part of the 42 curriculum by \<shicai> and \<mde-rove>*

# Description

## Shitao's Contribution
### Nov.22
I was responsible for designing the stack data structure, choosing a doubly linked list approach, and defining the t_node and t_stack structures. I also implemented all 11 Push_swap operations (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr), ensuring efficient node manipulation through pointer operations.

## Miko's Contribution
### nov 22
I've started working on the main function by creating an `argument_checker` function.
This function checks if the given input is actually an integer, eliminating arguments such as '--4', '+-5', '8x', an empty argument, or anything outside of the `INT_MIN` - `INT_MAX` range.
I've used the `long long` data type for this function. The reasoning behind this is because of safety of system architecture, since on Windows operating systems, the regular `long` uses 32-bits; which is the same as the `int` data type. This could still cause silent overflow. Since we use Linux on our 42 network iMacs, which uses 64-bit `long`, it should work. However, `long long` usage turns out to be good practice in terms of compatibility. 
On failure, the function returns `LLONG_MIN` value, since this can not be produced by a valid integer.
I chose to consider +5 as a valid integer. 
The functions takes the argument in string form and returns it as `long long`. I intend to re-use this function also to add them into the stack structure.

What's missing still: checking for duplicate integers. Plan: make helper functions for nodes and stacks. Comparing every return value from `argument_checker` to the stack. If true then free the stack and the nodes. Return error.

Things to note: it is unclear whether a string containing the list of integers is a valid input. having to use split in case it is. 

## FAQs:
1. Why use linked list rather than dynamic array?
	Linked list makes shifting integers much easier without the need to change the positioning of all other integers in the stack.

2. Why doubly linked list? Why each node contains both 'next' and 'previous' and each stack containing 'top' and 'bottom'?
	Makes it easier to do (reverse)rotations.

# Instructions



# Resources
## AI usage
