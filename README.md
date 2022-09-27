# Overview

Welcome to my C++ project!  This project is about a simple tic tac toe game.  Even though it does not sound very exciting, I had two reasons for doing this kind of project.  One, I wanted to practice my software design skills by implemenitn Class diagrams and Structure charts.  Two, I wanted to practice C++ syntax and code.  As you look through the project, note that it is a work in progress and that future additions or changes may be made.

The software I wrote is to help demonstrate principles of the C++ language.  I made two classes called Game and Board.  The Game class handles all of the methods related to managing the game.  You can almost look at it like a referee for a game, but in this case, tic tac toe.  The board class handles anything related to the board.  So this class and display, update, and set up the board.  It can also save or load in boards for current or future games.  Scattered throughout the two classes are methods that contain loops, conditional blocks, or other basic C++ syntax.  I also use an array to keep track of the tic tac toe board.  

The video down below is a demostration video of me running through the program on my computer.  Feel free to click on the link to check it out!

[Tic Tac Toe Demo Video](http://youtube.link.goes.here)

# Development Environment

The main development enviroment I used was Visual Studio Community.  It is produced by Microsoft and is similar to Visual Studio Code, but it runs C ++ better.

When I used C ++, I use the std library.  At the top of the files I wrote a line like: "#include iostream" so I did not have to write std:: all the time.  That way I can use short hand cin or cout for any output to the terminal.  I also imported a string libray to use stings, a file library called "fstream" to help with the writing and reading of files.  

A unique libray I used was stringStreaming.  The library basically takes in a string and converts it to an int.  If a letter or symbol that is not an int it put in, it will return a 0.  I used this to help prevent the program from breaking and to be more robust.

# Useful Websites
Down beow is a lits of sources I used to help complete this project.  
* [Geeks for Geeks Reading or Writing to a file](https://www.geeksforgeeks.org/cpp-program-to-read-content-from-one-file-and-write-it-into-another-file/)
* [C++ W3 Schools Tutorial](https://www.w3schools.com/cpp/default.asp)
* [Code Camp using stringStreaming](https://www.freecodecamp.org/news/string-to-int-in-c-how-to-convert-a-string-to-an-integer-example/)
* [How to reset stringStreaming](https://topitanswers.com/post/c-extract-int-from-string-using-stringstream)

# Future Work
Here is a list of future tasks I may implement in my code.  No code is perfect, but if I get the chance here is what I will do to enhace or improve my code.
* I would like to see if I can make it where other size boards can work with this program.
* Possible make a GUI instead of displaying to the terminal.
