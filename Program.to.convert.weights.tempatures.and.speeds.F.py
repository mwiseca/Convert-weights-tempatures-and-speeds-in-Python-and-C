def choices():
    print('''    
                 ch     choices
                 x      exit
                 c      celcius to faharenheit
                 f      faharenheit to celcius
                 oz     ounces to pounds
                 lboz   pounds to ounces
                 g      grams to lbs
                 pg     pounds to grams
                 lbs    pounds to kilograms
                 kg     kilograms to pounds
                 kl     kilometers to miles
                 mk     miles to kilometers
                 mi     miles per hour to kilometers per hour
                 kph    kilometers per hour to miles per hour   ''')
    return ""


def celcius():
    while True:
        print("Enter tempature in celsius.")
        celsius = input()
        if celsius == "m":
            return "" 
        result = float(celsius)  / 5 * 9 + 32
        print (result)
        print("fahrenheit") 


def fahrenheit():
    while True:
        print("Enter a tempature in fahrenheit.")
        fahrenheit = input()
        if fahrenheit == "m":
            return ""
        result = ((float(fahrenheit)) - 32) * 5 / 9
        print (result)
        print ("celsious")


def ounces():
    while True:
        print("Enter a weight in ounces.")
        weight_oz = input()
        if weight_oz == "m":
            return ""
        weight_lbs = float(weight_oz) * 0.062500
        print(weight_lbs)
        print("pounds")


def pounds():
    while True:
        print("Enter a weight in pounds.")
        weight_lbs = input()
        if weight_lbs == "m":
            return ""
        weight_oz = float(weight_lbs) *16
        print(weight_oz)
        print("ounces")
    

def grams_lbs():
    while True:
        print("Enter a weight in grams.")
        weight_grams = input()
        if weight_grams == "m":
            return ""
        weight_lbs = float(weight_grams) *.00220462
        print(weight_lbs)
        print("pounds")


def pounds_grams():
    while True:
        print("Enter a weight in pounds.")
        weight_pounds = input()
        if weight_pounds == "m":
            return ""
        weight_grams = float(weight_pounds) * 453.59237
        print(weight_grams)
        print("grams")


def pounds_kilograms():
    while True:
        print("Enter a weight in lbs.")
        weight_lbs = input()
        if weight_lbs == "m":
            return ""
        weight_kg = float(weight_lbs) * 0.45359237
        print(weight_kg) 
        print("kilograms")


def kilograms_pounds():
    while True:
        print("Enter a weight in kg.")
        weight_kg = input()
        if weight_kg == "m":
            return ""
        weight_lbs = float(weight_kg) * 2.2046226218
        print(weight_lbs)
        print("pounds")


def kilo_miles():
    while True:
        print("Enter a distance in kilometers.")
        distance_klm = input()
        if distance_klm == "m":
            return ""
        distance_miles = float(distance_klm) * 0.62137119223733
        print (distance_miles)
        print("miles")


def miles_kilometers():
    while True:
        print("Enter a distance in miles")
        distance_miles = input()
        if distance_miles == "m":
            return ""
        distance_kilometers = float(distance_miles) *1.609344
        print(distance_kilometers)
        print("kilometers")


def miles_kilo():
    while True:
        print("Enter speed miles per hour.")
        speed_mph = input()
        if speed_mph == "m":
            return ""
        speed_klm = float(speed_mph) * 1.609344
        print(speed_klm)
        print("kilometers per hour")


def kph_to_mph():
    while True:
        print("Enter a speed in kilometers per hour.")
        speed_kpm = input()
        if speed_kpm == "m":
            return ""
        speed_mph = float(speed_kpm) / 1.609344
        print(speed_mph)
        print("Miles per hour")


functions = {
        "ch": choices,
        "c": celcius,
        "f": fahrenheit,
        "oz": ounces,
        "lboz": pounds,
        "g": grams_lbs,
        "pg": pounds_grams,
        "lbs": pounds_kilograms,
        "kg": kilograms_pounds,
        "kl": kilo_miles,
        "mk": miles_kilometers, 
        "mi": miles_kilo,
        "kph": kph_to_mph
}


choices()
while True:
    try:
        print("Enter m for main ch for choices x to exit.")
        switch = input()
        if switch == "x":
            break
        print(functions[switch]())
    except KeyError:
        print("Enter a selection from choices.\n")
    except ValueError:
        print("Enter a valid number. Start over.\n")


