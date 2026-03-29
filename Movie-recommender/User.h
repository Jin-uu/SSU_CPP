#pragma once

#include <string>

class User {
 public:
  User(int id, const std::string& name, const std::string& email);

  const void Display() const;

  int id() const;
  std::string name() const;
  std::string email() const;

 private:
  int id_;
  std::string name_;
  std::string email_;
};
