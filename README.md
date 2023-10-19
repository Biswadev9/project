# Phone Book Project

Title: Simple Phone Book Management Program in C

Description:

The "Simple Phone Book Management Program" is a C-based application designed to facilitate the organization and management of phone book entries. This console-based program provides users with several functions, including adding new phone book entries, searching for specific entries, changing existing phone numbers, deleting entries, and listing all the entries in the phone book. Below is a more detailed description of the key components and functionality of the program:

**1. Data Structure:** The program employs a data structure called `Persons` to hold information about individuals. Each entry in the phone book consists of the following attributes:
   - Name: The name of the person.
   - Address: The address of the person.
   - Mobile Number: The phone number of the person.
   - Email Address: The email address of the person.
   - Relation: A field for specifying the relationship with the person (e.g., friend, family).

**2. File Handling:** The program utilizes file input/output operations to store and manage phone book data. The data is persistently stored in a text file named "num.txt." This file serves as the storage medium for all phone book entries.

**3. Menu-Driven Interface:** The program provides a user-friendly menu-driven interface that allows users to interact with the phone book functionalities. Users can make selections by entering numeric choices corresponding to specific operations they want to perform.

**4. Core Functions:**
    addmobile(): This function enables users to add a new phone book entry. It prompts users to input the required details (name, address, mobile number, email address, and relation) and appends the information to the "num.txt" file, creating a new phone book entry.

    search_login(): Users can search for a specific phone book entry by providing the person's name and email address. If a matching entry is found, the program displays the relevant information for that person, including their name, address, mobile number, email address, and relation.

    changenumber(int userIndex): This function allows users to modify an existing phone number entry. To do this, users must specify the index of the entry they wish to change, followed by providing the updated mobile number. The program then updates the entry with the new mobile number.

    deletenumber()   : Users can delete a phone book entry by specifying the mobile number they want to remove. The program reads the phone book data from "num.txt," excludes the specified entry, and creates a temporary file to store the updated data. Finally, it replaces the original "num.txt" file with the modified version.

     list_number(): This function is responsible for listing all phone book entries stored in the "num.txt" file. It displays the name, address, mobile number, email address, and relation for each person in the phone book.

**5. Main Function:** The main() function serves as the program's entry point. It displays the program's menu, accepts user input to select specific functionalities, and calls the corresponding functions to execute the desired operations. The program continues to run until the user chooses to exit.

**6. User Interface Enhancements:** The program employs escape sequences to set text colors, enhancing the visual appeal of the console-based interface.

Please note that while this program provides basic phone book management functionalities, it has some limitations, such as the lack of robust error handling for file operations and constraints on the number of users and data entry format. It is important to ensure that the "num.txt" file exists in the same directory as the program for proper functionality.

You can compile and run this C program in a C development environment, keeping in mind any platform-specific dependencies such as <conio.h>, which is commonly used for console-based programs on Windows.

![Screenshot 2023-10-19 135626](https://github.com/Biswadev9/project/assets/143692628/c6fe1e68-e0fa-41aa-bb90-942961d60587)
![Screenshot 2023-10-19 135523](https://github.com/Biswadev9/project/assets/143692628/8283c65e-bb90-41e4-a23f-f4a10eac5a32)
![Screenshot 2023-10-19 135428](https://github.com/Biswadev9/project/assets/143692628/9447e322-17cf-4003-a056-48a587eed2e6)
![Screenshot 2023-10-19 135212](https://github.com/Biswadev9/project/assets/143692628/c0dcdef0-a7a1-49bd-a859-34f370669866)
![Screenshot 2023-10-19 140449](https://github.com/Biswadev9/project/assets/143692628/22f8d489-2b27-41c5-8887-48351b7e8150)
To run this project you need codeblocks or VS code else you can not see the color effect implemented on console and mingw(compiler and debugger) beside you have to install gcc in the command prompt. you can also check if gcc is installed in your pc by gcc --version command.
