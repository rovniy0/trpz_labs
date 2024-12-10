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

    // Методи
    void updateStatus(const std::string& newStatus) {
        if (newStatus == "Draft" || newStatus == "Active" || newStatus == "Completed") {
            status = newStatus;
            std::cout << "Status updated to: " << newStatus << std::endl;
        }
        else {
            std::cout << "Invalid status!" << std::endl;
        }
    }

    void displayContractInfo() const {
        std::cout << "Contract ID: " << contractId << std::endl;
        std::cout << "Tender ID: " << tenderId << std::endl;
        std::cout << "Creation Date: " << ctime(&creationDate);
        std::cout << "Status: " << status << std::endl;
    }
};

int main() {
    // Приклад використання
    Contract contract(1234); // Створюємо контракт із TenderId = 1234
    contract.displayContractInfo();

    contract.updateStatus("Active");
    contract.displayContractInfo();

    contract.updateStatus("InvalidStatus"); // Спроба оновлення на неправильний статус

    return 0;
}
