#!/usr/bin/python3
"""Calculate the perimeter of and island
    """


def island_perimeter(grid):
    """Return the perimeter of the island
    """
    counter = 0
    for item in grid:
        for land in item:
            if land == 1:
                counter += 1
    per = (counter - 2) * 2
    per += (2 * 3)
    return per
