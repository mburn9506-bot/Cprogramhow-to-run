words = set()
def check(word):
        return word.lower() in words

def load(dictionary):
        with open(dictionary) as file:
                words.update(file.read().splitlines())
        return True

def size():
        return len(words)
def unload():
        return True
if __name__ == "__main__":
        load("dictionary.txt")
print("Size:", size())
print("Check apple:", check("apple"))
print("Check car:", check("car"))
print("Check cat:", check("cat"))
"""
output:
Size: 4
Check apple: True
Check car: False
Check cat: True
"""