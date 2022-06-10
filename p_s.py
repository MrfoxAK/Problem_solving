# Problem Sloving in python




#How to find average of N numbers in Python

# n = int(input("Enter how many num u want to avg: "))
# sum=0
# for i in range(n):
# 	num = float(input("Enter the number: "))
# 	sum += num
# avg = sum/n
# print(avg)




# How to find out the version of Python you are using
# n = int(input("Enter num: "))
# sum=n*(n+1)/2
# print(sum)





# How to get time of a Python program's execution
# import time
# n= 2
# def etime():
# 	start_time = time.time()
# 	s=0
# 	for i in range(1, n+1):
# 		s=n*n+i
# 	end_time = time.time()
# 	return end_time-start_time, s
# print(etime())




# How to Get the Current Username in Python
# import getpass
# print(getpass.getuser())




# How to access environment variables in Python
# import os
# print(os.environ['PATH'])




# How to do a profile a Python script
# import cProfile
# def sum():
# 	print(1,3)
# cProfile.run('sum')




# How to create a list and tuple with comma separated numbers in Python
# values = input("imput some numbers")
# list = values.split(" ")
# tuple = tuple(list)
# print("list is : ", list)
# print("tuple is: ",tuple)
# print(type(list))




# How to List all Files of a Directory in Python
# from os import listdir
# from os.path import isfile, join
# file_list = [i for i in listdir('/Users') if isfile(join('/Users', i))]




# How to Print Current Date and Time in Python
# import datetime
# now = datetime.datetime.now()
# print("Current date and time is: ", now.strftime("%y-%m-%d %H:%M:S"))




# 