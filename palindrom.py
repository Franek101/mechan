print("Witaj. Sprawdzę czy wyraz który podasz jest palindromem. Wpisz ok jeśli chcesz sprawdzić wyraz lub wyjdz jeśli chcesz opuścić program")

def palindrom():

    odp = input("_")
    while(0==0):

        match odp:
            case 'ok' :
                napis = input("Podaj napis:   ")
                y = int(len(napis))
                reverse = napis[::-1]
                if (reverse == napis):
                    print("Twoje słowo jest palindromem")
                else:
                    print("Niestety twoje słowo nie jest palindromem")
                odp = input("Czy chcesz kontynuować? ok lub wyjdz:   ")
            case 'wyjdz':
                exit()
            case _:
                print("Błedna odpowiedz!!!")
                odp = input("Czy chcesz kontynuować? ok lub wyjdz:   ")

palindrom()





