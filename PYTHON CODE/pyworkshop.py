#list ops
# listv=[0,2,3,4,5,6]
# listv[1]=200
# listv[5]=50
# # print(listv)

#slicing
# mylist=[10,"APPLE",12,13,14]
# print(mylist[1:2])
# print(mylist[:2])
# print(mylist[-3:-1])

#list updating 

# mylist=[10,"apple",12,13,14]
# mylist[1:2]=[20,30]
# print(mylist)

# mylist.insert(3,40)
# print(mylist)

# mylist.append(15)
# print(mylist)

# del mylist[2]   
# print(mylist)          

# mylist.clear()
# print(mylist)

#merging list
# mylist1=[10,20,30]
# mylist2=[40,50,60,70]
# newlist=mylist1+mylist2
# print(newlist)

# mylist1.extend(mylist2)
# # print(mylist1)

#tuple

#set{}
# myset1={"apple",10,"orange","grapes",20.0}
# myset2={30.0,10,"orange","apple",40}
# print(myset1 | myset2)
# print(myset1.union(myset2))

# print(myset1 & myset2)
# print(myset1.intersection(myset2))

# print(myset1-myset2)
# print(myset1.difference(myset2))

# print(myset1^myset2)
# print(myset1.symmetric_difference(myset2))

#Dictionary
# mydict={"sandy":20,"john":25,"jane":22}
# print(mydict.items())
# print(mydict.keys())
# print(mydict.values())
# print(mydict["sandy"])
# mydict["sandy"]=30
# print(mydict.items())
# mydict.update(("sandy:40"))
# print(mydict.items())

# mydict={"sandy":20,"john":25,"jane":22}
# mydict.pop("sandy")
# print(mydict.items())

# mydict.popitem()
# print(mydict.items())

# del mydict["sandy"]
# print(mydict.items())
 
#python_fucntuions
# def calc_sum(a,b):
#     sum=a+b
#     print(sum)
#     return sum
# calc_sum(1,2)

# def avg(a,b,c,d):
#     sum=a+b+c+d
#     avg=sum/4
#     print(avg)
#     return avg
# avg(10,20,20,10)

# import testmodule
# print("sum:" ,testmodule.sum(10,20))
# print("mul:",testmodule.mul(20,5))

# def func(a,b=5,c=10):
#     print('a is',a,'and b is',b,'and c is',c)
#     func(3,7)
#     func(25,c=24)
#     func(c=50)

# python_workshop=[1,2,3,4]
# Binit_Einstein=["topper","intelligent"]
# print(type(python_workshop[2]))

#OOPS concept
#class Dog:
#     def __init__(self,name,age):
#         self.name=name
#         self.age=age
#     def bark(self):
#         return"woof"
# my_dog=Dog("buddy",3)
# print(my_dog.name)
# print(my_dog.bark())
    
#encapsulation
# class Person:
#     def __init__(self,name,age):
#         self.__name= name #PRIVATE ATTRIBUTE
#         self.__age=age
#     def get_name(self):
#         return self.__name
#     def set_name(self,name):
#         self.__name=name

#inhertance
#parent class
# class Animal:
#     def __init__(self,name):
#         self.name=name
#     def speak(self):
#         return f"[self.name]makes a sound."
# #child class inhertied from animal
# class Dog(Animal):
#     def speak(self):
#         return f"{self.name} barks."
# #another child class inherited from Animal class
# class Cat(Animal):
#     def speak(self):
#         return f"{self.name} meows"
# #creating objects of the child classes
# dog=Dog("buddy")
# cat=Cat("whiskers")
# #calling methods
# print(dog.speak())
# print(cat.speak())

#polymorphism
#EXAMPLE OF OVERLOADING
# class MathOperation:
#     def add(self,a,b,c=0):
#         return a+b+c
# #creating objects of the class
# math=MathOperation()

# print(math.add(5,10))
# print(math.add(5,10,20))


# a=[1,2,3]
# a=tuple(a)
# a[0]=2
# print(a)

import numpy as np
data=np.array([[1,2,3],[2,3,4],[4,5,6]])
