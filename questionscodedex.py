# Write code below 💖
gryffindor = 0
hufflepuff = 0
ravenclaw = 0
slytherin = 0


def question1 ():
 global gryffindor, ravenclaw, hufflepuff, slytherin
 print("Q1) Do you like Day or Night? ")
 print("     1) Day")
 print("     2) Night")
 num1 = int(input("Your Number: "))

 if num1 == 1:
   print (" +1 for Gryffindor and RavenClaw ")
   gryffindor += 1
   ravenclaw += 1
 elif num1 == 2:
   print (" +1 for Hufflepuff and Slytherin ")
   hufflepuff += 1
   slytherin += 1
 else:
   print(" Wrong Input ")
  
def question2 ():
 global gryffindor, ravenclaw, hufflepuff, slytherin
 print("Q2) When I’m dead, I want people to remember me as: ")
 print("  1) The Good")
 print("  2) The Great")
 print("  3) The Wise")
 print("  4) The Bold")

 num2 = int(input(" What number do you want: "))

 if num2 == 1:
    print (" +2 for Hufflepuff ")
    hufflepuff += 2
 elif num2 == 2:
    print (" +2 for Slytherin ")
    slytherin += 2
 elif num2 == 3:
    print (" +2 for Ravenclaw")
    ravenclaw += 2
 elif num2 == 4:
    print(" +2 for Gryffindor")
    gryffindor += 2
 else:
    print(" Wrong Input ")

def question3 ():
 global gryffindor, ravenclaw, hufflepuff, slytherin
 print("Q3) Which kind of instrument most pleases your ear?")
 print("    1) The violin ")
 print("    2) The trumpet ")
 print("    3) The piano")
 print("    4) The drum")
 num3 = int(input(" Your number: "))

 if num3 == 1:
    print (" +4 for Hufflepuff ")
    hufflepuff += 4
 elif num3 == 2:
    print (" +4 for Slytherin ")
    slytherin += 4
 elif num3 == 3:
    print (" +4 for Ravenclaw")
    ravenclaw += 4
 elif num3 == 4:
    print(" +4 for Gryffindor")
    gryffindor += 4
 else:
    print(" Wrong Input ")

def final_scores ():
  print ("/n-----Final Scores -----")
  print (f" Scores of Gryffindor is",gryffindor)
  print (f" Scores of Hufflepuff is",hufflepuff)
  print (f" Scores of Ravenclaw is",ravenclaw)
  print (f" Scores of Slytherin is",slytherin)


question1 ()
question2 ()
question3 ()
final_scores()