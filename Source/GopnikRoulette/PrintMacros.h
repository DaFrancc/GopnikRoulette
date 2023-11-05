#pragma once

#define PRINTS1(Text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, Text)
#define PRINTS2(Text, Time) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, Time, FColor::White, Text)
#define PRINTS3(Text, Time, Color) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, Time, Color, Text)
#define PRINTS4(Text, Time, Color, Key) if(GEngine) GEngine->AddOnScreenDebugMessage(Key, Time, Color, Text)
#define GET_MACRO_S(_1,_2,_3,_4,NAME,...) NAME
#define PRINTS(...) GET_MACRO_S(__VA_ARGS__, PRINTS4, PRINTS3, PRINTS2, PRINTS1)(__VA_ARGS__)

#define PRINTL1(Text) UE_LOG(LogTemp, Warning, TEXT(Text))
#define PRINTL2(Text, Verbosity) UE_LOG(LogTemp, Verbosity, TEXT(Text))
#define PRINTL3(Text, Verbosity, Category) UE_LOG(Category, Verbosity, TEXT(Text))
#define GET_MACRO_L(_1,_2,_3,NAME,...) NAME
#define PRINTL(...) GET_MACRO_L(__VA_ARGS__, PRINTL3, PRINTL2, PRINTL1)(__VA_ARGS__)

#define FORMAT_FSTRING(Text, ...) FString::Printf(TEXT(Text), ##__VA_ARGS__)