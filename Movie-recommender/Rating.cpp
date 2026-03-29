#include <iostream>
#include <string>

#include "Rating.h"

Rating::Rating(int user_id, int movie_id, double score)
    : user_id_(user_id), movie_id_(movie_id) {
      if (score < 0.0 || score > 5.0){
        score_ = 0.0;
        return;
      }
      score_ = score;
    }

void Rating::Display() const {
  std::cout << "User ID: " << user_id_
            << "\tMovie ID: " << movie_id_
            << "\tScore: " << score_ << std::endl;
}

int Rating::user_id() const {
  return user_id_;
}

int Rating::movie_id() const {
  return movie_id_;
}

double Rating::score() const {
  return score_;
}
