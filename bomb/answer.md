# Bomb Lab

## Phase 1
Border relations with Canada have never been better.

## Phase 2
1 2 4 8 16 32

## Phase 3
```
void phase_3() {
    int idx, val;
    sscanf(input, "%d %d", &idx, &val); // read two integers

    if (idx > 7) explode_bomb();  

    int expected;
    switch (idx) { 
        case 0: expected = 0xcf; break;
        case 1: expected = 0x2c3; break;
        case 2: expected = 0x100; break;
        case 3: expected = 0x185; break;
        case 4: expected = 0xce; break;
        case 5: expected = 0x2aa; break;
        case 6: expected = 0x147; break;
        case 7: expected = 0x137; break;
        default: explode_bomb(); 
    }

    if (val != expected) explode_bomb();
}
 
```

## Phase 4
