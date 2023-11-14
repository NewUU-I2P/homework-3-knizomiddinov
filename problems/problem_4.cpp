#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::istringstream iss(macAddress);
    int octet;

    // Read the first octet to determine the type
    iss >> std::hex >> octet;

    if (iss.fail()) {
        // Handle invalid input
        return "Invalid MAC address";
    }

    return (octet % 2 == 0) ? "Unicast" : (octet == 0xFF) ? "Broadcast" : "Multicast";

    // make use of control flow statements
    // return result;
}
