#include <iostream>

#include "Movie.h"
#include "User.h"
#include "Rating.h"

void TestMovie() {
  Movie m1(1, "기생충", "드라마", 2019);
  Movie m2(2, "인터스텔라", "SF", 2014);

  m1.AddRating(4.8);
  m2.AddRating(4.9);

  m1.Display();
  m2.Display();

  m1.AddRating(5.0);
  m1.AddRating(6.0); // 유효성 검사로 무시됨

  std::cout << m1.title() << ": "
            << m1.GetAverageRating() << std::endl;
  // 기생충: 4.9  (4.8 + 5.0) / 2
}

void TestUser() {
  User u1(1, "박진우", "jinu@example.com");
  u1.Display();
}

void TestRating() {
  Rating r1(1, 1, 4.8);
  r1.Display();
}

int main() {
    TestMovie();
    TestUser();
    TestRating();
    return 0;
}