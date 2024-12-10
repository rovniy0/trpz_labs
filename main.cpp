#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Contract {
private:
    int contractId;
    std::string status;
    time_t creationDate;
    int tenderId;

public:
    // Конструктор
    Contract(int tenderId) {
        this->contractId = rand() % 9000 + 1000; // Генерація ID (від 1000 до 9999)
        this->tenderId = tenderId;
        this->creationDate = time(nullptr); // Поточна дата
        this->status = "Draft"; // Початковий статус
    }

    // Геттери
    int getContractId() const {
        return contractId;
    }

    std::string getStatus() const {
        return status;
    }

    time_t getCreationDate() const {
        return creationDate;
    }

    int getTenderId() const {
        return tenderId;
    }

   
};

int main() {
    return 0;
}
