# Parampreet Singh - 23/06/20
# Python Test Dome example test

# Question 1:
def unique_names(names1, names2):
    ans = []  # list
    for name in names1:
        if not(name in ans):
            ans.append(name)

    for name in names2:
        if not(name in ans):
            ans.append(name)

    return ans


if __name__ == "__main__":
    names1 = ["Ava", "Emma", "Olivia"]
    names2 = ["Olivia", "Sophia", "Emma"]
    # should print Ava, Emma, Olivia, Sophia
    print(unique_names(names1, names2))


# Question 2:
def group_by_owners(files):
    answer = {}  # New dictionairy
    for page in files:  # page = key
        if files[page] not in answer.keys():  # if not present, add
            answer[files[page]] = [page]
        else:  # else present append
            answer[files[page]] += [page]

    return answer


if __name__ == "__main__":
    files = {
        'Input.txt': 'Randy',
        'Code.py': 'Stan',
        'Output.txt': 'Randy'
    }
    print(group_by_owners(files))
