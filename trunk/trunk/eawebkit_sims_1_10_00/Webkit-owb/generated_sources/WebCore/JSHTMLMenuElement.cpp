/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#include "config.h"

#include "JSHTMLMenuElement.h"

#include <wtf/GetPtr.h>

#include "HTMLMenuElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLMenuElementTableValues[3] =
{
    { "compact", (intptr_t)JSHTMLMenuElement::CompactAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLMenuElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMenuElementTable = { 3, JSHTMLMenuElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLMenuElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMenuElementConstructorTable = { 0, JSHTMLMenuElementConstructorTableValues, 0 };

class JSHTMLMenuElementConstructor : public DOMObject {
public:
    JSHTMLMenuElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLMenuElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLMenuElementConstructor::s_info = { "HTMLMenuElementConstructor", 0, &JSHTMLMenuElementConstructorTable, 0 };

bool JSHTMLMenuElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMenuElementConstructor, DOMObject>(exec, &JSHTMLMenuElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLMenuElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLMenuElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMenuElementPrototypeTable = { 0, JSHTMLMenuElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLMenuElementPrototype::s_info = { "HTMLMenuElementPrototype", 0, &JSHTMLMenuElementPrototypeTable, 0 };

JSObject* JSHTMLMenuElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLMenuElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLMenuElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLMenuElement::s_info = { "HTMLMenuElement", &JSHTMLElement::s_info, &JSHTMLMenuElementTable , 0 };

JSHTMLMenuElement::JSHTMLMenuElement(JSObject* prototype, HTMLMenuElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLMenuElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMenuElement, Base>(exec, &JSHTMLMenuElementTable, this, propertyName, slot);
}

JSValue* JSHTMLMenuElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CompactAttrNum: {
        HTMLMenuElement* imp = static_cast<HTMLMenuElement*>(impl());
        return jsBoolean(imp->compact());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLMenuElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLMenuElement, Base>(exec, propertyName, value, &JSHTMLMenuElementTable, this);
}

void JSHTMLMenuElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case CompactAttrNum: {
        HTMLMenuElement* imp = static_cast<HTMLMenuElement*>(impl());
        imp->setCompact(value->toBoolean(exec));
        break;
    }
    }
}

JSValue* JSHTMLMenuElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLMenuElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLMenuElementConstructor>(exec, constructorIdentifier);
}


}
