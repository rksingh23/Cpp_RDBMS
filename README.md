# DBMS_MAPS_STRUCT: Database Managemnet for a Hotel
> Uses Structure and Maps to manage the rooms of a 5 Start Hotel in INDIA                                                                                                     
> After the data is stored the Relational table is saves as a .txt file for performing Oracle RDBMS operations.                                                             
> After the Guests Checkin, they are asked for their preferences like Complementary Breakfast and Gym Booking.                                                    
> The Preferences are tabulated and saved as a .csv file.                                                                                                     
> The preferences are not pushed to the main Guest Database, as "the preferences are asked from the guests every night. And we don't want to disturb the main DB that often."

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
