package main

import "fmt"



func main() {
    fmt.Println("Hello, World!")
    fmt.Println("enter a number")
    const conferenceTickets int = 50
	var remainingTickets uint = 50
	conferenceName := "Go Conference"

	fmt.Printf("Welcome to %v booking application.\nWe have total of %v tickets and %v are still available.\nGet your tickets here to attend\n", conferenceName, conferenceTickets, remainingTickets)

	var firstName string
	var lastName string
	var email string
	var userTickets uint

	// asking for user input
	fmt.Println("Enter Your First Name: ")
	fmt.Scanln(&firstName)

	fmt.Println("Enter Your Last Name: ")
	fmt.Scanln(&lastName)

	fmt.Println("Enter Your Email: ")
	fmt.Scanln(&email)

	fmt.Println("Enter number of tickets: ")
	fmt.Scanln(&userTickets)

	// book ticket in system
	remainingTickets = remainingTickets - userTickets

	fmt.Printf("Thank you %v %v for booking %v tickets. You will receive a confirmation email at %v\n", firstName, lastName, userTickets, email)
	fmt.Printf("%v tickets remaining for %v\n", remainingTickets, conferenceName)

    var bookings   [50]string
    bookings[0] = "booking 1"
    bookings[1] = "booking 2"
    bookings[2] = "booking 3"

    fmt.Printf("the whole array %v\n",bookings)
    fmt.Printf("the first element %v\n", bookings[0])

}