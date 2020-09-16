# DBMS_MAPS_STRUCT: Database Managemnet for a Hotel
>                                                                                                                                                                         
> `````````````FRONT END DESIGN``````````````````                                                                                                                               
>                                                                                                                                                                             
> 1. Utilizing Structure and Maps to accept and manage the rooms of a 5 Start Hotel in INDIA  
> 2. The business hours of the Hotel is from present day 7:00pm till next dat 7:00pm.                                                                                      
> 3. At 7:00 pm everyday, the Metadata of guests are updated with the present day's Guest Detils.                                                                             
>                                                                                                                                                                               
> `````````````BACK END DESIGN``````````````````                                                                                                                         
>                                                                                                                                                                              
> 1. At 7:00 pm the data of all the present day's guest list is stored into the Relational table is saves as a .csv file for performing Oracle RDBMS operations.                 
> 2. After the Guests Checkin, Everyday eveing at between 7:00pm-8:00pm they are asked for their preferences like Complementary Breakfast and Gym Booking.                       
> 3. The Preferences are tabulated and saved as a <GuestPreference.csv> file.                                                                                                     
> 5. The preferences are Joined to the day's Guest Database table <GuestList.csv>.
> 6. Now the updated Day's Guest Details<including the preferneces> are Pushed into the Guest Database which includs the metadata of all the guests residing in the hotel.       
> 7. According to the data in the Metadata or the parent table -> Count of the Breakfast is calculated for next day's Breakfast preperation.                                    

## Installation

You can copy this using this command:

```bash
git clone https://github.com/rksingh23/Cpp_RDBMS.git
```

### Run main:

You can run this using `blaze`:

```bash
bazel run src/main:main
```

### Run Tests:
> No Test for this project

## Installing Bazel
This repo uses `Bazel` for building C++ files.
You can install Bazel using this [link](https://docs.bazel.build/versions/master/install.html).
