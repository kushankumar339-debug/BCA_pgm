sum = 0
element = []
size =int(input("enter the list size:"))
for i in range(5):
    list=int(input("enter list element"))
    element.append(list)
    sum = sum + element[i]
print(element)
print("the sum of list element is:",sum)


