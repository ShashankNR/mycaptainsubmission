#!/usr/bin/env python
# coding: utf-8

# In[1]:


# import dependecies
import numpy as np
import pandas as pd
from matplotlib import pyplot as plt

from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import train_test_split
get_ipython().run_line_magic('matplotlib', 'inline')


# In[2]:


# using pandas to read the database stored in the same folder
data_test = pd.read_csv(r'C:\Users\Shazank\OneDrive\Desktop\mnist_test.csv')
data_train = pd.read_csv(r'C:\Users\Shazank\OneDrive\Desktop\mnist_train.csv')


# In[3]:


data = data_test + data_train


# In[7]:


# Viewing column heads
data_test.head()


# In[8]:


data_test.tail()


# In[9]:


# extracting data from the data set and viewing them upclose
a = data_test.iloc[3,1:].values


# In[10]:


# reshaping the extracted data into a reasonable size
a = a.reshape(28,28).astype('uint8')
plt.imshow(a)


# In[13]:


# prepraring the data
# seperating label and data values
df_x = data_test.iloc[:,1:]
df_y = data_test.iloc[:,0]


# In[14]:


# Creating test size and train size/batches of the model
x_train, x_test, y_train, y_test = train_test_split(df_x, df_y, test_size = 0.2, random_state=4)


# In[15]:


# check data
x_train.head()


# In[16]:


y_train.head()


# In[17]:


# call rf classifier
rf = RandomForestClassifier(n_estimators=100)


# In[18]:


# fit the model
rf.fit(x_train, y_train)


# In[19]:


# Prediction on test data
pred = rf.predict(x_test)


# In[20]:


pred


# In[22]:


# Check prediction accuracy
s = y_test.values

# calculate number of correctly predicted vlaues
count = 0
for i in range(len(pred)):
    if pred[i] == s[i]:
        count = count + 1


# In[23]:


count


# In[24]:


# total values that the prediction code was run on
len(pred)


# In[25]:


# accuracy value
1898/2000


# In[ ]:




