# ECE_528_HW1

## Section 1 - Review Questions ## 
 
### 1.	(1 pt) (a) What is the difference between a compiler and an interpreter? ###
 
A compiler converts our text/code as a whole before it making it to an executable to run/execute the code. While a interpreter converts the code and executes it line by line as it goes through the code.
	
### 		(1 pt) (b) What is the output of a C program’s main() function by default? ###
 
Default output for a C main() program is a integer "0", showing that it was successful 
 
### 2. (2 pts) What are header files in C and what is the purpose of the #include directive? ### 
 
Header files are separate files containing function declarations and macros  that can only be called in the a source file if we use the '#include <HEADERFILENAME.H>' directive in that source file. 
		
### 3. (2 pts) Explain how to declare and define a function in C. What is the purpose of the return statement in a function? Can a function have more than one return statement?###
 
To declare a function we need to let the compiler know before we call it in main normally by placing it before the main().To define a function in  C , we need to make sure that we place it before the main().We start by first by stating the return type(int, char, void) followed by a user define function name ending with an argument list ( i.e input variables for the functions). This would be the top of the function and would next need the actual body contained with curly brackets. In here would then the code that containing the logic the function is try to package together. Ending with a return expression that is the output the function is providing when called. It should ultimately look like the following: 
		
```c 
return_type function_name(argument_type argumentsName) 
{
  // Function Body 
  return value;
}
 
```
		
As for if a function can have more than one return statement that is a "Yes" , in the terms of being uses it being uses in logic such as "if" statements. But the function can only have one return value per execution 
		
 
### 4. (2 pts) What is type casting? Provide an example C function that demonstrates explicit type casting from double to int. The function should accept two arguments that are both double and return their sum as an integer.	###
 
Typecasting is converting a previously define variable type to another type. For example a "double" to an "int" 
		
Example: 
 
```c 
 
int Casting_Double_to_Int ( double double1 , double double2 )
{
 
int Sum_Val = (int)(double1 + double2);
 
return Sum_Val;
 
 
}
 
```
		
		
### 5. (2 pts) Explain the difference between local and global variables. Provide an example of each. ### 
 
Local variables and Global variables differ in terms of where they can be called from. Local are only "seen" inside of a function/section they were declared in. While global are "seen" throughout the file and usually declared at the top of the file. 
		
For Example: 
```c
 
// ================Top of the File ===================
# include <stdio.h>
 
int global_variable = 10; 
 
int RandomFunction(int arg1)
{
  int local_variable_Randome_Function = 20; 
  // Body of Code for Function
  return 0; 
}
 
 
 
int main() 
{
 
int local_variable_Main = 30;
 
printf ("%d \n", global_variable );
printf ("%d \n", local_variable_Randome_Function);
printf ("%d \n", local_variable_Main) ; 
 
 
}
 
```
	
This example would show that "global_variable" and "local_variable_Main" will print but will error out trying to print out "local_variable_Randome_Function".
		
		
		
		
### 6. (2 pts) How are strings declared and initialized in C? What is the role of the null terminator ‘\0’? ### 
 
Strings are declared by creating an array of "char" values using "[]". The null terminator ‘\0’ role is to define the end of the string, and is automatically added to the end of the array  
		
Example:
 
```c 
char Example_String[] = "TEST" ; 
```
		
 
### 7. (2 pts) What is a pointer in C? How do you pass a pointer to a function? What advantages are there to passing a pointer instead of a value? ### 
 
A pointer is variable that stores the memory address of another variable and not its actual value.
 
You can pass a pointer to a function using something similar to this 
```c
int Val = 5;   				// Gives a value of 5 to a variable named Val
int *PointerVal = &Val;		// Grabs the address of "Val" and saves in a variable name PointerVal
Test_Function(PointerVal);  // Pass the pointer to the function 
```
 
The advantages of this is that it is more memory efficient since we are only passing the address and not the entire value. It also allows for direct modification of the data in that variable since we are directly editing the memory location, which allows for the changes to stay after a function returns. 
		
		
### 8. (2 pts) What does the \* operator and the & operator do in the context of pointers? ###
 
The "&" operator pull/gets the memory address of said variable, while the "\* " declares the variable to be a pointer
Example: 
 
```c 
int *PointerX = &PointerValue;
 
```
 
This grabs the address for the value "PointerValue" and assign that address to another variable with call "PointerX". This also allows us to write new values to "PointerValue" through the pointer "PointerX" 
		
		
		
### 9. (2 pts) What is the difference between while and do…while loops? ###
 
A "while loop" performs the logic check every iteration even at the initial startup so its possible it runs zero times. A "do while loop" runs at least once and during the initial start up, so it runs a minimum of 1 time before it starts checking the logic.   
 
 
### 10. (2 pts) What does the break statement do? How is it different from the continue statement? ###
 
A break statement, completely stops and exits the loop of that section, while a continue statement stop the current iteration of the loop but follows on with the loop 
		
		
### 11. (2 pts) Explain the use of bitwise operators (i.e. &, |, ^, ~, <<, >>) in C. Which bitwise operators can be used to set, clear, toggle, or check a specific bit in an integer variable?
 
