#include <iostream>
#include <vector>

namespace tools
{
    std::string alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    void Encrypt(std::string payload, std::string key)
    {
        std::vector<char> chars = getPayloadChars(payload);
    }

    char getShiftedChar(char character, char key)
    {
    }

    std::vector<char> getPayloadChars(std::string payload)
    {
        std::vector<char> list;

        for (int i = 0; i != payload.length(); i++)
        {
            char currentChar = payload[i];

            list[i] = currentChar;
        }

        return list;
    }
}

int main()
{
    std::string payload;
    std::string key;

    std::cout << "Enter Payload :> ";
    std::cin >> payload;

    std::cout << "Enter Key :> ";
    std::cin >> key;
}