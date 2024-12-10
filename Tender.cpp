#include "Tender.h"
#include <iostream>

// Конструктор
Tender::Tender(int tenderId, const std::string& name, const std::string& description)
    : tenderId(tenderId), name(name), description(description), status("Open") {}

// Геттери
int Tender::getTenderId() const {
    return tenderId;
}

std::string Tender::getName() const {
    return name;
}

std::string Tender::getDescription() const {
    return description;
}

std::string Tender::getStatus() const {
    return status;
}

// Методи
void Tender::addContract(int contractId) {
    contractIds.push_back(contractId);
    std::cout << "Contract ID " << contractId << " added to Tender " << tenderId << std::endl;
}

void Tender::updateStatus(const std::string& newStatus) {
    if (newStatus == "Open" || newStatus == "Closed" || newStatus == "Cancelled") {
        status = newStatus;
        std::cout << "Tender status updated to: " << newStatus << std::endl;
    }
    else {
        std::cout << "Invalid status!" << std::endl;
    }
}

void Tender::displayTenderInfo() const {
    std::cout << "Tender ID: " << tenderId << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Status: " << status << std::endl;
    std::cout << "Associated Contracts: ";
    if (contractIds.empty()) {
        std::cout << "None" << std::endl;
    }
    else {
        for (int id : contractIds) {
            std::cout << id << " ";
        }
        std::cout << std::endl;
    }
}

