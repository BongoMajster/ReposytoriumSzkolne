from tkinter import *

window = tk()
window.title("Wpisywanie")
a = 500
b = 40
window = tk()
window.title("Kolko")
window.minsize(a,a)
window.maxsize(a,a)
window.geometry(str(a)+"x"+str(a)+"+300+100")
c = Canvas(window, width = a, height = a)
c.pack()

c.create_oval(0,0,a,a,width = 5, outline = 'black')
c.create_rectangle((a/2-b/2,a/2-b/2),(a/2+b/2,a/2+b/2),width = 5, outline = 'orange')
c.create_oval(a/2-b/2,a/2-b/2,a/2+b/2,a/2+b/2, fill = 'yellow' width = 5, outline - 'black')
window.mainloop()










