# file handling


# Write file 
file = open("test.txt","w")  # "w" means write mode
file.write("Hello Jai")
file.close()


# Read file 
file = open("test.txt","r")  # "r" means read mode
print(file.read())
file.close()

# better way to open file 
with open("test.txt","r") as file:
    print("file content: ",file.read())

