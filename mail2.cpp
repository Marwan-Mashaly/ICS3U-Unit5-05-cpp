// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: November 2019
// This program calculates the area of a triangle

#include <iostream>
#include <string>

std::string MailingAddress(std::string recipientName,
                      std::string recipientAddress,
                      std::string recipientMunicipality,
                      std::string recipientProvince,
                      std::string recipientPostalCode,
                      std::string recipientApartmentNumber = "") {
    // This function makes a mailing address in proper format

    // Variables
    std::string postAddress;

    // Process
    if (recipientApartmentNumber.size() != 0) {
        postAddress = recipientName + "\n" + recipientApartmentNumber + \
                      + "-" + recipientAddress + "\n" + recipientMunicipality \
                      + " " + recipientProvince + "  " + recipientPostalCode;
    } else {
        postAddress = recipientName + "\n" + recipientAddress + "\n" + \
                      recipientMunicipality + " " + recipientProvince + \
                      "  " + recipientPostalCode;
    }
    return postAddress;
}

int main() {
    // This function collects mailing details then outputs a mailing address

    // Variables
    std::string Name;
    std::string Address;
    std::string question;
    std::string city;
    std::string Province;
    std::string PostalCode;
    std::string post;
    std::string ApartmentNumber = "";

    // Input
    std::cout << "Enter your full name: ";
    std::getline(std::cin, Name);
    std::cout << "Enter your address: ";
    std::getline(std::cin, Address);
    std::cout << "Do you live in an apartment (y/n): ";
    std::getline(std::cin, question);
    if (question == "y" || question == "yes" || question == "Y") {
        std::cout << "Enter your apartment number: ";
        std::getline(std::cin, ApartmentNumber);
    }
    std::cout << "Enter your city: ";
    std::getline(std::cin, city);
    std::cout << "Enter your province: ";
    std::getline(std::cin, Province);
    std::cout << "Enter your postal code :";
    std::getline(std::cin, PostalCode);;

    // Process
    if (ApartmentNumber != "") {
        post = MailingAddress(Name, Address, city,
                              Province, PostalCode, ApartmentNumber);
    } else {
        post = MailingAddress(Name, Address, city, Province, PostalCode);
    }

    // Output
    std::cout << "" << std::endl;
    std::cout << post << std::endl;
}
