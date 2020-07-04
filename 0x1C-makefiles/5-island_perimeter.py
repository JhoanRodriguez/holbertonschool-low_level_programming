#!/usr/bin/python3
"""Calculate the perimeter of and island
    """


def island_perimeter(grid):
    """Return the perimeter of the island
    """
    counter = 0
    for x in range(0, len(grid)):
        for y in range(0, len(grid[0])):
            if (grid[x][y] == 1):
                counter += 4
                if x - 1 >= 0 and grid[x - 1][y] == 1:
                    counter -= 1
                if x + 1 < len(grid) and grid[x + 1][y] == 1:
                    counter -= 1
                if y - 1 >= 0 and grid[x][y - 1] == 1:
                    counter -= 1
                if y + 1 < len(grid[0]) and grid[x][y + 1] == 1:
                    counter -= 1
    return counter
