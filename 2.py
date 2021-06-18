
def decompress(st):
    ans = ""

    for i in range(0, len(st)-1):
        if(st[i+1].isdigit()):
            # print(int(st[i+1])+1)
            ans = ans+(st[i]*int(st[i+1]))
    return ans


def compress(st):

    n = len(st)
    i = 0
    s = ""
    while i < n - 1:
        count = 1
        while (i < n - 1 and
               st[i] == st[i + 1]):
            count += 1
            i += 1
        i += 1
        s = s+st[i-1]+str(count)
    return s


if __name__ == "__main__":

    st = "aaaaabccc"
    print("given string:   "+st)
    res = compress(st)
    print("compressed is:   "+compress(st))
    print("decompressed id:   "+decompress(res))
