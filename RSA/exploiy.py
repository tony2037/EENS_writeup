"""
https://id0-rsa.pub/problem/21/

Given the following public key, private key, and encrypted message (c=me mod N
), compute the original message (m
). Submit your answer as a hex integer (no lead 0x, all lower case characters).
"""

(e, N) = (0x3, 0x64ac4671cb4401e906cd273a2ecbc679f55b879f0ecb25eefcb377ac724ee3b1)
d = 0x431d844bdcd801460488c4d17487d9a5ccc95698301d6ab2e218e4b575d52ea3
c = 0x599f55a1b0520a19233c169b8c339f10695f9e61c92bd8fd3c17c8bba0d5677e


"""
e = 65537
N = 1294506718235478161592096722917508216492977651068363875076991157611
ciphertext = 572392398374688764110608330826754963553896017089061852450022664816
"""
e = 65537
N = 1294506718235478161592096722917508216492977651068363875076991157611
ciphertext = 572392398374688764110608330826754963553896017089061852450022664816