name = input ("Enter your name :")
eng = int (input("Enter English Marks :"))
hin = int (input ("Enter Hindi Marks :"))
math = int (input ("Enter Maths Marks :"))
sci = int (input ("Enter Science Marks :"))
sst = int (input ("Enter Social Science Marks :"))

R = (eng + hin + math + sci + sst)/5

if R >= 60 :
  print (name, "Got 1st Division")
elif R >= 45 and R < 60 :
  print (name, "Got 2nd Division")
elif R >= 33 and R  < 45 :
  print (name, "GOt 3rd Division")
else :
  print (name, "Failed")