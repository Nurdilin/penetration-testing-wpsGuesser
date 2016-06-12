# wps_guesser
A simple program that tries to guess a default wps pin based on MAC

This program works, based on the assumption that an ESSID
with a n-digit ending name is build by using the MACs last 6 digits
These digits are used by some ventors to create the WPS pin of the device.

That is a very unsercure approach of creating a WPS pin and the users should be aware
of it and either turn this feature off or change the default pin.

This simple code was created to demonstrate the vulnerability of this approach 
and should only be used for educational purposes.



