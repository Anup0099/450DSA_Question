import tkinter as tk
from tkinter import messagebox
import mysql.connector as c
conn = c.connect(host='localhost', user='root', passwd='AnupPal@70012', database='testdb')
window = tk.Tk()
window.geometry('500x500')
mycursor = conn.cursor()


def submit():
    insert_stmt = (
        "INSERT INTO reviewers(first_name,last_name)"
        "VALUES (%s, %s)"
    )
    data = (txt_name.get(), txt_lastname.get())
    mycursor.execute(insert_stmt, data)
    conn.commit()
    messagebox.showinfo("Success", "Reviewer added successfully")


lbl_name = tk.Label(window, text='Enter Reviewer First name:')
lbl_name.pack()
txt_name = tk.Entry(window)
txt_name.pack()
lbl_lastname = tk.Label(window, text='Enter Reviewer Last name:')
lbl_lastname.pack()
txt_lastname = tk.Entry(window)
txt_lastname.pack()
# lbl_rating = tk.Label(window, text='Enter rating:')
# lbl_rating.pack()
# txt_rating = tk.Entry(window)
# txt_rating.pack()
# lbl_genre = tk.Label(window, text='Enter genre:')
# lbl_genre.pack()
# txt_genre = tk.Entry(window)
# txt_genre.pack()
# lbl_collection = tk.Label(window, text='Enter collection in mil:')
# lbl_collection.pack()
# txt_collection = tk.Entry(window)
# txt_collection.pack()
btn_submit = tk.Button(window, text='Submit', command=submit)
btn_submit.pack()

window.mainloop()