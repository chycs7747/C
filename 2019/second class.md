# Second Class

> Bit & Byte

Human uses a decimal number. However, computer can't understand it.

Computer only understand a binary number. 

- 'Bi'nary digi't' = 'Bit'
- 1 Bit consists of 0 , 1

```
2Bits, for example

(bit1,bit2)
(0,0) : (0*2^1)+(0*2^0) = 0
(0,1) : (0*2^1)+(0*2^0) = 1
(1,0) : (1*2^1)+(1*2^0) = 2
(1,1) : (1*2^1)+(1*2^0) = 3
```

- 8 bits = 1 'byte'

> C stores/retrieves variable in unit of 'byte'.

"Value" is stored in "byte or multiple of bytes" according to the data type.



> Unit of bytes

![Unit of bytes1](./Capture/Second_Class/Unit_of_bytes1.png)



![Unit of bytes2](./Capture/Second_Class/Unit_of_bytes2.png)



> Negative number expression (2's complement)

How to make 2's complement?

- Use 1's complement + 1

ex1) 00000101 == 5

 	  11111010 == '1's complement'

 	 '1'1111011 == -5        ('1' is sign bit)

ex2)

![Example of 2's complement](./Capture/Second_Class/Example_of_2's_complement.png)



> Variavle

- Variable is a name given to a storage area that our programs can manipulate.

> Declare variable

- int some_number; 

'int' : data type of variable , 'some_number' : name of variable 

> Initialize variable

- int some_number = 3;

Declare variable some_number and assign 3 to it.

"=" is assignment expression.

if variable is not initialized, the variable contains garbage value.





>Rule for constructing variable name 

- Characters allowed : 

  -Underscore(_)

  -Capital/Small letters (A-Z, a-z)

  -Digits (0-9)

- Blanks & commas are not allowed.

- No special symbols other than underscore(_) are allowed.

- First character should be alphabet or underscore.

- Variable name should not be' reserved word'.

> Reserved Words

![Reserved words](./Capture/Second_Class/Reserved_words.png)

> Example of variable naming

![Example of variable naming](./Capture/Second_Class/Example_of_variable_naming.png)





> Fundamental data types

![Fundamental data types](./Capture/Second_Class/Fundamental_data_types.png)



> Char data type

- Smallest addressable unit of the machine.

- 1 byte

  -(signed) char	1byte	-2^8 to (2^7-1)	-128 to 127

  -unsigned char	1byte	0 to 2^8-1	0 to 255

> Example1 of char data type

```c
#include <stdio.h>

int main(void)
{
  char some_char = -3;
  unsigned char some_uchar = 3;
  
  return 0;
}
```

>Character?

Integer type(char, int) data can represent 'character'.

(Interpreted to output character, not number)



> The ASCII code (American Standard Code for Information Interchange)

![ASCII code](./Capture/Second_Class/ASCII_code.png)



> Example2 of char data type

```c
char c = 'a'   //'a' has ASCII encoding 97
int i = 65;   // 65 is ASCII encoding for 'A'
printf("%c", c+1);
printf("%d", c+2);
printf("%c", i+3);
```





>int data type

![int data type](./Capture/Second_Class/int_data_type.png)

