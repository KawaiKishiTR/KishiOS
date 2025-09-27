


def CHS_to_LBA(C:int, TH:int, TS:int, H:int, S:int):
    """
    C: Sector clyinder number
    TH: Total headers on disk
    TS: Total sections on disk
    H: Sector head number
    S: Sectors number    
    """

    return (C * TH * TS) + (H * TS) + (S - 1)

def LBA_to_CHS(LBA:int, SPT:int, NH:int, NHS:int):
    """
    LBA:data adress
    SPT:Sectors per track
    NH: Number of heads
    NHS: Number of headers 
    """

    t = LBA/SPT #track
    s = (LBA%SPT) +1 #sector
    h = t%NH #head
    c = t/NHS #clyinder
    return (c,h,s)
