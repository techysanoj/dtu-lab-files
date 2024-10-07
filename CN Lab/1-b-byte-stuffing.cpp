#include <iostream>
#include <vector>

std::vector<unsigned char> byteStuffing(const std::vector<unsigned char>& data, unsigned char byteToStuff) {
    std::vector<unsigned char> stuffedData;
    unsigned char escapeCharacter = 0x1B;  // Example escape character (can be any value)

    for (unsigned char byte : data) {
        if (byte == byteToStuff || byte == escapeCharacter) {
            stuffedData.push_back(escapeCharacter);
        }
        stuffedData.push_back(byte);
    }

    return stuffedData;
}

int main() {
    std::vector<unsigned char> data = {0x01, 0x02, 0x1B, 0x03, 0x04};  // Example data with a byte to stuff
    unsigned char byteToStuff = 0x03;  // Example byte to stuff
    std::vector<unsigned char> stuffedData = byteStuffing(data, byteToStuff);
    
    std::cout << "Original Data: ";
    for (unsigned char byte : data) {
        std::cout << std::hex << static_cast<int>(byte) << " ";
    }
    std::cout << std::endl;

    std::cout << "Stuffed Data: ";
    for (unsigned char byte : stuffedData) {
        std::cout << std::hex << static_cast<int>(byte) << " ";
    }
    std::cout << std::endl;

    return 0;
}
