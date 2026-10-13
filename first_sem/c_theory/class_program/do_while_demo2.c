print("enter first student details:")
name=input("enter the name:")
english=int(input("enter the english mark:"))
maths=int(input("enter the maths mark:"))
python=int(input("enter the python mark:"))
totalmark=english+maths+python
percentage=totalmark/300*100


print("enter second student details:")
name2=input("enter the name:")
english2=int(input("enter the english mark:"))
maths2=int(input("enter the maths mark:"))
python2=int(input("enter the python mark:"))
totalmark2=english2+maths2+python2
percentage2=totalmark2/300*100

print(f"name\t\tpython\t\tmaths\t\tenglish\t\ttotal\t\tpercentage")
print(f"{name}\t\t{python}\t\t{maths}\t\t{english}\t\t{totalmark}\t\t{percentage}")
print(f"{name2}\t\t{python2}\t\t{maths2}\t\t{english2}\t\t{totalmark2}\t\t{percentage2}")