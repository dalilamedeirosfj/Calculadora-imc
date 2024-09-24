import unittest

class Calculadora:
    def soma(self, a, b):
        return a + b

    def subtracao(self, a, b):
        return a - b

    def multiplicacao(self, a, b):
        return a * b

    def divisao(self, a, b):
        if b == 0:
            raise ValueError("Não é possível dividir por zero")
        return a / b

class TestCalculadora(unittest.TestCase):
    def setUp(self):
        self.calc = Calculadora()

    def test_soma(self):
        self.assertEqual(self.calc.soma(2, 3), 5)

    def test_subtracao(self):
        self.assertEqual(self.calc.subtracao(5, 2), 3)

    def test_multiplicacao(self):
        self.assertEqual(self.calc.multiplicacao(2, 3), 6)

    def test_divisao(self):
        self.assertEqual(self.calc.divisao(6, 2), 0)
        with self.assertRaises(ValueError):
            self.calc.divisao(6, 0)

if __name__ == "__main__":
    unittest.main()