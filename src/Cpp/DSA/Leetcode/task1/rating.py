import tkinter as tk
from tkinter import messagebox
import mysql.connector as c
conn = c.connect(host='localhost', user='root', passwd='AnupPal@70012', database='testdb')
window = tk.Tk()
window.geometry('500x500')
mycursor = conn.cursor()


def submit():
    insert_stmt = (
        "INSERT INTO reviewers(movieid,reviewerid,rating,timestamp)"
        "VALUES (%s, %s, %s, %s)"
    )
    data = (txt_movieid.get(), txt_reviewerid.get(), txt_rating.get(), txt_timestamp.get())
    mycursor.execute(insert_stmt, data)
    conn.commit()
    messagebox.showinfo("Success", "Rating added successfully")


lbl_reviewerid = tk.Label(window, text='Enter Reviewer id:')
lbl_reviewerid.pack()
txt_reviewerid = tk.Entry(window)
txt_reviewerid.pack()
lbl_movieid = tk.Label(window, text='Enter movie id:')
lbl_movieid.pack()
txt_movieid = tk.Entry(window)
txt_movieid.pack()
lbl_rating = tk.Label(window, text='Enter rating:')
lbl_rating.pack()
txt_rating = tk.Entry(window)
txt_rating.pack()
lbl_timestamp = tk.Label(window, text='Enter Timestamp:')
lbl_timestamp.pack()
txt_timestamp = tk.Entry(window)
txt_timestamp.pack()

btn_submit = tk.Button(window, text='Submit', command=submit)
btn_submit.pack()

window.mainloop()