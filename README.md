# DBMS_MAPS_STRUCT: Database Managemnet for a Hotel
> 1. Uses Structure and Maps to manage the rooms of a 5 Start Hotel in INDIA                                                                                                     
> 2. At 7:00 pm the data of all the day's guest list is stored into the Relational table is saves as a .csv file for performing Oracle RDBMS operations.                           
> 3. After the Guests Checkin, During eveing 7:00pm they are asked for their preferences like Complementary Breakfast and Gym Booking.                                             
> 4. The Preferences are tabulated and saved as a .csv file.                                                                                                     
> 5. The preferences are Joined to the day's Guest Database table.
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
