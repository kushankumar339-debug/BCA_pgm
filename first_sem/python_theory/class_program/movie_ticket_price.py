age=int(input("enter your age:"))
day=input("enter the day:")
weekday = "monday","tuesday","wednesday","thursday","friday"
price=250
weekend = "saturday","sunday"
if(day == weekday):
    price = price
    print("price:",price)
    if(age<=5):
        print("child")
        price = price  * 50/100 
        print("price:",price)
    elif(age<=59):
        print("adult")
        price = price
        print("price:",price)
    else:
        print("senior citizen")
        price = price * 10/100
        print("price:",price)
    
      

else:
    price = price + price*75/100
    print("price:",price)

    if(age<=5):
          print("child")
          price = price  * 50/100 
          print("price:",price)
    elif(age<=59):
        print("adult")
        price = price
        print("price:",price)
    else:
        print("senior citizen")
        price = price * 10/100
        print("price:",price)

  