Bitwise operators perform the basic logical operations on individual bits ( AND , OR, XOR , NOT , Shift Left, Shift Right).
		
		OR = Setting a Bit ------------------------- ( Value = 1) 
		AND+NOT = CLearning a Bit ------------------- ( Value = 0)
		XOR = Toggling Bit		---------------------- ( Values Flips) 
		AND = Check the State of the Bit 		
		
 
### 12. (2 pts) What is the purpose of the PxSEL0 and PxSEL1 GPIO registers? Write two statements that select the GPIO function for the pins P1.0 and P1.7. ###
 
The PxSEL0 and PxSEL1 registers are used to multiplex the functionality of the pins allowing 4 different options per pin. To set pins 0 and 7 we need to make sure both PxSEL0 and PxSEL1 == 0 to we can use the following. 
 
```c
 
P1->SEL0 &= ~0x81;   // 1000 0001b --> 0x81 
P1->SEL1 &= ~0x81;   // 1000 0001b --> 0x81
 
```	
	
The 1's in the bitmask is the target bit we are trying to set to 0 
	
	
 
### 13. (2 pts) Write a void function named P1_1_and_P1_4_Init that configures P1.1 and P1.4 as GPIO inputs with pull-up resistors enabled.###
 
```c
 
void P1_1_and_P1_4_Init(void)
{
 
// GPIO SEL0 and SEL1 == 0 
P1->SEL0 &= ~0x12;   // 0001 0010b --> 0x12 --- after operation bits 1 and 4 equal 0 
P1->SEL1 &= ~0x12;   // 0001 0010b --> 0x12 --- after operation bits 1 and 4 equal 0
 
// Inputs with Pull Up Resistor [DIR = 0 ; REN = 1 ; OUT = 1] 
P1->DIR &= ~0x12;   // 0001 0010b --> 0x12 --- after operation bits 1 and 4 equal 0
P1->REN |= 0x12;   // 0001 0010b --> 0x12 --- after operation bits 1 and 4 equal 1
P1->OUT |= 0x12;   // 0001 0010b --> 0x12  --- after operation bits 1 and 4 equal 1
 
 
}
 
```
	
	
### 14. (2 pts) Write a void function named Buttons_Init that configures the following pins as GPIO inputs with pull-down resistors enabled.( P3.1, P3.6, P5.0, P5.4) ### 
 
```c
 
void Buttons_Init(void)
{
 
// GPIO SEL0 and SEL1 == 0 
 
P3->SEL0 &= ~0x42;   // 0100 0010b --> 0x42 --- after operation bits 1 and 6 equal 0 
P3->SEL1 &= ~0x42;   // 0100 0010b --> 0x42 --- after operation bits 1 and 6 equal 0
 
P5->SEL0 &= ~0x11;   // 0001 0001b --> 0x11 --- after operation bits 0 and 4 equal 0 
P5->SEL1 &= ~0x11;   // 0001 0001b --> 0x11 --- after operation bits 0 and 4 equal 0 
 
 
// Inputs with Pull Down Resistor [DIR = 0 ; REN = 1 ; OUT = 0] 
 
P3->DIR &= ~0x42;   // 0100 0010b --> 0x42 --- after operation bits 1 and 6 equal 0 
P3->REN |= 0x42;   // 0100 0010b --> 0x42 --- after operation bits 1 and 6 equal 1
P3->OUT &= ~0x42;   // 0100 0010b --> 0x42 --- after operation bits 1 and 6 equal 0 
 
P5->DIR &= ~0x11;   // 0001 0001b --> 0x11 --- after operation bits 0 and 4 equal 0
P5->REN |= 0x11;   // 0001 0001b --> 0x11 --- after operation bits 0 and 4 equal 1
P5->OUT &= ~0x11;   // 0001 0001b --> 0x11 --- after operation bits 0 and 4 equal 0 
 
 
}
 
```
	
	
	
### 15. (2 pts) Write a void function named LEDs_Init that configures the following pins as GPIO outputs. Initialize the pins to zero.( P7.0 to P7.7)### 
 
```c
 
void LEDs_Init(void)
{
 
// GPIO SEL0 and SEL1 == 0 
P7->SEL0 &= ~0xFF;   // 1111 1111b --> 0xFF --- after operation bits 0 through 7 equal 0 
P7->SEL1 &= ~0xFF;   // 1111 1111b --> 0xFF --- after operation bits 0 through 7 equal 0 
 
// Setting Config as Outputs [DIR = 1; REN = X ; OUT = X] <- from data sheet but ask to initialize  pins to zeros so X --> 0 
P7->DIR |= 0xFF;   // 1111 1111b --> 0xFF --- after operation bits 0 through 7 equal 1
P7->REN &= ~0xFF;   // 1111 1111b --> 0xFF --- after operation bits 0 through 7 equal 0 
P7->OUT &= ~0xFF;   // 1111 1111b --> 0xFF --- after operation bits 0 through 7 equal 0 
 
 
}
```
## Section 2 - Programing Tasks ##
 
### Sign and Magnitude ###
 
