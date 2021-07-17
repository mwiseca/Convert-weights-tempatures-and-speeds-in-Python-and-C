def ind():
    print('''                 i    index.
                 x    exit
                 c    celcius to faharenheit
                 f    faharenheit to celcius
                 oz   ounces to lbs
                 g    grams to lbs
                 lbs  lbs to kg             
                 kl   kilometers to miles   
                 mi   miles per hour to kilometers per hour
                 kph  kilometers per hour to miles per hour   ''')
     

ind()         
print("Enter i for index or x to exit.")
while True:
    try:
        convert = input("Enter a letter from index you want to convert. i for index ")
        if convert == "c":
            print("Enter tempature in celsius.")
            celsius = input()
            result = float(celsius)  / 5 * 9 + 32
            print (result)
            print("Fahrenheit")    
        elif convert == "f":
            print("Enter a tempature in fahrenheit.")
            fahrenheit = input()
            result = ((float(fahrenheit)) - 32) * 5 / 9
            print (result)
            print ("celsious")
        elif convert == "g":
            print("Enter a weight in grams.")
            weight_grams = input()
            weight_lbs = float(weight_grams) *.00220462
            print(weight_lbs)
            print("Pounds")
        elif convert == "lbs":
            print("Enter a weight in lbs.")
            weight_lbs = input()
            weight_kg = float(weight_lbs) * 0.45359237
            print(weight_kg) 
            print("kg")
        elif convert == "oz":
            print("Enter a weight in ounces.")
            weight_oz = input()
            weight_lbs = float(weight_oz) * 0.062500
            print(weight_lbs)
            print("pounds")
        elif convert == "kl":
            print("Enter a distance in kilometers.")
            distance_klm = input()
            distance_miles = float(distance_klm) * 0.62137119223733
            print (distance_miles)
            print("miles")
        elif convert == "mi":
            print("Enter speed miles per hour.") 
            speed_mph = input()
            speed_klm = float(speed_mph) * 1.609344
            print(speed_klm)
            print("kilometers per hour")
        elif convert == "kph":
            print("Enter a speed in kilometers per hour.")
            speed_kpm = input()
            speed_mph = float(speed_kpm) / 1.609344
            print(speed_mph)
            print("Miles per hour")
        elif convert == "i":
            ind()
        elif convert == "x":
            break
        else:
            print("Enter a valid leter from index.")
    except ValueError:
        print("Enter a valid number.")
  
    
 
            
            
    
        
        
    
        

 
            

            


            
