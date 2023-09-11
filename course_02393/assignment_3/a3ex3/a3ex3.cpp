#include <iostream>
#include <string>

// Enumeration to represent the regions of Denmark
enum Region { Hovedstaden, Midtjylland, Nordjylland, Sjaelland, Syddanmark };

// Array of region names corresponding to the enumeration
const char* regionNames[] = { "Hovedstaden", "Midtjylland", "Nordjylland", "Sjaelland", "Syddanmark" };

// Structure to represent contact information
struct ContactInfo {
    std::string firstName;
    std::string middleName;
    std::string lastName;
    std::string phoneNumber;
    std::string streetAddress;
    std::string houseNumber;
    std::string zipCode;
    Region region;
};

int main() {
    const int numPages = 50;
    ContactInfo addressBook[numPages];

    std::string command;
    while (std::cin >> command) {
        if (command == "add") {
            int page;
            std::string firstName, middleName, lastName, phoneNumber, streetAddress, houseNumber, zipCode, regionStr;

            std::cin >> page >> firstName >> middleName >> lastName >> phoneNumber >> streetAddress >> houseNumber >> zipCode >> regionStr;

            // Convert the region string to the Region enumeration
            Region region;
            if (regionStr == "Hovedstaden") {
                region = Hovedstaden;
            } else if (regionStr == "Midtjylland") {
                region = Midtjylland;
            } else if (regionStr == "Nordjylland") {
                region = Nordjylland;
            } else if (regionStr == "Sjaelland") {
                region = Sjaelland;
            } else if (regionStr == "Syddanmark") {
                region = Syddanmark;
            } else {
                region = Hovedstaden; // Default to Hovedstaden if region is invalid
            }

            // Check if the page exists and is empty
            if (page >= 1 && page <= numPages && addressBook[page - 1].firstName.empty()) {
                addressBook[page - 1] = {firstName, middleName, lastName, phoneNumber, streetAddress, houseNumber, zipCode, region};
            }
        } else if (command == "clr") {
            int page;
            std::cin >> page;

            // Check if the page exists
            if (page >= 1 && page <= numPages) {
                // Clear contact information for that page
                addressBook[page - 1] = ContactInfo();
            }
        } else if (command == "qry") {
            int page;
            std::cin >> page;

            // Check if the page exists and is not empty
            if (page >= 1 && page <= numPages && !addressBook[page - 1].firstName.empty()) {
                const ContactInfo& info = addressBook[page - 1];
                std::cout << info.firstName << "," << info.middleName << "," << info.lastName << ","
                          << info.phoneNumber << "," << info.streetAddress << "," << info.houseNumber << ","
                          << info.zipCode << "," << regionNames[info.region] << std::endl;
            }
        } else if (command == "quit") {
            break;
        }
    }

    return 0;
}
