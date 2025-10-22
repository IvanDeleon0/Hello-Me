
height = int(input('What is your Height? '))
credits =  int(input('How much Credits do you have? '))

if height >= 137 and credits >= 10:
  print ('Enjoy the ride!')
elif height >= 137 or credits <= 10:
    print("You don't have enough credits.")
elif height <= 137 or credits >= 10:
    print("You are not tall enough to ride.")
else:
    print("You did not met the requirements.")