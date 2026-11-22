#Input name of the student and marks in 5 subjects. Display pass is the percentage is more than or equal to 40 or else fail.

name = input ("Enter your name :")
eng = int (input("Enter English Marks :"))
hin = int (input ("Enter Hindi Marks :"))
math = int (input ("Enter Maths Marks :"))
sci = int (input ("Enter Science Marks :"))
sst = int (input ("Enter Social Science Marks :"))

avg = (eng + hin + math + sci + sst)/500
per = avg * 100

if per >= 50:
  print (name,"pass")
else:
  print (name,"fail")