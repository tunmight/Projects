import pyttsx3

hello = input("Type in something to say: ")
engine = pyttsx3.init()
engine.say(hello)
engine.runAndWait()

