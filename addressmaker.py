d=[] 
d.append(raw_input("What is your name?"))
d.append(raw_input("What is your housenumber?"))
d.append(raw_input("What is your street?"))
d.append(raw_input("What is your city?"))
d.append(raw_input("What is your state?"))
d.append(raw_input("What is your zipcode?"))
d.append(raw_input("What is your country?"))
def address(d):
    print (d[0])
    print (d[1],d[2])
    print (d[3],d[4])
    print (d[5])
    print (d[6])
address(d)