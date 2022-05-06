from tkinter import *

top = Tk()
LB1 = Listbox(top)
LB1.insert(1, "Python")
LB1.insert(2, "Perl")
LB1.insert(3, "C")
LB1.insert(4, "PHP")
LB1.insert(5, "JSP")
LB1.pack()
top.mainloop()