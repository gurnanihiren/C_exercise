

s='Hello,World!'
print(s)
s="Hello World!"
print(s)
s='''Hello World!'''
print(s)
s="""Hello World!"""
print(s)
#s='It's Friday Today'                                      
s='It\'s Friday Today'
print(s)
print('Type Conversion in string')
print('_________________________')

s=76
x=str(s)
print(x)
print(type(x))

print('Taking input From user For string')
print('_________________________________')
s=input('Enter a string:')                                 
print(s)                                                    
                                                            
print(type(s))

print('Operations on string')
print('____________________')
x="Hello" + "World"                                         
print(x)

print("Gurnani" > "hiren")                                   

s="Sls"
print(s*(3))                                                 

print("" != "Gurnani")
print("Hiren" == "Hiren")

print('Logical Operation on strings')
print('____________________________')
print(" " and "hiren")                                       
print("Gurnani" and "Waheguru")
print("" or "Gurnani")                                          
print('Waheguru' or 'Gurnani')
print(not "")
print(not "Hiren")


print('String Deletion with Del Keyword')
print('________________________________')
string="Gurnani"
#string[0]='H'                                                     
string="Hiren"                                                     
#del(string[0])                                                              
#del(string)                                                                
#print(string)

print('Iteration Over Strings using For Loop in Python')
print('_______________________________________________')
string="Gurnani Hiren"
for i in string:
    print(i,end="")

i=0
string="Gurnani Hiren"
length=len(string)                                                               #13--0 to 12
print(length)
while(i < len(string)):
    print(string[i],end="")
    i=i+1


print('in Operator in String')
print('____________________')
x="sls"
if 'l' in x:
    print('Present')
else:
    print('Not Present')

print('\n')
print('Indexing in string')
x=input('Enter a string')
print(x[0])                                     #If empty string,Index Out of range error
print(x[4])                                     

print('String Slicing in Python')
print('_______________________')
x=input('Enter a string from user')
print(x[0:])
print(x[6:])
print(x[2:6])
print(x[-6:-3])
print(x[-8:-2])

print("Reversing String in Python")
print('__________________________')
print(x[::-1])
#print(x[::-100])   #Will Not throw an error.


print("Formatting of string")
print("____________________")
print("sls is a {} Company".format("Product"))
print("Value of x,y and z is {} {} {}".format(1,2,3))
print("My name is {}{}".format("Gurnani","Hiren"))
print("This is {},{} and {}".format("one","two","three"))
print("{0}{1}{2}{3}".format("GuruNanak","Guru-Angad","Guru-Amardas","Guru-Ramdas"))


print("Sting Built in Functions.")
print("_________________________")
x=input('Enter a string')

print(x.upper())
print(x.lower())
print(x.capitalize())           #same as x.title()
print(x.count('Hiren'))
print(x.find('Hiren'))
print(x.find('Hi'))
print(x.find('H'))
print(x.split())            #splits string and return List out of it.
#print(x.index('J'))
x="Geeks for geeks geeks geeks geeks geeks"
print(x.replace("geeks","Geeks",3))
print(x)

