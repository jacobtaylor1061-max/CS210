# CS210 Module 8-1 Journal: Portfolio Submission
# Jacob Taylor

# Summarize the project and what problem it was solving.
- This project’s main goal was to write a program that would assist the intended user of Corner Grocer in finding the frequencies of grocery items from a provided list. This program would open and read the grocery list file. From here, the frequencies of each item could be read from different functions and then stored in an output file. There was also a histogram that would read the frequency of each item and then display the quantity to the user in “*” form. When the user ran the program, they were presented with a menu offering options tailored to their needs.
 
# What did you do particularly well?
- Personally, I was relieved when the program finally read the input file correctly. Files were a particularly troublesome aspect of this course, and I found myself really struggling with the concept of reading files in general. It felt good to run my program and finally see each item’s frequency.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

- The menu could definitely use some enhancements due to its lack of robust user validation. Choosing options one through four works as advertised, and the invalid statement does pop up when you input any number greater than four, but the menu falls into an infinite loop when you input any letter. 

# Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

- The input and output file functions caused me the most trouble during this code-writing process. I used the ZyBook readings and other discussion boards to help me write this section. 

# What skills from this project will be particularly transferable to other projects or course work?

- Learning how to create a program that reads a file correctly will be the most transferable to other projects in future courses/my career. All programming languages (C++, Java, Python, etc.) use file reading functions to build robust projects. Although their syntax differs, the general purpose is the same, making them invaluable resources.

# How did you make this program maintainable, readable, and adaptable?

- The program is organized neatly and has in-line comments that explain each function and its purpose within the program. Legibility is also bolstered by keeping the “main()” function as clutter-free as possible and by separating its classes and functions in the upper portion of the code. I made the code adaptable by making it easy for someone else to change the file name to read other lists. For maintainability, the GroceryTracker class can read all necessary data and can be expanded if needed. The code also reduces the chance of bugs by using the map, string, ofstream, and ifstream functions. For readability, I included inline comments and descriptive identifiers that are easy to read and indicate their purpose, in case other programmers want to build on my code. 

