import unittest


def add(a, b):
    return a + b


class Testcalc(unittest.TestCase):
    def test_add(self):
        self.assertEqual(3, add(1, 2))
