//CSC 134
//M5LAB1-own adventure
//Edith Gonzalez
//04-13-25

#include <iostream>
#include <string>
using namespace std;

// --- Functions ---
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void mystery_basement();
void hidden_garden();

int main() {
    main_menu();
    return 0;
}

// --- Menu with user input ---
void main_menu() {
    int choice;

    cout << "Welcome to your Adventure!\n";
    cout << "You wake up in front of a mysterious house.\n";

    do {
        cout << "\nChoose an option:\n";
        cout << "1. Go through the front door\n";
        cout << "2. Sneak around the back\n";
        cout << "3. Go home\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            choice_front_door();
        } else if (choice == 2) {
            choice_back_door();
        } else if (choice == 3) {
            choice_go_home();
        } else if (choice == 4) {
            cout << "Goodbye! Thanks for playing.\n";
        } else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);
}

// --- story ---

void choice_front_door() {
    cout << "\nYou boldly walk through the front door. It's eerily quiet.\n";
    cout << "You see stairs going down into a dark basement.\n";
    cout << "Do you:\n";
    cout << "1. Enter the basement\n";
    cout << "2. Run back outside\n";

    int sub_choice;
    cin >> sub_choice;

    if (sub_choice == 1) {
        mystery_basement();
    } else {
        cout << "You escape safely, heart pounding.\n";
    }
}

void choice_back_door() {
    cout << "\nYou sneak around the back and find a garden gate slightly open.\n";
    cout << "Do you:\n";
    cout << "1. Enter the garden\n";
    cout << "2. Return to the front\n";

    int sub_choice;
    cin >> sub_choice;

    if (sub_choice == 1) {
        hidden_garden();
    } else {
        choice_front_door();  // loops back to another path
    }
}

void choice_go_home() {
    cout << "\nYou decide this isn't your problem and head home.\n";
    cout << "But something about that house stays with you...\n";
}

// --- Extra ---

void mystery_basement() {
    cout << "\nYou step carefully into the basement. It's pitch black...\n";
    cout << "Suddenly, the lights flicker on and you see a treasure chest!\n";
    cout << "Inside is a map leading to your next adventure.\n";
}

void hidden_garden() {
    cout << "\nYou walk into the hidden garden. It's overgrown but beautiful.\n";
    cout << "At the center, you find a glowing key on a stone pedestal.\n";
    cout << "What does it open? That's a story for another time...\n";
}
