import turtle

myTurtle = turtle.Turtle()
myWin = turtle.Screen()

def draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(120)
        draw(myTurtle, length-3)


draw(myTurtle, 400)
myWin.exitonclick()