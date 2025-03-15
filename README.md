**PROJECT BACKGROUND**

Our project which is a “Theatre management system” aims to ease management for both cinema owner and viewer/audience. Our project allows user to see what movies are being played and book tickets respectively, check what seats are available and reservation for same buy add-on foods and beverages just by a click of a button. 
SOCIETAL NEED OF THIS PROJECT

1. Keeps the business running 24x7 since all features are now online
2. Significantly reduces admin workload so admin can divide his
focus on other important things
3. Maximize bookings and reservations since close to no error
probability is observed
4. Grows online presence for a bigger and better brand value
5. Scope of digital marketing which is an effective way for expansion

**FUNCTIONALITIES**

1)Allow user to change the rate of the movie.
2)Allow user to change the movie.
3)Allow user to change the rate of menu.
4)Is the ticket booking process.
5)Print ticket.

**PROBLEM STATEMENT**

To make an effective software for the theatre managers.

**OBJECT ORIENTED CONCEPT**

_ENCAPSULATION:_ For having different functions and variable in the single class.

_INHERITANCE:_ To access the data members of the parent class.

_FRIEND CLASS:_ To access the variable of the other class.

_FILES:_ To print tickets.


**ALGORITHM**

1.	Include necessary header files - cstring, fstream, and iostream.
2.	Create a class named admin with the following private and protected variables:
  •	pass: an integer variable to store the admin's password
  •	username: an integer variable to store the admin's username
  •	rate_movie: an integer variable to store the current rate of the movie
  •	movie1: a character array to store the name of the movie
3.	Create a default constructor for the admin class that initializes the rate_movie variable by taking input from the user.
4.	Create a member function named change_rate() that allows the admin to change the rate_movie variable.
5.	Create a member function named movies() that allows the admin to input the name of the movie.
6.	Create a friend function named total() to access the protected and private members of the admin class.
7.	Create a class named bookings, which is virtually inherited from the admin class, with the following private and protected variables:
      1.	i, j, ii, jj, nn: integer variables for iterating through seat arrays and taking seat number inputs from the user
      2.	n: an integer variable to store the number of tickets booked
      3.	seats: an array to store the seat numbers
      4.	seatss: a 2D array to store the seating arrangement of the movie theater
8.	Create a member function named book_ticket() that takes the number of tickets booked and seat numbers as input from the user and stores the information in the seats array.
9.	Create a friend function named total() to access the protected and private members of the bookings class.
10.	Create a class named food with the following private and protected variables:
      1.	rate_pizza, rate_popcorn, rate_sandwich, rate_sizzler, rate_kiwispitzer, rate_liit, rate_irishjameson: integer variables to store the prices of food items
      2.	total: an integer variable to store the total amount of the order
      3.	a, m, j: integer variables for taking input from the user
      4. 	s: an integer variable to store the number of items ordered
      5. 	i, ii: integer variables for iterating through the items ordered
      6.	nn: an integer variable for taking input from the user for the items ordered
      7.	x: an integer variable to store the number of the item ordered
11.	Create a member function named erate() that takes input from the admin to set the prices of food items.
12.	Create a member function named getfitem() that displays the food menu and its prices.
13.	Create a member function named getditem() that displays the drinks menu and its prices.
14.	Create a member function named selectit() that takes input from the user to order food and drinks items and calculates the total amount.
15.	Create a friend function named total() to access the protected and private members of the food class.
16.	In the main() function, create objects of the admin, bookings, and food classes and call their respective functions as required.
17.	Use the friend function total() to calculate the total amount of the order and display it to the user.
18.	Exit the program.

