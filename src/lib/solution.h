#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>

class Room 
{
  public:
    std::string Allocate_room(std::vector<std::vector<int>> &room1);
};

struct Guests {
//  Guests() : name("No Name"), age(0), phone("2139588865"), room("0000") {}
  Guests(const std::string &name_p,const int &age_p,const std::string &phone_p,const std::string &room_p) : name(name_p), age(age_p), phone(phone_p), room(room_p) {}
  std::string name;
  int age;
  std::string phone;
  std::string room;
};


#endif