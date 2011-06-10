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

#include "JSDOMSelection.h"

#include <wtf/GetPtr.h>

#include "DOMSelection.h"
#include "JSNode.h"
#include "JSRange.h"
#include "KURL.h"
#include "Node.h"
#include "Range.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDOMSelectionTableValues[12] =
{
    { "anchorNode", (intptr_t)JSDOMSelection::AnchorNodeAttrNum, DontDelete|ReadOnly, 0 },
    { "anchorOffset", (intptr_t)JSDOMSelection::AnchorOffsetAttrNum, DontDelete|ReadOnly, 0 },
    { "focusNode", (intptr_t)JSDOMSelection::FocusNodeAttrNum, DontDelete|ReadOnly, 0 },
    { "focusOffset", (intptr_t)JSDOMSelection::FocusOffsetAttrNum, DontDelete|ReadOnly, 0 },
    { "baseNode", (intptr_t)JSDOMSelection::BaseNodeAttrNum, DontDelete|ReadOnly, 0 },
    { "baseOffset", (intptr_t)JSDOMSelection::BaseOffsetAttrNum, DontDelete|ReadOnly, 0 },
    { "extentNode", (intptr_t)JSDOMSelection::ExtentNodeAttrNum, DontDelete|ReadOnly, 0 },
    { "extentOffset", (intptr_t)JSDOMSelection::ExtentOffsetAttrNum, DontDelete|ReadOnly, 0 },
    { "isCollapsed", (intptr_t)JSDOMSelection::IsCollapsedAttrNum, DontDelete|ReadOnly, 0 },
    { "type", (intptr_t)JSDOMSelection::TypeAttrNum, DontDelete|ReadOnly, 0 },
    { "rangeCount", (intptr_t)JSDOMSelection::RangeCountAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSDOMSelectionTable = { 63, JSDOMSelectionTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSDOMSelectionPrototypeTableValues[16] =
{
    { "collapse", (intptr_t)jsDOMSelectionPrototypeFunctionCollapse, DontDelete|Function, 2 },
    { "collapseToEnd", (intptr_t)jsDOMSelectionPrototypeFunctionCollapseToEnd, DontDelete|Function, 0 },
    { "collapseToStart", (intptr_t)jsDOMSelectionPrototypeFunctionCollapseToStart, DontDelete|Function, 0 },
    { "deleteFromDocument", (intptr_t)jsDOMSelectionPrototypeFunctionDeleteFromDocument, DontDelete|Function, 0 },
    { "containsNode", (intptr_t)jsDOMSelectionPrototypeFunctionContainsNode, DontDelete|Function, 2 },
    { "selectAllChildren", (intptr_t)jsDOMSelectionPrototypeFunctionSelectAllChildren, DontDelete|Function, 1 },
    { "empty", (intptr_t)jsDOMSelectionPrototypeFunctionEmpty, DontDelete|Function, 0 },
    { "setBaseAndExtent", (intptr_t)jsDOMSelectionPrototypeFunctionSetBaseAndExtent, DontDelete|Function, 4 },
    { "setPosition", (intptr_t)jsDOMSelectionPrototypeFunctionSetPosition, DontDelete|Function, 2 },
    { "modify", (intptr_t)jsDOMSelectionPrototypeFunctionModify, DontDelete|Function, 3 },
    { "extend", (intptr_t)jsDOMSelectionPrototypeFunctionExtend, DontDelete|Function, 2 },
    { "getRangeAt", (intptr_t)jsDOMSelectionPrototypeFunctionGetRangeAt, DontDelete|Function, 1 },
    { "removeAllRanges", (intptr_t)jsDOMSelectionPrototypeFunctionRemoveAllRanges, DontDelete|Function, 0 },
    { "addRange", (intptr_t)jsDOMSelectionPrototypeFunctionAddRange, DontDelete|Function, 1 },
    { "toString", (intptr_t)jsDOMSelectionPrototypeFunctionToString, DontDelete|DontEnum|Function, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSDOMSelectionPrototypeTable = { 2047, JSDOMSelectionPrototypeTableValues, 0 };

const ClassInfo JSDOMSelectionPrototype::s_info = { "DOMSelectionPrototype", 0, &JSDOMSelectionPrototypeTable, 0 };

JSObject* JSDOMSelectionPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSDOMSelection.prototype]]");
    return KJS::cacheGlobalObject<JSDOMSelectionPrototype>(exec, prototypeIdentifier);
}

bool JSDOMSelectionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMSelectionPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSDOMSelection::s_info = { "DOMSelection", 0, &JSDOMSelectionTable , 0 };

JSDOMSelection::JSDOMSelection(JSObject* prototype, DOMSelection* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSDOMSelection::~JSDOMSelection()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSDOMSelection::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMSelection, Base>(exec, &JSDOMSelectionTable, this, propertyName, slot);
}

JSValue* JSDOMSelection::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case AnchorNodeAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return toJS(exec, WTF::getPtr(imp->anchorNode()));
    }
    case AnchorOffsetAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return jsNumber(exec, imp->anchorOffset());
    }
    case FocusNodeAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return toJS(exec, WTF::getPtr(imp->focusNode()));
    }
    case FocusOffsetAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return jsNumber(exec, imp->focusOffset());
    }
    case BaseNodeAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return toJS(exec, WTF::getPtr(imp->baseNode()));
    }
    case BaseOffsetAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return jsNumber(exec, imp->baseOffset());
    }
    case ExtentNodeAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return toJS(exec, WTF::getPtr(imp->extentNode()));
    }
    case ExtentOffsetAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return jsNumber(exec, imp->extentOffset());
    }
    case IsCollapsedAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return jsBoolean(imp->isCollapsed());
    }
    case TypeAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return jsString(exec, imp->type());
    }
    case RangeCountAttrNum: {
        DOMSelection* imp = static_cast<DOMSelection*>(impl());
        return jsNumber(exec, imp->rangeCount());
    }
    }
    return 0;
}

