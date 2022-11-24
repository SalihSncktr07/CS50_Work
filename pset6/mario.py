while True:
  try:
    h = int (input("Pyramid height?"))
  except ValueError:
    continue
  if  h < 1 or h > 8:
    continue

  else:
    r = 0                   #rows
    s =  h - (r + 1)        #spaces
    while h > r:            # print paces and hashes 
        print (' ' * s, end="")
        print ("#" * (r+1))
        r +=1
        s -=1
    else:
      break 