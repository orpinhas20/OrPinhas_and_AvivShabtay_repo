#include "Booking.h"
#include "Guest.h"
#include "Pool.h"
#include "KitchenEmployee.h"
#include "EntertainmentEmployee .h"
#include "Hotel.h"

#include <iostream>

using namespace std;

/* Display all the interface the hotel allows to the system manager. */
void showMenu(Hotel& hotel);

/* Get input and create new guest. */
Guest* createGuest();

/* Get input and create new booking. */
void createNewBooking(Hotel& hotel);

/* Get user input and create new employee. */
Employee* createEmployee();

/* Get user input and add new employee to shift. */
void addNewEmployeeToShift(Hotel& hotel);

/* Get user input and searches for guest details. */
const Booking& findGuestBooking(Hotel& hotel, Guest& guest);

/* Display the booking of guest. */
void displayGuestBooking(Hotel hotel);

/* Return the count of the available rooms in this hotel. */
void howMuchRoomsAvailable(const Hotel& hotel);

/* Get user input, */
void addNewGuestToExistingBooking(Hotel& hotel);

/* Get user input and close existing booking. */
void closeExistingBooking(Hotel& hotel);

/* Define the available types of employees in the system. */
enum EmployeeType
{
	Entertainment = 0,
	Kitchen = 1
};

int main()
{
	// Create new Hotel:
	const Pool pool(false, "Sunday-Saturday, 08:00 AM - 06:00 PM");
	Hotel hotel(20, "My Hotel!", pool);
	bool exit = false;

	try
	{
		while (!exit)
		{
			showMenu(hotel);

			int userChoice = -1;
			cin >> userChoice;

			switch (userChoice)
			{
			case 1:
			{
				cout << hotel << endl;
				break;
			}
			case 2:
			{
				createNewBooking(hotel);
				break;
			}
			case 3:
			{
				addNewEmployeeToShift(hotel);
				break;
			}
			case 4:
			{
				displayGuestBooking(hotel);
				break;
			}
			case 5:
			{
				howMuchRoomsAvailable(hotel);
				break;
			}
			case 6:
			{
				addNewGuestToExistingBooking(hotel);
				break;
			}
			case 7:
			{
				closeExistingBooking(hotel);
				break;
			}
			case 8:
			{
				exit = true;
				break;
			}
			default:
			{
				// Do nothing
				break;
			}
			}

		}
	}
	catch (const std::exception& exception)
	{
		cout << exception.what() << endl;
		return 1;
	}

	return 0;
}

void showMenu(Hotel& hotel)
{
	cout << "\nWelcome to " << hotel.getName() << endl;
	cout << "Please choose which action you want to preform:" << endl;
	cout << "\t1 - Display the hotel details" << endl;
	cout << "\t2 - Create new booking in the hotel" << endl;
	cout << "\t3 - Add new employee to a shift" << endl;
	cout << "\t4 - Search booking by guest details" << endl;
	cout << "\t5 - Display which rooms available" << endl;
	cout << "\t6 - Add guest to an existing booking" << endl;
	cout << "\t7 - Close existing booking" << endl;
	cout << "\t8 - Exit the application" << endl;
}

void createNewBooking(Hotel& hotel)
{
	int numberOfGuests;
	cout << "Please enter number of guests for this booking: ";
	cin >> numberOfGuests;

	Guest** guests = new Guest * [numberOfGuests];
	if (nullptr == guests)
	{
		throw std::runtime_error("Could not allocate memory for guests");
	}

	for (int i = 0; i < numberOfGuests; ++i)
	{
		Guest* newGuest = createGuest();
		guests[i] = newGuest;
	}

	hotel.createBooking(guests, numberOfGuests);
}

