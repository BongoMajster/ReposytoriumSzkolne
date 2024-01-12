import tkinter as tk
from tkinter import messagebox
def sprawdz_dane():
   wprowadzony_login = entry_login.get()
   wprowadzone_haslo = entry_haslo.get()
   prawidlowy_login = "admin"
   prawidlowe_haslo = "haslo123"
   if wprowadzony_login == prawidlowy_login and wprowadzone_haslo == prawidlowe_haslo:
       messagebox.showinfo("Logowanie", "Logowanie udane!")
   else:
       messagebox.showerror("Błąd logowania", "Nieprawidłowy login lub hasło.")
okno = tk.Tk()
okno.title("Logowanie")
label_login = tk.Label(okno, text="Login:")
label_login.pack()
entry_login = tk.Entry(okno)
entry_login.pack()
label_haslo = tk.Label(okno, text="Hasło:")
label_haslo.pack()
entry_haslo = tk.Entry(okno, show="*")  
entry_haslo.pack()
przycisk_logowania = tk.Button(okno, text="Zaloguj", command=sprawdz_dane)
przycisk_logowania.pack()
okno.mainloop()