To verify the `sign_and_magnitude.c` program, 8 test cases were used to check the program's functionality.
 
**Test Cases 1 and 2** test the nominal condition of feeding in typical integer values such as 10 and -15.
![Test Cases 1 and 2](./images/Sign_and_Mag_Images/TestCase_1_and_2.png)
 
**Test Cases 3 and 4** test the special cases of entering a value of 0 and a relatively large number.
![Test Cases 3 and 4](./images/Sign_and_Mag_Images/TestCase_3_and_4.png)
 
**Test Cases 5 and 6** show what happens when negative and positive decimal values are entered. In doing so we can see that the program truncates toward zero, which in this case results in 0.
![Test Cases 5 and 6](./images/Sign_and_Mag_Images/TestCase_5_and_6.png)
 
**Test Cases 7 and 8** further verify test cases 5 and 6 by inputting the values 2.13 and 2.82 to show that they truncate toward zero.
![Test Cases 7 and 8](./images/Sign_and_Mag_Images/TestCase_7_and_8.png)
 
 
### Bit Counter ###
 
To verify `bit_counter.c`, 8 test cases were run. The following explains what each test case aims to verify. The image displays the test cases in order.
 
**Test Case 1:** Catching invalid input involving negative integers. Tested using a value of -5.
 
```
Expected: INVALID VALUE ENTERED
```
 
**Test Case 2:** Basic functionality of counting a bit set to 1, and confirming a single iteration of `n &= (n - 1)`. Tested using an integer value of 1.
 
```
Decimal Value: 1
Binary (32-bit): 0000 0000 0000 0000 0000 0000 0000 0001
Expected bits set: 1
```
 
**Test Case 3:** Verifying that a set bit is counted correctly at a higher position. Tested using an integer value of 16.
 
```
Decimal Value: 16
Binary (32-bit): 0000 0000 0000 0000 0000 0000 0001 0000
Expected bits set: 1
```
 
**Test Case 4:** Verifying that the program counts and displays more than one set bit. Tested using an integer value of 15.
 
```
Decimal Value: 15
Binary (32-bit): 0000 0000 0000 0000 0000 0000 0000 1111
Expected bits set: 4
```
 
**Test Case 5:** Verifying that the program counts set bits spaced out by varying gaps of zeros. Tested using an integer value of 10,000,000.
 
```
Decimal Value: 10,000,000
Binary (32-bit): 0000 0000 1001 1000 1001 0110 1000 0000
Expected bits set: 8
```
 
**Test Case 6:** Verifying that the program counts multiple bits set in a row. Tested using an integer value of 4095.
 
```
Decimal Value: 4095
Binary (32-bit): 0000 0000 0000 0000 0000 1111 1111 1111
Expected bits set: 12
```
 
**Test Case 7:** Verifying that the program rejects letter inputs. Tested using a string of "Hi".
 
```
Expected: INVALID VALUE ENTERED
```
 
**Test Case 8:** Verifying program behavior when a decimal value is entered. The program truncates the value toward zero and disregards the remaining decimal places. Tested using a value of 20.53.
 
```
Decimal Value: 20.53
Value parsed:  20
Binary (32-bit): 0000 0000 0000 0000 0000 0000 0001 0100
Expected bits set: 2
```
 
**All Test Cases Displayed In Order:**
 
![Test Cases Bit Counter](./images/Bit_Counter_Images/Test_Cases_Bit_Counter.png)
 
 
**Learning Outcomes:** The initial attempt used an `int` to hold the user's input, which seemed fine until testing revealed that large input values caused issues. An `int` is signed, so half of its values are negative, and it can only go up to 2,147,483,647 — about half of what an unsigned 32-bit number needs. Switching to a `long long` fixed it, since it holds at least 64 bits and has enough room for the whole unsigned 32-bit range. The other thing learned is that `scanf` doesn't reject a negative number on its own — it reads the minus sign as part of the number and converts it, so checking the return value isn't enough to catch it.
 
 
### Fibonacci ###
 
To verify `fibonacci.c`, 6 test cases were run. The following explains what each test case aims to verify. The image displays the test cases in order.
 
**Test Cases 1, 2, and 3:** These test cases verify that if a value less than 2, or a letter, is entered, the program will reject the input and output an error message.
 
```
Expected: INVALID VALUE ENTERED
```
 
**Test Cases 4 and 5:** Verifying the program's basic functionality of printing out the desired number of terms. Tested with 5 and 25.
 
```
Expected: 5 ---> Ends with 5 
Expected: 25 ---> Ends with 75025 
```
 
**Test Case 6:** Verifying the program's limit on the number of terms that can be computed.
 
```
Expected to not function after the 46th term due to signed overflow 
```
 
**All Test Cases Displayed In Order:**
 
![Test Cases Fibonacci](./images/Fibonacci%20Images/Test_Cases_Fibonacci.png)
 
 
**Learning Outcomes:** Since we use an `int` as the variable type, the highest value we can store is `2^32`, which is 4,294,967,296, but that is halved to 2,147,483,647 since `int` can represent both negative and positive numbers. So in doing so we get an overflow, so the program still executes but does not correctly compute the expected values and has undefined behavior.