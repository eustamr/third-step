require "narray"
score11 = [65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70]
score12=[44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]
score1= NArray.to_na(score11)
score2= NArray.to_na(score12)
print "笑介君のクラス20人のテストの点数は、理科が"
print score1
print "英語が"
print score2
print "平均"
print "理科"
print score1.mean
print "英語"
print score2.mean
print "標準偏差"
print "理科"
print score1.stddev
print "英語"
print score2.stddev
print "合計点"
print "理科"
print score1.sum
print "英語"
print score2.sum
print "偏差値"
print "理科"
print ((score1-score1.mean)/score1.stddev*10+50)
print "英語"
print ((score2-score2.mean)/score2.stddev*10+50)
print "昇順ソート"
print "理科"
print score1.sort.reverse
print "英語"
print score2.sort.reverse
