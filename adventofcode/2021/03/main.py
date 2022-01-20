import numpy as np


def load_data(loc):
    with open(loc, 'r') as f:
        data = f.readlines()
    data = np.array([ list(item.replace('\n', '')) for item in data ])
    data = data.astype(int)
    return data


def find_most_common(array):
    array_len = array.shape[0]
    if array.sum() >= array_len/2:
        return 1
    else:
        return 0


def eliminate_arrays(data, mode="most"):
    data_array = data
    i = 0
    while True:
        valid_indices = []
        data_array_t = data_array.T
        most_common = find_most_common(data_array_t[i])
        if mode == "most":
            keep = most_common
        else:
            keep = (most_common+1)%2
        for j, item in enumerate(data_array_t[i]):
            if item == keep:
                valid_indices.append(j)
        data_array = data_array[valid_indices]
        print(data_array)
        if data_array.shape[0] == 1:
            return int("".join([ str(item) for item in data_array[0] ]),2)
        i += 1


def get_solution(data):
    oxygen = eliminate_arrays(data, "most")
    c02 = eliminate_arrays(data, "least")
    return oxygen, c02


if __name__ == "__main__":
    data = load_data("input.txt")
    oxygen, c02 = get_solution(data)
    print(oxygen, c02)
    print(oxygen*c02)

