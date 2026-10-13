sum=0
count=0
for number in range(1,50,2):
     if number%2 ==0:
          sum = sum+number
print(sum)

for number in range(1,100):
     if number%3==0 and number%5==0:
          count=count+1
print(count)
print(number)

