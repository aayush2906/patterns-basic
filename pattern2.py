n=int(input("enter the no. of rows"))

for i in range(1,n+1):
      for j in range (1,n+1):
          if(j>=i):
              print("*", end="")
          else:
              print(" ",end="")
      print()
      
    '''
    n=5;
    
    *****
     ****
      ***
       **
        *
   '''
