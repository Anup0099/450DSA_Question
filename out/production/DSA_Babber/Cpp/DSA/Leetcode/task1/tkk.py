import tkinter as tk

window = tk.Tk()
window.title('my window')
window.geometry('200x200')
tk.Label(text='on the window', background='yellow',
         foreground='red', font=('Arial', 12), width=15, height=2

         ).pack()
label1 = tk.Label(text='on the window', background='yellow',    foreground='red', font=('Arial', 12), width=15, height=2)
label1.pack()
label2 = tk.Label(text='on the window', background='yellow',    foreground='red', font=('Arial', 12), width=15, height=2)
window.title("Creating 3 widget-label,textentry,button")
lbl_sample=tk.label(window,text='label')
txt_entry=tk.entry(window)
btn_sample = tk.buttoin(window,text='button')
lbl_sample.pack()
btn_sample.pack()
txt_entry.pack()
window.mainloop()
