#include <cstdlib>
#include <ctime>
#include<iostream>
#include<iomanip>
using namespace std;

enum chocolate { FERRERO, LINDT, HERSHEYS, CADBURY, PATCHI, TOBLERONE};
string chocolate_names[] = {"FERRERO", "LINDT", "HERSHEYS", "CADBURY", "PATCHI", "TOBLERONE"};

const int total_types = 6; //the shop contains only 6 types of chocolate
const int cols = 2; // for each type the array should keep tack of:
					// number of pieces for this type - price per piece
					
void set_data(int [][cols]);
void program_menu(int [][cols]);
void print_data(int [][cols]); //YOU NEED TO IMPLEMENT THIS FUNCTION
void update_data(int [][cols]);



int main()
{
	int chocolate_database[total_types][cols]; // type - number of pieces - price per piece
	
	set_data(chocolate_database);
	program_menu(chocolate_database);
	
	return 0;
}

void set_data(int data_array[][cols])
{
	srand((unsigned) time(0));
	for(int i=0; i < total_types; i++)
	{
		data_array[i][0] = rand() % 100;
		data_array[i][1] = 1.0 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(10.0-1.0)));
	}
}
		

void program_menu(int data[][cols])
{
	int choice = 0;
	
	cout << "Welcome to The Chocolate Shop!\n";
	
	do{
		
		cout << "Please pick from the menu below what you want to do:\n";
		cout << "1. Display chocolate Database.\n";
		cout << "2. Update chocolate Database.\n";
		cout << "3. Exit Prgram.\n";
	
		cin >> choice;	
		
		switch(choice)
		{
			case 1:
				//STEP 2. MAKE THE APPROPRIATE CALL HERE
				break;
			case 2:
				update_data(data);
				break;
			case 3:
				cout << "Bye bye.\n";
				choice = 0;
				break;
			default:
				cout << "Invalid selection. Please try again.\n";
				choice = 10;
		}
		
		cout << "======================================================\n";

	}while(choice);
	
}


void update_data(int data[][cols])
{
	int selected_type, col_to_update, new_value;//type to be updated
	
	do{
		cout << "Please select the type of chocolate you want to update:\n";
	
		for(int i=0; i< total_types; i++)
			cout << i+1 << ". " << chocolate_names[i] << endl;

		cin >> selected_type;
		selected_type--;
	} while(selected_type < 0 || selected_type >= total_types);
	
	
	cout << "Please select which column you want to update for " << chocolate_names[selected_type];
	cout << "\n0. Update number of pieces\t1. Update price per piece\n";
	
	cin >> col_to_update;
	
	cout << "Enter the new " <<  ((col_to_update)?"price" : "number")<< " for " << chocolate_names[selected_type] << ":\n";
	cin >> new_value;
	
	data[selected_type][col_to_update] = new_value;
	
}

//STEP 1. Implement the missing function here
