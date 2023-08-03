while True:
  try:
    test=int(input())
    if(test==0):
            print("vai ter copa!")
    elif(test>0):
            print("vai ter duas!")
  except EOFError:
    break