<p class="has-line-data" data-line-start="0" data-line-end="1">Porject PushSwap</p>
<p class="has-line-data" data-line-start="2" data-line-end="6">The only system calls allowed are the following ones:<br>
• write<br>
• malloc<br>
• free</p>
<p class="has-line-data" data-line-start="7" data-line-end="37">The game is made up of two lists of numbers named l_a and l_b.<br>
In the beginning, l_b will be empty and l_a will contain a certain amount of positive or negative numbers. The objective of the game is to sort l_a.<br>
In order to accomplish this, you will only have access to the following operation:<br>
• sa<br>
swap the first two elements of l_a (nothing will happen if there aren’t enough elements).<br>
• sb<br>
swap the first two elements of l_b (nothing will happen if there aren’t enough elements).<br>
• sc<br>
sa and sb at the same time.<br>
• pa<br>
take the first element from l_b and move it to the first position on the l_a list (nothing will happen if l_b is empty).<br>
• pb<br>
take the first element from l_a and move it to the first position on the l_b list (nothing will happen if l_a is empty).<br>
• ra<br>
rotate l_a toward the beginning, the first element will become the last.<br>
• rb<br>
rotate l_b toward the beginning, the first element will become the last.<br>
• rr<br>
ra and rb at the same time.<br>
• rra<br>
rotate l_a toward the end, the last element will become the first.<br>
• rrb<br>
rotate l_b toward the end, the last element will become the first.<br>
• rrr<br>
rra and rrb at the same time.<br>
You must create a program in which l_a is given as parameter (all numbers are valid and can fit in an integer). The goal is to sort the list by using the fewest possible operations.<br>
The program must print the series of operations that enable this list to be sorted.<br>
The operations must be displayed separated by a space. No spaces should be at the beginning nor at the end. The operations’ list must be followed by a \n.<br>
You could add some extra features (considered as bonus); for example, adding the following options: • -vshowsthestatusesofl_aandl_bateachstep.<br>
• -vT the same as the above text,but using the libn curses</p>
