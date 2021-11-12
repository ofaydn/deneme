Step 1: START
Step 2: READ vectorNumber
Step 3: int y[vectorNumber],x[vectorNumber],area[vectorNumber]
Step 4: int a=0
Step 5: a = a+1
Step 6: READ x[a]
Step 7: READ y[a]
Step 8: READ area[a]
Step 9: IF a < vectorNumber GO TO STEP 5
Step 10: int b=0
Step 11: b = b+1
Step 12: IF area[b] == (2 or 3) x[b] = -x[b]
Step 13: IF area[b] == (3 or 4) y[b] = -y[b]
Step 14: IF b<vectorNumber GO STEP 11
Step 15: int finalx,finaly
Step 16: int c=0
Step 17: c = c+1
Step 18: finalx = finalx + x[c]
Step 19: finaly = finaly + y[c]
Step 20: IF c<vectorNumber GO STEP 17
Step 21: IF ((finalx == 0)||(finaly == 0)) GO TO STEP 22
Step 22: cout<<"This vector has no area"
Step 23: IF (finalx < 0 and finaly > 0) GO TO STEP 24
Step 24: cout<<finalx,finaly, "area is 2"
Step 25: IF (finalx < 0 and finaly < 0) GO TO STEP 26
Step 26: cout<<finalx,finaly, "area is 3"
Step 27: ELSE GO TO STEP 28
Step 28: cout<<finalx,finaly, "area is 4"
Step 29: END


