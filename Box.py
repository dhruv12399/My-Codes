from PIL import Image
import os

li = ['4565.png',
'4566.png',
'4813.png',
'4818.png',
'4819.png',
'4822.png',
'4823.png',
'4824.png',
'4825.png',
'4826.png',
'4827.png',
'4828.png',
'4829.png',
'4830.png',
'4871.png',
'4874.png',
'5257.png',
'5258.png',
'5512.png',
'5518.png',
'5541.png',
'5543.png',
'5545.png',
'5582.png',
'5588.png',
'5592.png',
'5593.png',
'5597.png',
'5601.png',
'5611.png',
'5618.png',
'5632.png',
'5705.png',
'5710.png',
'5733.png',
'5746.png',
'5755.png',
'5761.png',
'5774.png',
'5782.png',
'5787.png',
'5794.png',
'5799.png',
'5808.png',
'5814.png',
'5839.png',
'5845.png',
'5853.png',
'5858.png',
'5897.png',
'5908.png',
'5928.png',
'5933.png',
'5953.png',
'5968.png',
'5988.png',
'5989.png',
'5991.png',
'5992.png',
'5993.png',
'5994.png',
'5995.png',
'5996.png',
'5997.png',
'5998.png',
'5999.png',
'6000.png',
'6001.png',
'6002.png',
'6003.png',
'6004.png',
'6005.png',
'6006.png',
'6007.png',
'6008.png',
'6009.png',
'6010.png',
'6011.png',
'6012.png',
'6013.png',
'6014.png',
'6015.png',
'6016.png',
'6017.png',
'6018.png',
'6019.png',
'6020.png',
'6021.png',
'6022.png',
'6023.png',
'6024.png',
'6025.png',
'6026.png',
'6027.png',
'6028.png',
'6029.png',
'6030.png']

for p in li:
    img = Image.open("/home/user/Desktop/Chemistry/"+p) 
    img2 = Image.open("/home/user/Desktop/time3.png") 
    img.paste(img2, (1000, 5))
    img.save("/home/user/Desktop/Chem/"+p)