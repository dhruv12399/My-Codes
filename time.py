from PIL import Image
import os
import Image
import ImageDraw
import ImageFont

# li = os.listdir("/home/user/Desktop/images")
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

# li.sort()
li_t =['1:06 Min',
'1:30 Min',
'1:04 Min',
'0:44 Min',
'1:01 Min',
'1:10 Min',
'0:39 Min',
'1:17 Min',
'0:50 Min',
'0:44 Min',
'0:53 Min',
'1:00 Min',
'0:56 Min',
'1:32 Min',
'1:12 Min',
'1:21 Min',
'0:49 Min',
'1:34 Min',
'1:05 Min',
'0:59 Min',
'1:10 Min',
'1:25 Min',
'1:19 Min',
'1:46 Min',
'1:18 Min',
'0:50 Min',
'0:57 Min',
'0:43 Min',
'1:52 Min',
'0:49 Min',
'0:47 Min',
'1:00 Min',
'1:01 Min',
'1:06 Min',
'1:07 Min',
'0:49 Min',
'0:56 Min',
'1:08 Min',
'0:59 Min',
'0:59 Min',
'1:00 Min',
'1:46 Min',
'1:40 Min',
'1:12 Min',
'1:51 Min',
'1:13 Min',
'1:26 Min',
'0:53 Min',
'0:51 Min',
'2:41 Min',
'1:27 Min',
'1:36 Min',
'1:11 Min',
'1:57 Min',
'2:13 Min',
'1:77 Min',
'1:04 Min',
'1:06 Min',
'1:41 Min',
'1:15 Min',
'1:22 Min',
'1:39 Min',
'1:33 Min',
'1:12 Min',
'2:03 Min',
'0:51 Min',
'1:02 Min',
'1:10 Min',
'1:11 Min',
'1:07 Min',
'0:52 Min',
'1:15 Min',
'0:52 Min',
'0:46 Min',
'0:35 Min',
'1:05 Min',
'1:17 Min',
'0:53 Min',
'0:47 Min',
'1:20 Min',
'1:22 Min',
'0:46 Min',
'1:08 Min',
'1:39 Min',
'1:36 Min',
'1:16 Min',
'1:06 Min',
'1:16 Min',
'1:14 Min',
'1:29 Min',
'1:07 Min',
'2:20 Min',
'1:49 Min',
'1:43 Min',
'1:07 Min',
'0:52 Min',
'1:22 Min']
i=0
for p in li:
	img = Image.open("/home/user/Desktop/Chem/"+p) 
	fontname = "/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf"
	fontsize = 18
	font = ImageFont.truetype(fontname, fontsize)
	d = ImageDraw.Draw(img)
	d.text((1020, 20), li_t[i], fill=(255, 255, 255), font=font)
	img.save("/home/user/Desktop/Chem_final/"+p)
	i=i+1





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
 
Received, thank you.Thanks a lot.Many thanks.
