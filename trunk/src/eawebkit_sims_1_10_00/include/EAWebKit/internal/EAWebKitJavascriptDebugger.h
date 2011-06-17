/*
Copyright (C) 2010 Electronic Arts, Inc.  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1.  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
2.  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
3.  Neither the name of Electronic Arts, Inc. ("EA") nor the names of
    its contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY ELECTRONIC ARTS AND ITS CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL ELECTRONIC ARTS OR ITS CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

///////////////////////////////////////////////////////////////////////////////
// EAWebKitJavascriptDebugger.h
// By David Siems
///////////////////////////////////////////////////////////////////////////////

#ifndef EAWEBKIT_EAWEBKITJAVASCRIPTDEBUGGER_H
#define EAWEBKIT_EAWEBKITJAVASCRIPTDEBUGGER_H

#include <EAWebKit/EAWebKitConfig.h>
#if EAWEBKIT_THROW_BUILD_ERROR
#error This file should be included only in a dll build
#endif

#include <EAWebKit/EAWebKitJavascriptDebugListener.h>

#include <eastl/map.h>
#include <eastl/string.h>
#include <eastl/vector.h>

#include <kjs/debugger.h>
#include <JavascriptCallFrame.h>

namespace EA { namespace WebKit {

// This class listens to debug events generated by Webkit and passes them up to
// the debug server.
class EAWebKitJavascriptDebugger : public KJS::Debugger {
public:
    EAWebKitJavascriptDebugger(void);

    void SetListener(EAWebKitJavascriptDebugListener *listener);

    virtual void sourceParsed(KJS::ExecState* state, int sourceId, const KJS::UString& sourceURL, const KJS::SourceProvider& source, int startingLineNumber, int errorLine, const KJS::UString& errorMsg);
    virtual void exception(const KJS::DebuggerCallFrame &debugFrame, int sourceId, int lineno);
    virtual void atStatement(const KJS::DebuggerCallFrame &debugFrame, int sourceId, int lineno);
    virtual void callEvent(const KJS::DebuggerCallFrame &debugFrame, int sourceId, int lineno);
    virtual void returnEvent(const KJS::DebuggerCallFrame &debugFrame, int sourceId, int lineno);
    virtual void willExecuteProgram(const KJS::DebuggerCallFrame &debugFrame, int sourceId, int lineno);
    virtual void didExecuteProgram(const KJS::DebuggerCallFrame &debugFrame, int sourceId, int lineno);
    virtual void didReachBreakpoint(const KJS::DebuggerCallFrame &debugFrame, int sourceId, int lineno);

    const char *IdToFile(int sourceId);
    int FileToId(const char *filename, unsigned line);
    bool EvaluateExpression(const char *expression, JavascriptValue *resultOut);
    int GetCurrentLine(void);
    const char *GetCurrentFile(void);

private:
    bool UpdateCallFrame(const KJS::DebuggerCallFrame &debugFrame, int sourceId, int line);
    EAWebKitJavascriptDebugListener *mListener;

    struct SourceEntry {
        int mSourceId;
        int mStartingLine;
    };
    typedef eastl::map<eastl::string8, eastl::vector<SourceEntry> > SourceFileMap;
    SourceFileMap mFileToId;

    typedef eastl::map<int, eastl::string> SourceIdMap;
    SourceIdMap mIdToFile;

    RefPtr<WebCore::JavaScriptCallFrame> mCurrentCallFrame;
};

}}

#endif
