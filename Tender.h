#ifndef TENDER_H
#define TENDER_H

#include <string>
#include <vector>

class Tender {
private:
    int tenderId;
    std::string name;
    std::string description;
    std::string status;
    std::vector<int> contractIds;

public:
    // �����������
    Tender(int tenderId, const std::string& name, const std::string& description);

    // �������
    int getTenderId() const;
    std::string getName() const;
    std::string getDescription() const;
    std::string getStatus() const;

    // ������
    void addContract(int contractId);
    void updateStatus(const std::string& newStatus);
    void displayTenderInfo() const;
};

#endif // TENDER_H
