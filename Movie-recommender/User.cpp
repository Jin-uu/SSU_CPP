#include <iostream>
#include <string>

#include "User.h"

User::User(int id, const std::string& name, const std::string& email)
    : id_(id), name_(name), email_(email) {}

const void User::Display() const {
  std::cout << "User   - ID: " << id_ 
            << "\t\tName: " << name_
            << "\tEmail: " << email_ << std::endl;
}

// getter functions
int User::id() const {
  return id_;
}

std::string User::name() const {
  return name_;
}

std::string User::email() const {
  return email_;
}
