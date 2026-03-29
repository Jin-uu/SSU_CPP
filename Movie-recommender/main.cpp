#include <iostream>
#include <string>
#include <vector>

#include "Movie.h"
#include "User.h"
#include "Rating.h"

void TestMovie() {
  std::cout << "=== Test Movie Class ===" << std::endl;

  Movie m1(1, "기생충", "드라마", 2019);
  Movie m2(2, "인터스텔라", "SF", 2014);

  m1.AddRating(4.8);
  m2.AddRating(4.9);

  m1.Display();
  m2.Display();

  m1.AddRating(5.0);
  m1.AddRating(6.0); // 유효성 검사로 무시됨

  std::vector<Movie> movies;
  movies.push_back(m1);
  movies.push_back(m2);
  
  for (const auto& movie : movies) {
    std::cout << movie.title() << ": " << movie.GetAverageRating() << std::endl;
  }
}

void TestUser() {
  std::cout << "=== Test User Class ===" << std::endl;
  User user_1(1, "박진우", "jinu@example.com");
  User user_2(2, "홍길동", "hong@example.com");
  user_1.Display();
  user_2.Display();

  std::vector<User> users;
  users.push_back(user_1);
  users.push_back(user_2);
  
  for (const auto& user : users) {
    std::cout << user.name() << ": " << user.email() << std::endl;
  }
}

void TestRating() {
  std::cout << "=== Test Rating Class ===" << std::endl;
  Rating rating_1(1, 1, 4.8);
  Rating rating_2(1, 2, 9.9); // 유효성 검사로 score 0.0으로 설정
  rating_1.Display();
  rating_2.Display();

  std::vector<Rating> ratings;
  ratings.push_back(rating_1);
  ratings.push_back(rating_2);

  for (const auto& rating : ratings) {
    std::cout << "User ID: " << rating.user_id() 
              << ", Movie ID: " << rating.movie_id() 
              << ", Score: " << rating.score() << std::endl;
  }
}

int main() {
    TestMovie();
    TestUser();
    TestRating();
    return 0;
}