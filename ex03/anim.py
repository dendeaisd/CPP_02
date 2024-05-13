import os
import time
import sys

# Colors
BLUE    = "\033[1;38;2;0;25;102m"
RESET   = "\033[0m"

frames = [
    f"""

    *
                                                  @ 
                                     ,--          |/
                                    (__ \__    @  |
                                      _\  \\\_   \_|
    ~~~~ ~~ ~~~~~~ ~~  ~~~~~~~ ~~ ~~~_\,___\/--'-\#
    """,
    f"""

                            
        *                                         @
                                     ,--          |/
                                    (__ \__    @  |
                                      _\  \\\_   \_|
    ~~~~ ~~ ~~~~~~ ~~  ~~~~~~~ ~~ ~~~_\,___\/--'-\#
    """,
    f"""

            *                 
                                                  @
                                     ,--          |/
                                    (__ \__    @  |
                                      _\  \\\_   \_|
    ~~~~ ~~ ~~~~~~ ~~  ~~~~~~~ ~~ ~~~_\,___\/--'-\#
    """,
    f"""

                            
                *                                 @
                                     ,--          |/
                                    (__ \__    @  |
                                      _\  \\\_   \_|
    ~~~~ ~~ ~~~~~~ ~~  ~~~~~~~ ~~ ~~~_\,___\/--'-\#
    """,
    f"""

                            
                                                  @
                    *                ,--          |/
                                    (__ \__    @  |
                                      _\  \\\_   \_|
    ~~~~ ~~ ~~~~~~ ~~  ~~~~~~~ ~~ ~~~_\,___\/--'-\#
    """,
    f"""

                            
                                                  @
                          *           oo          |/
                                    (__ \__    @  |
                                      _\  \\\_   \_|
    ~~~~ ~~ ~~~~~~ ~~  ~~~~~~~ ~~ ~~~_\,___\/--'-\#
    """,
    f"""

                            
                            *                     @
                                      OO          |/
                                    (__ \__    @  |
                                      _\  \\\_   \_|
    ~~~~ ~~ ~~~~~~ ~~  ~~~~~~~ ~~ ~~~_\,___\/--'-\#
    """,
    f"""

                              *.
                                `.                @
                                    _/^^          |/
                                    \__ \__    @  |
                                      _\  \\\_   \_|
    ~~~~ ~~ ~~~~~~ ~~  ~~~~~~~ ~~ ~~~_\,___\/--'-\#
    """,
    f"""

                                
                                                  @
                                     ,^^          |/
                                    (__ \__    @  |
                                      _\  \\\_   \_|
    ~~~~ ~~ ~~~~~~ ~~  ~~~~~~~ ~~ ~~~_\,___\/--'-\#
    """
]

def clear():
  os.system('clear')

def animate():
  stop_file = "stop_animation.txt" 
  animation_cycles = 1
  try:
    while not os.path.exists(stop_file):
      for _ in range (animation_cycles):  
        for frame in frames:
          if os.path.exists(stop_file):
              break
          clear()
          print(frame)
          time.sleep(0.4)
  finally:
    if os.path.exists(stop_file):
      os.remove(stop_file)
    clear()
    print(f"""

                                     Build complete!
                                         /        @
                                     ,--          |/
                                    (__ \__    @  |
                                      _\  \\\_   \_|
    ~~~~ ~~ ~~~~~~ ~~  ~~~~~~~ ~~ ~~~_\,___\/--'-\#
    """)
    sys.exit()

if __name__ == "__main__":
  animate()
