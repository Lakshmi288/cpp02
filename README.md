# cpp02
Fixed point numbers:
How computer is storing a floating point numbers?
if we get  Floating point number it will multiply it by 256
then store the interger part of it and then 
when the user ask it, the stored number will be divided by 256 and give the answer

eg:
42.42f 
42.42 * 256 = 10859.52
now it will store 10859
then user ask:
10853 / 256 = 42.3945
will give to the user;

why is 256 because it is 2 power 8 = 256
we are using 8bits

//ex02:
first a print 0
then ++a = 0 + 1 
1/256 = 0.0390 - it is printed.
