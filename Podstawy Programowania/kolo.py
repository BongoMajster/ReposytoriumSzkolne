from tkinter import *
def nazwa():
    a=int(e1.get())
    print(a)
    b=int(e2.get())
    print(b)


    window = Tk()
    window.minsize(a,a)
    window.maxsize(a,a)
    window.geometry(str(a)+"x"+str(a)+"+300+100")
 
    c = Canvas(window, width = a, height = a)
    c.pack()

    c.create_oval(0,0,a,a,width = 5, outline = 'black')
    c.create_rectangle((a/2-b/2,a/2-b/2),(a/2+b/2,a/2+b/2),width = 5, outline = 'orange')
    c.create_oval(a/2-b/2,a/2-b/2,a/2+b/2,a/2+b/2, fill = 'yellow' width = 5, outline - 'black')


    window.mainloop()

    root = Tk()
    
    l1 = Label(root,text="a:")
    l1.pack()
    e1=Entry(root)
    e1.pack()
    
    l2 = Label(root,text="b:")
    l2.pack()
    e2=Entry(root)
    e2.pack()

    btn = Button(root, text= 'klik', command = nazwa)
    btn.pack()

    root.mainloop()
