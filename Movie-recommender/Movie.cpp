#include <iostream>

#include "Movie.h"

Movie::Movie()
    : id_(0), released_year_(0),
      total_rating_(0.0), rating_count_(0) {}

Movie::Movie(int id, const std::string& title,
             const std::string& genre, int year)
    : id_(id), title_(title), genre_(genre),
      released_year_(year),
      total_rating_(0.0), rating_count_(0) {}
      
double Movie::GetAverageRating() const {
  if (rating_count_ == 0)
    return 0.0;
  return total_rating_ / rating_count_;
}

void Movie::AddRating(double r) {
  if (r < 0.0 || r > 5.0)
    return;
  total_rating_ += r;
  rating_count_++;
}

void Movie::Display() const {
  std::cout << id_ << ". " << title_
            << "(" << released_year_ << ")"
            << "\t평점: " << GetAverageRating()
            << "(" << rating_count_ << "건)"
            << std::endl;
}

// getter functions
int Movie::id() const {
  return id_;
}

std::string Movie::title() const {
  return title_;
}

std::string Movie::genre() const {
  return genre_;
}

int Movie::release_year() const {
  return released_year_;
}

int Movie::rating_count() const {
  return rating_count_;
}
