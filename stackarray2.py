class Stackarray:
  def __init__(self, size=20):
      self._stack = []
      self._size = size

  def is_empty(self):
      return len(self._stack) <= 0

  def push(self, data):
      if len(self._stack) >= self._size:
          raise Exception('overflow')
      else:
          self._stack.append(data)

  def pop(self):
      if len(self._stack) <= 0:
          raise Exception('underflow')
      else:
          return self._stack.pop()

  def peek(self):
      if len(self._stack) <= 0:
          raise Exception('underflow')
      else:
          return self._stack[-1]

  def length(self):
      return len(self._stack)


stack = Stackarray(4)
stack.push(8)
stack.push(3)
stack.push(2)
stack.push(6)
print(stack.peek())
print(stack.pop())
print(stack.length())
print(stack.peek())