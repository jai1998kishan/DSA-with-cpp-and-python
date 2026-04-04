# Here are the most common data types you'll use in python 

# 1) integer

my_integer_var = 10;
print("Integer: ", my_integer_var)


# 2) float:
my_float_var = 4.98;
print("float: ", my_float_var)

# 3) boolean 

# 4) string

# 5) Set: An unordered collection of unique elements, like 
my_set_var = {7,"heelo",8.5}
print("set: ", my_set_var)


# 6) Dictionary: A collection of key-value pairs encosed in curly braces
my_dict_var = {"name":"alic","age":25}
print("dict: ", my_dict_var)


# 7) Tuple: An immutable ordered collection, enclosed in parenthese,
my_tuple_var = (7,"hello",8.5)
print("Tuple: ", my_tuple_var)


# 8) range: A sequence of number , often used in loops
my_range_var = range(5)
print("Range: ", my_range_var);


# 9) List : An ordered collection of elements that supports different data types.
my_list = [22,"hello world",3.14,True]
print("list: ",my_list)

# 10 None: A special value that represents the absence of a value.
my_none_var = None
print("None: ", my_none_var)


# To get the data type of a variable, you can use the type() function 

my_var_1 = "hellow world";
my_var_2 = 21
print(type(my_var_1))
print(type(my_var_2))

my_range_var = range(5)
print(type(my_range_var)) 

my_list = [22, 'Hello world', 3.14, True]
print(type(my_list))

my_none_var = None
print(type(my_none_var)) 



print(isinstance("hello world",str))
print(isinstance(True, bool))
print(isinstance(42, int))
print(isinstance("hello moto", int))
