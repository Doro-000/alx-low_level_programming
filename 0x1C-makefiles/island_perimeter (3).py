def island_perimeter(grid):
    for i in grid:
        for x in i:
            if x == 1:


def total(grid):
    sum = 0

    for i in range(len(grid)):
        if i == 0:
            if grid[i] == 1 and grid[i + 1] != 1:
                sum += 3 * 1
            elif grid[i] == 1 and grid[i + 1] == 1:
                sum += 2 * 1
            elif grid[i] != 1 and grid[i + 1] == 1:
                sum += 1
        elif (i != len(grid) - 1):
            if grid[i] == 1 and grid[i + 1] == 1:
                sum += grid[i]
            elif grid[i] == 1 and grid[i + 1] != 1:
                sum += 2 * 1
            elif grid[i] != 1 and grid[i + 1] == 1:
                sum += 1
        else:
            if grid[i] == 1 and grid[i - 1] != 1:
                sum += 3 * 1
            elif grid[i] == 1 and grid[i - 1] == 1:
                sum += 2 * 1
    return sum


def pass_if_zero(grid):
    sum = 0
    for i in grid:
        sum += i
    if sum == 0:
        return False
    else:
        return True


def rows(grid):
    row = 0
    for x in grid:
        sum = 0
        for i in x:
            sum += i
        if sum != 0:
            row += 1
    return row


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

    #     fb_ver = (grid[i + 1][x] == 1 and grid[i - 1][x] == 1)
    #     fb_hor = (grid[i][x + 1] == 1 and grid[i][x - 1] == 1)
    #     fb_ver_n = (grid[i + 1][x] != 1 and grid[i - 1][x] != 1)
    #     fb_hor_n = (grid[i][x + 1] != 1 and grid[i][x - 1] != 1)
    #     fb_ver2 = (grid[i + 1][x] != 1 or grid[i - 1][x] != 1)
    #     fb_hor2 = (grid[i][x + 1] != 1 or grid[i][x - 1] != 1)
    # if x == 0 and grid[i][x] == 1:
    #     fb_hor = (grid[i][x + 1] == 1)
    #     fb_hor2 = (grid[i][x + 1] != 1)
    #     fb_ver = (grid[i + 1][x] == 1 and grid[i - 1][x] == 1)
    #     fb_ver_n = (grid[i + 1][x] != 1 and grid[i - 1][x] != 1)
    #     fb_ver2 = (grid[i + 1][x] != 1 or grid[i - 1][x] != 1) and (not fb_ver_n)
