//
//  NegocioContactoSinMensaxes.h
//  Ej06
//
//  Created by tarde on 22/5/15.
//  Copyright (c) 2015 a13marcosve. All rights reserved.
//

#import "Contacto.h"
#import "NegocioContacto.h"

@interface NegocioContactoSinMensaxes : Contacto<NegocioContacto>
-(BOOL)CreateCliente:(Contacto*)contacto;
-(Contacto*) readContacto:(NSString*) idContacto;
-(BOOL)update:(Contacto*) novoContacto;
-(BOOL)deleteContacto:(NSString*) idContacto;
-(NSArray*)readContacto;
@end
