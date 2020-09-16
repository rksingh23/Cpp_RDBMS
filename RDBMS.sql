/*RELTION DATABSE MANAGEMENT*/

/* ADDS TABLES BREAKFAST AND GYM to DaysUpdateTable <GuestList.csv>*/
ALTER TABLE DaysUpdateTable
ADD Breakfast varchar(5),
ADD GYM varchar(5);

/* INSERTS VALUE FROM PREFERENCES TABLE <GuestPreference.csv> TO THE DaysUpdateTable*/
INSERT INTO DaysUpdateTable (Breakfast, GYM)
SELECT Breakfast, GYM FROM DaysUpdateTablePreference dp, DaysUpdateTable d
WHERE d.Name=dp.Name;

/* PUSHING THE DaysUpdateTable into the METADATA_GuestDB*/
INSERT INTO MetaDataRooms
SELECT * FROM DaysUpdateTable;

/* CALCULATING THE NUMBER OF PEOPLE choosing to have breakfast using the METADATA_GuestDB details*/
SELECT count(Breakfast) as "Count" FROM MetaDataRooms where Breakfast='Yes';

/* CALCULATING THE NUMBER OF PEOPLE going to use GYM using the METADATA_GuestDB details*/
SELECT * FROM MetaDataRooms where GYM='Yes';
ORDER BY Room DESC;







