# SoftArchMidterm

* Estimations
  - Scafolding 3 hours
  - Localization: 3 hours
  - Digital signature 1 hour
* Description
  - HomeworkApp is a very simple project that contains several libraries that return a string containing the name of that library. This project is meant to demonstrate several of the topics we have covered in Software Architecture, such as libraries, localization, and digital signatures. Our project has two executables. One is called HomeworkApp.exe, and the other is called AutomatedHomeworkApp.exe. HomeworkApp.exe is an interactable program whereas AutomatedHomeworkApp.exe simply prints everything you need and is not interactable.
 
* AutomatedHomeworkApp.exe

  ![image](https://github.com/ajdelcimmuto/SoftArchMidterm/blob/master/AutomatedHomeworkAppDemo.PNG?raw=true)
* HomeworkApp.exe

  ![image](https://user-images.githubusercontent.com/28656360/156645718-f09f9223-46a4-473b-b891-e532f226e849.png)
* Boost
- Here is an example of how we use boost. As you can see we pass in a given context "test" and we are properly returned the translations for each string. This can be seen by the above demo. Also, if we comment out the global gen local and uncomment the default local, we also get the proper translations. Example is below.
- ![image](https://github.com/ajdelcimmuto/SoftArchMidterm/blob/master/boostUsage.PNG?raw=true)
- Proper translation for default boost local: ![image](https://user-images.githubusercontent.com/28656360/156646595-5c91c5c0-1b62-4c9a-9455-cfe17ed65ae6.png)

* Digital signing
- ![Alt text](https://github.com/ajdelcimmuto/SoftArchMidterm/blob/master/AutomatedHomeworkAppSignature.PNG?raw=true)
- ![Alt text](https://github.com/ajdelcimmuto/SoftArchMidterm/blob/master/HomeworkAppSignature.PNG?raw=true)




Licensing.   Answer the following questions:
1. If we are consider using a toolkit like FlexNet (aka FlexLm), where would we put the calls 
to initialize the license server?   Would this approach be too heavy handed for your 
application, if yes why?
2. Another alternative, could be an DRM like approach, where some type of hash\key is 
stored on the computer that indicates what is allowed.  Would this approach be better.  
This is like the model of steam, entering in a product key, and so on.
c. If your boss\product manager told you to think about having multiple licenses for 
different functionality (instead of monolithic, but more atomic).  How you would you 
suggest to organizing the entitlements (i.e. what pieces of functionality to have against 
what license)?
