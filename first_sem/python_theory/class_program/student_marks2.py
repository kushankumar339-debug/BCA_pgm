sub1=0
sub2=0
sub3=0
total=0
name=""
roll=0
avg=0.0
per=0.0
grade=""
def student_in():
    global sub1,sub2,sub3,roll,name
    roll=int(input("ENTER THE ROLLNUMBER"))
    name=input("ENTER THE NAME ")
    sub1=int(input("ENTER 1ST MARK"))
    sub2=int(input("ENTER 2ND MARK"))
    sub3=int(input("ENTER 3RD MARK"))
def total_mark():
    global sub1,sub2,sub3,total
    total=sub1+sub2+sub3
    return total
def avg_mark():
    global avg,total
    avg=total//3

def percentage_marks():
    global total,per
    per=total/300*100
def grade_got():
    global per,grade
    if per>=90:
        grade="distingstion"
    elif per>80:
        grade="first class"
    elif per>70:
        grade="second clas"
    elif per>50:
        grade="third class"
    elif per>45:
        grade="just pass"  
    else:
        grade="fail"                  
def out_put():
    global roll,name,total,avg,grade
    print(f"ROOL NUMBER {roll}\nNAME:{name}\nTOTAL :{total}\nAVG :{avg} \nGRADE:{grade} ")
n=int(input("ENTER NUMBER OF STUDENT:"))
for i in range(n):
  print(f"-------------ENTER STUDENT {i+1} DETAILS------------")
  student_in()
  total_mark()
  avg_mark()
  percentage_marks()
  grade_got()
  out_put() 


