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

#ifndef JSNode_h
#define JSNode_h

#include "JSDOMBinding.h"
#include <kjs/JSGlobalObject.h>
#include <kjs/ObjectPrototype.h>
#include "EventTargetNode.h"
#include <kjs/lookup.h>
#include <wtf/AlwaysInline.h>

namespace WebCore {

class Node;

class JSNode : public DOMObject {
    typedef DOMObject Base;
public:
    JSNode(KJS::JSObject* prototype, Node*);
    virtual ~JSNode();
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::JSValue*);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    virtual void mark();

    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        NodeNameAttrNum, NodeValueAttrNum, NodeTypeAttrNum, ParentNodeAttrNum, 
        ChildNodesAttrNum, FirstChildAttrNum, LastChildAttrNum, PreviousSiblingAttrNum, 
        NextSiblingAttrNum, AttributesAttrNum, OwnerDocumentAttrNum, NamespaceURIAttrNum, 
        PrefixAttrNum, LocalNameAttrNum, BaseURIAttrNum, TextContentAttrNum, 
        ParentElementAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };

    // Custom functions
    KJS::JSValue* insertBefore(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* replaceChild(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* removeChild(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* appendChild(KJS::ExecState*, const KJS::ArgList&);
    Node* impl() const { return m_impl.get(); }

private:
    RefPtr<Node> m_impl;
};

ALWAYS_INLINE bool JSNode::getOwnPropertySlot(KJS::ExecState* exec, const KJS::Identifier& propertyName, KJS::PropertySlot& slot)
{
    return KJS::getStaticValueSlot<JSNode, Base>(exec, s_info.staticPropHashTable, this, propertyName, slot);
}

KJS::JSValue* toJS(KJS::ExecState*, Node*);
inline KJS::JSValue* toJS(KJS::ExecState* exec, EventTargetNode* node) { return toJS(exec, static_cast<Node*>(node)); }
Node* toNode(KJS::JSValue*);
KJS::JSValue* toJSNewlyCreated(KJS::ExecState*, Node*);

class JSNodePrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    JSNodePrototype(KJS::ExecState* exec)
        : KJS::JSObject(exec->lexicalGlobalObject()->objectPrototype()) { }
};

// Functions

KJS::JSValue* jsNodePrototypeFunctionInsertBefore(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionReplaceChild(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionRemoveChild(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionAppendChild(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionHasChildNodes(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionCloneNode(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionNormalize(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionIsSupported(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionHasAttributes(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionIsSameNode(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionIsEqualNode(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionLookupPrefix(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionIsDefaultNamespace(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodePrototypeFunctionLookupNamespaceURI(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif