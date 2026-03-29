#pragma once

#include <string>

class Movie {
 public:
    Movie();
    Movie(int id, const std::string& title,
          const std::string& genre, int year);

    void AddRating(double r);
    void Display() const;

    int id() const;
    std::string title() const;
    std::string genre() const;
    int release_year() const;
    double GetAverageRating() const;
    int rating_count() const;
          
 private:
    int id_;
    std::string title_;
    std::string genre_;
    int released_year_;
    double total_rating_;
    int rating_count_;
};
