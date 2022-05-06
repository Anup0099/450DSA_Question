from unicodedata import name,ABC,abstractmethod

class pokeman(ABC):
    def __init__(self,name,attack_type):
        self.name=name
        self.attack_type=attack_type
    def attack(self):
        pass

class Pikachu(pokeman):
    def __init__(self,name,attack_type,symbol):
        super().__init__(name,attack_type,symbol)
        self.symbol=symbol

        def attack(self):
            return self.symbol