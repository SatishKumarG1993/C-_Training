#include <iostream>
#include <string>

int main() {
    // Array of strings
    std::string cities[4] = {
        "New York", "Los Angeles", "Chicago", "New Jersey"
    };

    char target = 'N';  // Character to check (strings starting with 'N')

    std::cout << "Strings that start with '" << target << "':" << std::endl;

    // Loop through each string in the array
    for (const auto& str : cities) {
        // Check if the string starts with the target character
        if (!str.empty() && str[0] == target) {
            std::cout << str << std::endl;  // Print the string
        }
    }

    return 0;
}
