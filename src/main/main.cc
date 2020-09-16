#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <string>

//header for reading and Writting to a file
#include <fstream>

int main()
{
  Room object;

  std::map<std::string,Guests> details;

  std::string name;
  std::string temp;
  std::string phone;
  int age;
  std::string room_allocate;
  int decision=1;
  std::string choice;
  std::string choose;


  int nofloor=20;
  int room=15;
  std::vector<std::vector<int>> room1(nofloor, std::vector<int> (room,0));


while (decision==1)
{

  std::cout<<"Enter Your choices"<<std::endl;
  std::cout<<"1. Enter Guest Details"<<std::endl;
  std::cout<<"2. Display Guest Database"<<std::endl;
  std::cout<<"3. Delete a Guest Details from the Database"<<std::endl;
  
  getline(std::cin,choose);

  if (!(choose.compare("1")))
  {
  std::cout<<"Enter the name of the guest"<<std::endl;
  getline(std::cin,name);
  std::cout<<"Enter the age of the guest"<<std::endl;
  getline(std::cin,temp);
  age=stoi(temp);
  std::cout<<"Enter the Phone Number of the guest"<<std::endl;
  std::cout<<"Please ignore spaces or - and . between the numbers"<<std::endl;
  getline(std::cin,phone);

  //Guests object(name, age, phone, room_allocate);
  room_allocate=object.Allocate_room(room1);
  std::cout<<"The Room Number allocated to the guest is - "<<room_allocate<<std::endl;
  
  //Inserting values to the map
  std::pair<std::string, Guests> map_details(name, Guests(name, age, phone, room_allocate));
  details.insert(map_details);

  }

  else if (!(choose.compare("2")))
  {
    //std::map<std::string,int>::iterator it;

    for(auto n:details)
    {
      std::cout<<"Details for: "<<n.first<<std::endl;
      std::cout<<"       Name: "<<n.second.name<<std::endl;
      std::cout<<"        Age: "<<n.second.age<<std::endl;
      std::cout<<"      Phone: "<<n.second.phone<<std::endl;
      std::cout<<"Room Number: "<<n.second.room<<std::endl;
    }
  }

  else if (!(choose.compare("3")))
  {
  std::cout<<"Are you sure that you want to delete the details of a guest from the database?"<<std::endl;
  std::cout<<"This is a permanent deletion, Press 1 for option- Yes delete "<<std::endl;
  std::cout<<"Press any other number for skipping deletion"<<std::endl;
  
  getline(std::cin,choice);

  if (!(choice.compare("1")))
   {
    std::cout<<"Enter the Exact name of the Guest from the list below: "<<std::endl;
    for(auto n:details)
    {std::cout<<n.first<<" , ";}
    std::cout<<std::endl;

    getline(std::cin,name);
    details.erase(name);
   }

  std::cout<<"Do you want to recheck the deletion of the guest from the database?"<<std::endl;
  std::cout<<"Press 1 for Yes, print the complete dtabase and perform manual checking "<<std::endl;
  std::cout<<"Press any other number for skipping recheck"<<std::endl;
  getline(std::cin,choice);
  if (!(choice.compare("1")))
  {
   for(auto n:details)
    {
      std::cout<<"Details for: "<<n.first<<std::endl;
      std::cout<<"       Name: "<<n.second.name<<std::endl;
      std::cout<<"        Age: "<<n.second.age<<std::endl;
      std::cout<<"      Phone: "<<n.second.phone<<std::endl;
      std::cout<<"Room Number: "<<n.second.room<<std::endl;
    }
  }

  }

  std::cout<<"Do you want to repeat the process again?"<<std::endl;
  std::cout<<"Press 1 for Yes"<<std::endl;
  std::cout<<"Press 2 for No and Generate the output SQL Relational table"<<std::endl;

  getline(std::cin,temp);
  decision=stoi(temp);
}

  std::ofstream myfile ("/home/cs104/Desktop/EE599/EE599_practise/Github/Hotel_Maps_Struct/GuestList.csv");
  if (myfile.is_open())
  {
    myfile << "Name,Age,Phone,Room\n";
    for(auto n:details)
    {
      myfile<<n.second.name<<","<<n.second.age<<","<<n.second.phone<<","<<n.second.room<<std::endl;
    }
    myfile.close();
  }
  else std::cout << "Unable to open file";

  return 0;
}


