# 2500WA2

I began by making a tree to explore the recursive steps.
for n = 1, I began with   0                1
n = 2,                    01             11  10
n = 3,                 010   011      110  111  101

Here I noticed that if the previous string ended with a 1, that a zero or a one could be added, but if it ended with a 0, then a one MUST be added. I used this approach and logic to write the recursive algorithm.

Challenges:
Finding when to add ones or zeros to make the string acceptable was difficult at first. Writing out the tree like above helped me to think through the recursion and when to do what to the strings.
The output was also challenging for me, I was unsure how to have the output match the exmaple output form. At first, only one string was getting printed. However, in the end, I got all of the strings to output.
