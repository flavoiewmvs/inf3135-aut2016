class Vecteur(object):

    def __init__(self, x, y, z):
        r"""
        Constructeur
        """
        self.x = x
        self.y = y
        self.z = z

    def __repr__(self):
        r"""
        Representation d'un vecteur par une chaine de caracteres
        """
        return '(%s, %s, %s)' % (self.x, self.y, self.z)

    def __add__(self, other):
        r"""
        Addition de deux vecteurs
        """
        return Vecteur(self.x + other.x,\
                       self.y + other.y,\
                       self.z + other.z)

u = Vecteur(1, -1, 3)
v = Vecteur(2, 4, -1)
print(u)
print(v)
print(u + v)
