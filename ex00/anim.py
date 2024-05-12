import os
import time
import sys

frames = [
    """
     (\(\ 
     ( -.-)
     o_(")(")
    """,
    """
     (\(\ 
     ( o.o)
     o_(")(")
    """,
    """
     (\(\ 
     ( >.<)
     o_(")(")
    """
]

def clear():
    os.system('clear')

def animate():
    stop_file = "stop_animation.txt" 
    animation_cycles = 4
    try:
      while not os.path.exists(stop_file):
        for _ in range (animation_cycles):  
          for frame in frames:
            if os.path.exists(stop_file):
                break
            clear()
            print(frame)
            time.sleep(0.3)
    finally:
      if os.path.exists(stop_file):
        os.remove(stop_file)
      clear()
      print("""
      (\(\ 
      (^_^)
      o_(")(") Build Complete!
      """)
      sys.exit()

if __name__ == "__main__":
    animate()
