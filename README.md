# SoftArchMidterm

### Estimations:
  - Scaffolding 3 hours
  - Localization: 3 hours
  - Digital signature 1 hour
### Description
  - HomeworkApp is a very simple project that contains several libraries that return a string containing the name of that library. This project is meant to demonstrate several of the topics we have covered in Software Architecture, such as libraries, localization, and digital signatures. Our project has two executables. One is called HomeworkApp.exe, and the other is called AutomatedHomeworkApp.exe. HomeworkApp.exe is an interactable program whereas AutomatedHomeworkApp.exe simply prints everything you need and is not interactable.
 
### AutomatedHomeworkApp.exe

  ![image](https://github.com/ajdelcimmuto/SoftArchMidterm/blob/master/AutomatedHomeworkAppDemo.PNG?raw=true)
### HomeworkApp.exe

  ![image](https://user-images.githubusercontent.com/28656360/156645718-f09f9223-46a4-473b-b891-e532f226e849.png)
### Boost
- Here is an example of how we use boost. As you can see we pass in a given context "test" and we are properly returned the translations for each string. This can be seen by the above demo. If we comment out the global gen local and uncomment the default local, we also get the proper translations. Example is below.
- ![image](https://github.com/ajdelcimmuto/SoftArchMidterm/blob/master/boostUsage.PNG?raw=true)
- Proper translation for default boost local: ![image](https://user-images.githubusercontent.com/28656360/156646595-5c91c5c0-1b62-4c9a-9455-cfe17ed65ae6.png)

### Digital signing
- ![Alt text](https://github.com/ajdelcimmuto/SoftArchMidterm/blob/master/AutomatedHomeworkAppSignature.PNG?raw=true)
- ![Alt text](https://github.com/ajdelcimmuto/SoftArchMidterm/blob/master/HomeworkAppSignature.PNG?raw=true)




### Licensing Questions:
a. *If we are consider using a toolkit like FlexNet (aka FlexLm), where would we put the calls 
to initialize the license server?   Would this approach be too heavy handed for your 
application, if yes why?*
  The calls to initialize the server would go in the core library, so that way as soon as the app was started the license server would be active. I do believe this would be too heavy handed for our application, as it does not need to be this controlled. There aren't really any hidden features or special proprietary code. It would take a lot to fully integrate this into our code, and propbably wouldn't be worth it.
  
b. *Another alternative, could be an DRM like approach, where some type of hash\key is 
stored on the computer that indicates what is allowed.  Would this approach be better.  
This is like the model of steam, entering in a product key, and so on.*
  This approach would make much more sense for our application. It is lighter, and we could offer our core features for free while charging to use the rest. That way we are only locking down and charging for some of our application. 

c. *If your boss\product manager told you to think about having multiple licenses for 
different functionality (instead of monolithic, but more atomic).  How you would you 
suggest to organizing the entitlements (i.e. what pieces of functionality to have against 
what license)?*
  I think the types of licences that would make sense for our application would be perpetual or subscription, and give the user the option of having lifetime access or monthly access. Both of these would give the user full access to the entire application. I also think Add-ons would make sense, so the user can use the core features of the app for free, but then be able to buy access to other more advanced features if they want to use them. 
