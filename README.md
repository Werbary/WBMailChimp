# WBMailChimp
Simply add email to MailChimp list

# Installation
1) Copy files to your project
2) Enter your DC and ApiKey in WBMailChimp.h
3) Call:
```obj-c
[WBMailChimp addEmail:@"mail@mail.com" toList:@"myListId" resBlock:^(BOOL success,NSError *err){
    if (success) {
        NSLog(@"Added successfully");
    } else {
        NSLog(@"Failed to add: %@",err.localizedDescription);
    }
}];
```
