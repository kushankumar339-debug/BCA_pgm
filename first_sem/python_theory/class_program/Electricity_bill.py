units=int(input("enter the number of units:"))
category=input("enter the category:")
threshold=int(input("is peak threshold found [yes/no]:"))
penalty=100
penaltyco=50

if category =="commercial":
    if units <= 100:
        bill = units * 10

    elif units > 100 and units < 300:
         bill =(100*10)+((units-100) * 12)

    else:
        bill =(100*10)+(100+12)+ ((units-200) * 15)
    if threshold == 1:
        bill = bill + penalty

else:
    if units <= 100:
        bill = units * 5

    elif units > 100 and units > 300:
        bill =(100*5) + ((units-100) * 6)

    else:
        bill = (100*5)+(100+6)+ ((units-200) * 8)
    if threshold == 1:
        bill = bill + penaltyco
print("bill:",bill)