"""
HelloWorld program with introduction to Class
"""


class HelloWorld:
    def __init__(self, sentence):
        self.sentence = sentence

    def print_function(self):
        print(self.sentence)


if __name__ == '__main__':
    hw = HelloWorld('Hello World')
    hw.print_function()