JSValue* jsDOMSelectionPrototypeFunctionCollapse(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* node = toNode(args[0]);
    int index = args[1]->toInt32(exec);

    imp->collapse(node, index, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionCollapseToEnd(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());

    imp->collapseToEnd();
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionCollapseToStart(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());

    imp->collapseToStart();
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionDeleteFromDocument(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());

    imp->deleteFromDocument();
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionContainsNode(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());
    Node* node = toNode(args[0]);
    bool allowPartial = args[1]->toBoolean(exec);


    KJS::JSValue* result = jsBoolean(imp->containsNode(node, allowPartial));
    return result;
}

JSValue* jsDOMSelectionPrototypeFunctionSelectAllChildren(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* node = toNode(args[0]);

    imp->selectAllChildren(node, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionEmpty(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());

    imp->empty();
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionSetBaseAndExtent(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* baseNode = toNode(args[0]);
    int baseOffset = args[1]->toInt32(exec);
    Node* extentNode = toNode(args[2]);
    int extentOffset = args[3]->toInt32(exec);

    imp->setBaseAndExtent(baseNode, baseOffset, extentNode, extentOffset, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionSetPosition(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* node = toNode(args[0]);
    int offset = args[1]->toInt32(exec);

    imp->setPosition(node, offset, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionModify(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());
    const UString& alter = args[0]->toString(exec);
    const UString& direction = args[1]->toString(exec);
    const UString& granularity = args[2]->toString(exec);

    imp->modify(alter, direction, granularity);
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionExtend(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* node = toNode(args[0]);
    int offset = args[1]->toInt32(exec);

    imp->extend(node, offset, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionGetRangeAt(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    int index = args[0]->toInt32(exec);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getRangeAt(index, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsDOMSelectionPrototypeFunctionRemoveAllRanges(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());

    imp->removeAllRanges();
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionAddRange(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());
    Range* range = toRange(args[0]);

    imp->addRange(range);
    return jsUndefined();
}

JSValue* jsDOMSelectionPrototypeFunctionToString(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSDOMSelection::s_info))
        return throwError(exec, TypeError);
    JSDOMSelection* castedThisObj = static_cast<JSDOMSelection*>(thisValue);
    DOMSelection* imp = static_cast<DOMSelection*>(castedThisObj->impl());


    KJS::JSValue* result = jsString(exec, imp->toString());
    return result;
}

KJS::JSValue* toJS(KJS::ExecState* exec, DOMSelection* obj)
{
    return cacheDOMObject<DOMSelection, JSDOMSelection, JSDOMSelectionPrototype>(exec, obj);
}
DOMSelection* toDOMSelection(KJS::JSValue* val)
{
    return val->isObject(&JSDOMSelection::s_info) ? static_cast<JSDOMSelection*>(val)->impl() : 0;
}

}