Employee* createEmployee()
{
	char employeeName[10] = { 0 };
	cout << "Please enter name (10 chars max): ";
	cin >> employeeName;

	int employeeAge = 0;
	cout << "Please enter employee age: ";
	cin >> employeeAge;

	int employeeJobScope = -1;
	cout << "Please enter employee job scope: ";
	cin >> employeeJobScope;

	int workingOnSaturday = -1;
	cout << "Please enter if the employee is willing to work on saturday (0-No, 1-Yes): ";
	cin >> workingOnSaturday;
	bool doesWorkOnSaturday = (workingOnSaturday == 1 ? true : false);

	int employeeType = -1;
	cout << "Please provide the type of employee (0=Entertainment, 1=Kitchen): ";
	cin >> employeeType;

	if (employeeType == EmployeeType::Entertainment)
	{
		// Hotel will set this value to the available room:
		const int roomNumber = -1;

		char capability[10];
		cout << "Please enter the employee capability (10 chars max): ";
		cin >> capability;

		EntertainmentEmployee* newEmployee = new EntertainmentEmployee(employeeAge, employeeName, employeeJobScope, doesWorkOnSaturday,
			roomNumber, capability);
		if (nullptr == newEmployee)
		{
			throw std::runtime_error("Could not allocate memory for the entertainment employee");
		}

		return newEmployee;
	}
	else if (employeeType == EmployeeType::Kitchen)
	{
		char specialty[10];
		cout << "Please enter the employee specialty (10 chars max): ";
		cin >> specialty;

		KitchenEmployee* newEmployee = new KitchenEmployee(employeeAge, employeeName, employeeJobScope, doesWorkOnSaturday,
			specialty);
		if (nullptr == newEmployee)
		{
			throw std::runtime_error("Could not allocate memory for the Kitchen employee");
		}

		return newEmployee;
	}

	// Invalid employee type:
	cout << "Invalid employee type" << endl;
	return nullptr;
}

Guest* createGuest()
{
	char guestName[10] = { 0 };
	cout << "Please enter guest name (10 chars max): ";
	cin >> guestName;

	int guestAge = 0;
	cout << "Please enter guest age: ";
	cin >> guestAge;

	// Hotel will set this value to the available room:
	const int roomNumber = -1;

	Guest* newGuest = new Guest(guestAge, guestName, roomNumber);
	if (nullptr == newGuest)
	{
		throw std::runtime_error("Could not allocate memory for guest");
	}

	return newGuest;
}

void addNewEmployeeToShift(Hotel& hotel)
{
	Employee* newEmployee = createEmployee();
	hotel.addEmployeeToShift(newEmployee);
}

const Booking& findGuestBooking(Hotel& hotel, Guest& guest)
{
	int roomNumber = -1;
	cout << "Please enter the guest room number, (if you cannot remember enter -1): ";
	cin >> roomNumber;

	guest.setRoomNumber(roomNumber);

	const Booking& foundedBooking = hotel.findBooking(guest);

	return foundedBooking;
}

void displayGuestBooking(Hotel hotel)
{
	Guest* guest = createGuest();

	const Booking& foundedBooking = findGuestBooking(hotel, *guest);

	cout << foundedBooking << endl;

	delete guest;
}

void howMuchRoomsAvailable(const Hotel& hotel)
{
	const int numberOfAvailableRooms = hotel.getAvailableRooms();
	if (numberOfAvailableRooms <= 0)
	{
		cout << "There are: no available rooms in the hotel." << endl;
	}
	else
	{
		cout << "There are: " << numberOfAvailableRooms << " rooms available" << endl;
	}
}

void addNewGuestToExistingBooking(Hotel& hotel)
{
	Guest* guest = createGuest();

	cout << "Find the booking for the guest by guest friend:" << endl;
	Guest* guestFriend = createGuest();

	const Booking& existingBooking = hotel.findBooking(*guestFriend);

	hotel.addGuestToBooking(existingBooking, *guest);

	// Release memory of only the saved guest:
	delete guestFriend;
}

void closeExistingBooking(Hotel& hotel)
{
	cout << "Find the booking by the guest details:" << endl;
	Guest* guest = createGuest();

	const Booking& bookingToClose = findGuestBooking(hotel, *guest);

	hotel.closeBooking(bookingToClose);
}
