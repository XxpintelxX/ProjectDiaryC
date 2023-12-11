L2 project - Algorithmics and data structure


The first step is to open the terminal in the file of this project:

For that, open your terminal and enter 
cd "the absolut path of the file"



After this you need to compile the main coresponding to the part you want to test;


If you don't have the "make" command 
{
	Enter the folowing in your terminal to test the part 1,2 or 3:

	gcc src/*.c src/mains/main1.c -o diary1
	or
	gcc src/*.c src/mains/main2.c -o diary2
	or
	gcc src/*.c src/mains/main3.c -o diary3
}

if you have the "make" command
{
	Enter in your terminal :

	make diary1 (or 2/3) 
}


The executable will have the name diary1, you can replace it by the name you want.

Then
If you are on Macos:
{
	Enter in the terminal the command

	./diary1 

	Replace diary1 by the name of the executable you choose  
}

Else
{
	Enter in the terminal the command
	.\diary1 
}

By Tristan Pichard (The goat), Max Chartier, Tristan Bordel