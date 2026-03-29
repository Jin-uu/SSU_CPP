#pragma once

#include <string>

class Rating {
 public:
  Rating(int user_id, int movie_id, double score);

  void Display() const;

  int user_id() const;
  int movie_id() const;
  double score() const;

 private:
  int user_id_;
  int movie_id_;
  double score_;
};
