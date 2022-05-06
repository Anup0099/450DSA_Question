class Student:
    def _init_(self, name, id, mail):
        self.name = name
        self.id = id
        self.mail = mail

    def exam(self):
        print('Exams are coming..')

    def getData(self):
        print('Name is: '+self.name)
        print('Reg Id is: '+self.id)
        print('Mail Id is: '+self.mail)






