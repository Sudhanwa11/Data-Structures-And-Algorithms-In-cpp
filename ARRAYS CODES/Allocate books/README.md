Sample Input 1:
4 2
12 34 67 90

Sample Output 1:
113

Explanation Of Sample Input 1:
Let’s consider ‘n=4’ (number of books ) and ‘m=2’ (number of students)
‘arr = { 12, 34, 67, 90 }’. And ‘m= 2’.
All possible way to allocate the ‘4’ books in ‘2’ number of students is-

12 | 34, 67, 90 - sum of all the pages of books which allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’ so maximum is ‘max(12, 191)= 191’.

12, 34 | 67, 90 - sum of all the pages of books which allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’ so maximum is ‘max(46, 157)= 157’.

12, 34, 67 | 90 - sum of all the pages of books which allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’ so maximum is ‘max(113, 90)= 113’.

So possible maximum number of pages which allocated to a single student is { 191, 157, 113 } 

But you have to return a minimum of this so return ‘min(191,157, 113) =113’.

Hence answer is ‘113’.
