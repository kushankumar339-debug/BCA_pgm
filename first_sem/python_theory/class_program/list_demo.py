marks = ["sachin",78,78,90,89,97]    #declares an list "marks" to store marks of "sachin"
my_mark=[]
# dynamic initialization
for number in range(5):
    newmark  = int(input("enter the marks:"))
    my_mark.append(newmark)

print("list elememts are:")
for i in range(len(my_mark)):
    print(my_mark[i])