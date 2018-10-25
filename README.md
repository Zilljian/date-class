**Date class contains methods for:** 
* Setting Date (whether through ms(long) or through yearMonthDay (int,int,int))
* Setting current Date
* Getting Date through ms or through dd/mm/yyyy format

 **Likewise, implemented operators:**
* \+ (for Date + Date and Date + long (long + Date))
* \- (Date - Date and Date - long)
* <, >, ==, != 

 Also, << (output to stream) and >> (input from stream) are implemented.

## A friendly remainder: 

Try to avoid using *localtime()* from time.h. Use *localtime_r()* insted, because *localtime()* change every 
existing pointer to tm struct. As a result, every existing tm struct becomes containing similar data.
