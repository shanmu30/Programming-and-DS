# Python code to demonstrate naive 
# method to compute gcd ( recursion ) 

def hcfnaive(a,b): 
	if(b==0): 
		return a 
	else: 
		return hcfnaive(b,a%b) 

a = 12
b= 6

# prints 12 
print ("The gcd of 60 and 48 is : ",end="") 
print (hcfnaive(12,6)) 

