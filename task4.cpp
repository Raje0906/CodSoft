#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the list of tasks
void displayTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "Your to-do list is empty!" << endl;
    } else {
        cout << "To-Do List:" << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

// Function to add a new task
void addTask(vector<string>& tasks) {
    cout << "Enter the task description: ";
    string task;
    cin.ignore();  // To clear the input buffer
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully!" << endl;
}

// Function to delete a task
void deleteTask(vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks to delete!" << endl;
        return;
    }
    displayTasks(tasks);
    cout << "Enter the task number to delete: ";
    int taskNumber;
    cin >> taskNumber;
    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number!" << endl;
    } else {
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task deleted successfully!" << endl;
    }
}

int main() {
    vector<string> tasks;
    int choice;

    while (true) {
        // Display menu options
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add a task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Delete a task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                displayTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                cout << "Exiting To-Do List Manager. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
