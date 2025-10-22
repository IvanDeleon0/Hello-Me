ph_level = int(input(' What is the Ph Level? '))

if ph_level > 7:
    print (' Basic ')
elif ph_level < 7:
    print('Acidic')
else:
    print( ' Neutral ')