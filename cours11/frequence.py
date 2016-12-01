texte = 'un tres long texte avec des informations...'
freq = {lettre: texte.count(lettre) for lettre in set(texte)\
                                    if lettre >= 'a' and lettre <= 'z'}
for lettre in sorted(freq):
    print('%s: %s' % (lettre, freq[lettre]))
