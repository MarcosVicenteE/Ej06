//
//  GestionMensaje.h
//  Ej06
//
//  Created by tarde on 22/5/15.
//  Copyright (c) 2015 a13marcosve. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Mensaje.h"

@protocol GestionMensaje <NSObject>
-(BOOL)eviarMensaxe:(Mensaje* mensaje_a_Enviar);
@end
