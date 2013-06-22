/*
** ゲームグラフィックス特論用補助プログラム GLUT 版
**

Copyright (c) 2011, 2012, 2013 Kohe Tokoi. All Rights Reserved.

Permission is hereby granted, free of charge,  to any person obtaining a copy 
of this software and associated documentation files (the "Software"), to deal 
in the Software without restriction,  including without limitation the rights 
to use, copy,  modify, merge,  publish, distribute,  sublicense,  and/or sell 
copies or substantial portions of the Software.

The above  copyright notice  and this permission notice  shall be included in 
all copies or substantial portions of the Software.

THE SOFTWARE  IS PROVIDED "AS IS",  WITHOUT WARRANTY OF ANY KIND,  EXPRESS OR 
IMPLIED,  INCLUDING  BUT  NOT LIMITED  TO THE WARRANTIES  OF MERCHANTABILITY, 
FITNESS  FOR  A PARTICULAR PURPOSE  AND NONINFRINGEMENT.  IN  NO EVENT  SHALL 
KOHE TOKOI  BE LIABLE FOR ANY CLAIM,  DAMAGES OR OTHER LIABILITY,  WHETHER IN 
AN ACTION  OF CONTRACT,  TORT  OR  OTHERWISE,  ARISING  FROM,  OUT OF  OR  IN 
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

**
*/

#ifndef __GG_H__
#define __GG_H__

#if defined(_WIN32)
//#  pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")
#  pragma warning(disable:4996)
#  include "glut.h"
#  include "glext.h"
#  include "wglext.h"
extern PFNGLBLENDCOLORPROC glBlendColor;
extern PFNGLBLENDEQUATIONPROC glBlendEquation;
extern PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements;
extern PFNGLTEXIMAGE3DPROC glTexImage3D;
extern PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D;
extern PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D;
extern PFNGLCOLORTABLEPROC glColorTable;
extern PFNGLCOLORTABLEPARAMETERFVPROC glColorTableParameterfv;
extern PFNGLCOLORTABLEPARAMETERIVPROC glColorTableParameteriv;
extern PFNGLCOPYCOLORTABLEPROC glCopyColorTable;
extern PFNGLGETCOLORTABLEPROC glGetColorTable;
extern PFNGLGETCOLORTABLEPARAMETERFVPROC glGetColorTableParameterfv;
extern PFNGLGETCOLORTABLEPARAMETERIVPROC glGetColorTableParameteriv;
extern PFNGLCOLORSUBTABLEPROC glColorSubTable;
extern PFNGLCOPYCOLORSUBTABLEPROC glCopyColorSubTable;
extern PFNGLCONVOLUTIONFILTER1DPROC glConvolutionFilter1D;
extern PFNGLCONVOLUTIONFILTER2DPROC glConvolutionFilter2D;
extern PFNGLCONVOLUTIONPARAMETERFPROC glConvolutionParameterf;
extern PFNGLCONVOLUTIONPARAMETERFVPROC glConvolutionParameterfv;
extern PFNGLCONVOLUTIONPARAMETERIPROC glConvolutionParameteri;
extern PFNGLCONVOLUTIONPARAMETERIVPROC glConvolutionParameteriv;
extern PFNGLCOPYCONVOLUTIONFILTER1DPROC glCopyConvolutionFilter1D;
extern PFNGLCOPYCONVOLUTIONFILTER2DPROC glCopyConvolutionFilter2D;
extern PFNGLGETCONVOLUTIONFILTERPROC glGetConvolutionFilter;
extern PFNGLGETCONVOLUTIONPARAMETERFVPROC glGetConvolutionParameterfv;
extern PFNGLGETCONVOLUTIONPARAMETERIVPROC glGetConvolutionParameteriv;
extern PFNGLGETSEPARABLEFILTERPROC glGetSeparableFilter;
extern PFNGLSEPARABLEFILTER2DPROC glSeparableFilter2D;
extern PFNGLGETHISTOGRAMPROC glGetHistogram;
extern PFNGLGETHISTOGRAMPARAMETERFVPROC glGetHistogramParameterfv;
extern PFNGLGETHISTOGRAMPARAMETERIVPROC glGetHistogramParameteriv;
extern PFNGLGETMINMAXPROC glGetMinmax;
extern PFNGLGETMINMAXPARAMETERFVPROC glGetMinmaxParameterfv;
extern PFNGLGETMINMAXPARAMETERIVPROC glGetMinmaxParameteriv;
extern PFNGLHISTOGRAMPROC glHistogram;
extern PFNGLMINMAXPROC glMinmax;
extern PFNGLRESETHISTOGRAMPROC glResetHistogram;
extern PFNGLRESETMINMAXPROC glResetMinmax;
extern PFNGLACTIVETEXTUREPROC glActiveTexture;
extern PFNGLSAMPLECOVERAGEPROC glSampleCoverage;
extern PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;
extern PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;
extern PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D;
extern PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage;
extern PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;
extern PFNGLMULTITEXCOORD1DPROC glMultiTexCoord1d;
extern PFNGLMULTITEXCOORD1DVPROC glMultiTexCoord1dv;
extern PFNGLMULTITEXCOORD1FPROC glMultiTexCoord1f;
extern PFNGLMULTITEXCOORD1FVPROC glMultiTexCoord1fv;
extern PFNGLMULTITEXCOORD1IPROC glMultiTexCoord1i;
extern PFNGLMULTITEXCOORD1IVPROC glMultiTexCoord1iv;
extern PFNGLMULTITEXCOORD1SPROC glMultiTexCoord1s;
extern PFNGLMULTITEXCOORD1SVPROC glMultiTexCoord1sv;
extern PFNGLMULTITEXCOORD2DPROC glMultiTexCoord2d;
extern PFNGLMULTITEXCOORD2DVPROC glMultiTexCoord2dv;
extern PFNGLMULTITEXCOORD2FPROC glMultiTexCoord2f;
extern PFNGLMULTITEXCOORD2FVPROC glMultiTexCoord2fv;
extern PFNGLMULTITEXCOORD2IPROC glMultiTexCoord2i;
extern PFNGLMULTITEXCOORD2IVPROC glMultiTexCoord2iv;
extern PFNGLMULTITEXCOORD2SPROC glMultiTexCoord2s;
extern PFNGLMULTITEXCOORD2SVPROC glMultiTexCoord2sv;
extern PFNGLMULTITEXCOORD3DPROC glMultiTexCoord3d;
extern PFNGLMULTITEXCOORD3DVPROC glMultiTexCoord3dv;
extern PFNGLMULTITEXCOORD3FPROC glMultiTexCoord3f;
extern PFNGLMULTITEXCOORD3FVPROC glMultiTexCoord3fv;
extern PFNGLMULTITEXCOORD3IPROC glMultiTexCoord3i;
extern PFNGLMULTITEXCOORD3IVPROC glMultiTexCoord3iv;
extern PFNGLMULTITEXCOORD3SPROC glMultiTexCoord3s;
extern PFNGLMULTITEXCOORD3SVPROC glMultiTexCoord3sv;
extern PFNGLMULTITEXCOORD4DPROC glMultiTexCoord4d;
extern PFNGLMULTITEXCOORD4DVPROC glMultiTexCoord4dv;
extern PFNGLMULTITEXCOORD4FPROC glMultiTexCoord4f;
extern PFNGLMULTITEXCOORD4FVPROC glMultiTexCoord4fv;
extern PFNGLMULTITEXCOORD4IPROC glMultiTexCoord4i;
extern PFNGLMULTITEXCOORD4IVPROC glMultiTexCoord4iv;
extern PFNGLMULTITEXCOORD4SPROC glMultiTexCoord4s;
extern PFNGLMULTITEXCOORD4SVPROC glMultiTexCoord4sv;
extern PFNGLLOADTRANSPOSEMATRIXFPROC glLoadTransposeMatrixf;
extern PFNGLLOADTRANSPOSEMATRIXDPROC glLoadTransposeMatrixd;
extern PFNGLMULTTRANSPOSEMATRIXFPROC glMultTransposeMatrixf;
extern PFNGLMULTTRANSPOSEMATRIXDPROC glMultTransposeMatrixd;
extern PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate;
extern PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays;
extern PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements;
extern PFNGLPOINTPARAMETERFPROC glPointParameterf;
extern PFNGLPOINTPARAMETERFVPROC glPointParameterfv;
extern PFNGLPOINTPARAMETERIPROC glPointParameteri;
extern PFNGLPOINTPARAMETERIVPROC glPointParameteriv;
extern PFNGLFOGCOORDFPROC glFogCoordf;
extern PFNGLFOGCOORDFVPROC glFogCoordfv;
extern PFNGLFOGCOORDDPROC glFogCoordd;
extern PFNGLFOGCOORDDVPROC glFogCoorddv;
extern PFNGLFOGCOORDPOINTERPROC glFogCoordPointer;
extern PFNGLSECONDARYCOLOR3BPROC glSecondaryColor3b;
extern PFNGLSECONDARYCOLOR3BVPROC glSecondaryColor3bv;
extern PFNGLSECONDARYCOLOR3DPROC glSecondaryColor3d;
extern PFNGLSECONDARYCOLOR3DVPROC glSecondaryColor3dv;
extern PFNGLSECONDARYCOLOR3FPROC glSecondaryColor3f;
extern PFNGLSECONDARYCOLOR3FVPROC glSecondaryColor3fv;
extern PFNGLSECONDARYCOLOR3IPROC glSecondaryColor3i;
extern PFNGLSECONDARYCOLOR3IVPROC glSecondaryColor3iv;
extern PFNGLSECONDARYCOLOR3SPROC glSecondaryColor3s;
extern PFNGLSECONDARYCOLOR3SVPROC glSecondaryColor3sv;
extern PFNGLSECONDARYCOLOR3UBPROC glSecondaryColor3ub;
extern PFNGLSECONDARYCOLOR3UBVPROC glSecondaryColor3ubv;
extern PFNGLSECONDARYCOLOR3UIPROC glSecondaryColor3ui;
extern PFNGLSECONDARYCOLOR3UIVPROC glSecondaryColor3uiv;
extern PFNGLSECONDARYCOLOR3USPROC glSecondaryColor3us;
extern PFNGLSECONDARYCOLOR3USVPROC glSecondaryColor3usv;
extern PFNGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer;
extern PFNGLWINDOWPOS2DPROC glWindowPos2d;
extern PFNGLWINDOWPOS2DVPROC glWindowPos2dv;
extern PFNGLWINDOWPOS2FPROC glWindowPos2f;
extern PFNGLWINDOWPOS2FVPROC glWindowPos2fv;
extern PFNGLWINDOWPOS2IPROC glWindowPos2i;
extern PFNGLWINDOWPOS2IVPROC glWindowPos2iv;
extern PFNGLWINDOWPOS2SPROC glWindowPos2s;
extern PFNGLWINDOWPOS2SVPROC glWindowPos2sv;
extern PFNGLWINDOWPOS3DPROC glWindowPos3d;
extern PFNGLWINDOWPOS3DVPROC glWindowPos3dv;
extern PFNGLWINDOWPOS3FPROC glWindowPos3f;
extern PFNGLWINDOWPOS3FVPROC glWindowPos3fv;
extern PFNGLWINDOWPOS3IPROC glWindowPos3i;
extern PFNGLWINDOWPOS3IVPROC glWindowPos3iv;
extern PFNGLWINDOWPOS3SPROC glWindowPos3s;
extern PFNGLWINDOWPOS3SVPROC glWindowPos3sv;
extern PFNGLGENQUERIESPROC glGenQueries;
extern PFNGLDELETEQUERIESPROC glDeleteQueries;
extern PFNGLISQUERYPROC glIsQuery;
extern PFNGLBEGINQUERYPROC glBeginQuery;
extern PFNGLENDQUERYPROC glEndQuery;
extern PFNGLGETQUERYIVPROC glGetQueryiv;
extern PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv;
extern PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;
extern PFNGLBINDBUFFERPROC glBindBuffer;
extern PFNGLDELETEBUFFERSPROC glDeleteBuffers;
extern PFNGLGENBUFFERSPROC glGenBuffers;
extern PFNGLISBUFFERPROC glIsBuffer;
extern PFNGLBUFFERDATAPROC glBufferData;
extern PFNGLBUFFERSUBDATAPROC glBufferSubData;
extern PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData;
extern PFNGLMAPBUFFERPROC glMapBuffer;
extern PFNGLUNMAPBUFFERPROC glUnmapBuffer;
extern PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;
extern PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv;
extern PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate;
extern PFNGLDRAWBUFFERSPROC glDrawBuffers;
extern PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate;
extern PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate;
extern PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate;
extern PFNGLATTACHSHADERPROC glAttachShader;
extern PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;
extern PFNGLCOMPILESHADERPROC glCompileShader;
extern PFNGLCREATEPROGRAMPROC glCreateProgram;
extern PFNGLCREATESHADERPROC glCreateShader;
extern PFNGLDELETEPROGRAMPROC glDeleteProgram;
extern PFNGLDELETESHADERPROC glDeleteShader;
extern PFNGLDETACHSHADERPROC glDetachShader;
extern PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
extern PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
extern PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib;
extern PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform;
extern PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders;
extern PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
extern PFNGLGETPROGRAMIVPROC glGetProgramiv;
extern PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
extern PFNGLGETSHADERIVPROC glGetShaderiv;
extern PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
extern PFNGLGETSHADERSOURCEPROC glGetShaderSource;
extern PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
extern PFNGLGETUNIFORMFVPROC glGetUniformfv;
extern PFNGLGETUNIFORMIVPROC glGetUniformiv;
extern PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv;
extern PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv;
extern PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv;
extern PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv;
extern PFNGLISPROGRAMPROC glIsProgram;
extern PFNGLISSHADERPROC glIsShader;
extern PFNGLLINKPROGRAMPROC glLinkProgram;
extern PFNGLSHADERSOURCEPROC glShaderSource;
extern PFNGLUSEPROGRAMPROC glUseProgram;
extern PFNGLUNIFORM1FPROC glUniform1f;
extern PFNGLUNIFORM2FPROC glUniform2f;
extern PFNGLUNIFORM3FPROC glUniform3f;
extern PFNGLUNIFORM4FPROC glUniform4f;
extern PFNGLUNIFORM1IPROC glUniform1i;
extern PFNGLUNIFORM2IPROC glUniform2i;
extern PFNGLUNIFORM3IPROC glUniform3i;
extern PFNGLUNIFORM4IPROC glUniform4i;
extern PFNGLUNIFORM1FVPROC glUniform1fv;
extern PFNGLUNIFORM2FVPROC glUniform2fv;
extern PFNGLUNIFORM3FVPROC glUniform3fv;
extern PFNGLUNIFORM4FVPROC glUniform4fv;
extern PFNGLUNIFORM1IVPROC glUniform1iv;
extern PFNGLUNIFORM2IVPROC glUniform2iv;
extern PFNGLUNIFORM3IVPROC glUniform3iv;
extern PFNGLUNIFORM4IVPROC glUniform4iv;
extern PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv;
extern PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv;
extern PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
extern PFNGLVALIDATEPROGRAMPROC glValidateProgram;
extern PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d;
extern PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv;
extern PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f;
extern PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv;
extern PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s;
extern PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv;
extern PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d;
extern PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv;
extern PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f;
extern PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv;
extern PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s;
extern PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv;
extern PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d;
extern PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv;
extern PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f;
extern PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv;
extern PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s;
extern PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv;
extern PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv;
extern PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv;
extern PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv;
extern PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub;
extern PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv;
extern PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv;
extern PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv;
extern PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv;
extern PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d;
extern PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv;
extern PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f;
extern PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv;
extern PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv;
extern PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s;
extern PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv;
extern PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv;
extern PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv;
extern PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv;
extern PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
extern PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv;
extern PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv;
extern PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv;
extern PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv;
extern PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv;
extern PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv;
extern PFNGLCOLORMASKIPROC glColorMaski;
extern PFNGLGETBOOLEANI_VPROC glGetBooleani_v;
extern PFNGLGETINTEGERI_VPROC glGetIntegeri_v;
extern PFNGLENABLEIPROC glEnablei;
extern PFNGLDISABLEIPROC glDisablei;
extern PFNGLISENABLEDIPROC glIsEnabledi;
extern PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback;
extern PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback;
extern PFNGLBINDBUFFERRANGEPROC glBindBufferRange;
extern PFNGLBINDBUFFERBASEPROC glBindBufferBase;
extern PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings;
extern PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying;
extern PFNGLCLAMPCOLORPROC glClampColor;
extern PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender;
extern PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender;
extern PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
extern PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv;
extern PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv;
extern PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i;
extern PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i;
extern PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i;
extern PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i;
extern PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui;
extern PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui;
extern PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui;
extern PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui;
extern PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv;
extern PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv;
extern PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv;
extern PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv;
extern PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv;
extern PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv;
extern PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv;
extern PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv;
extern PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv;
extern PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv;
extern PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv;
extern PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv;
extern PFNGLGETUNIFORMUIVPROC glGetUniformuiv;
extern PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation;
extern PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation;
extern PFNGLUNIFORM1UIPROC glUniform1ui;
extern PFNGLUNIFORM2UIPROC glUniform2ui;
extern PFNGLUNIFORM3UIPROC glUniform3ui;
extern PFNGLUNIFORM4UIPROC glUniform4ui;
extern PFNGLUNIFORM1UIVPROC glUniform1uiv;
extern PFNGLUNIFORM2UIVPROC glUniform2uiv;
extern PFNGLUNIFORM3UIVPROC glUniform3uiv;
extern PFNGLUNIFORM4UIVPROC glUniform4uiv;
extern PFNGLTEXPARAMETERIIVPROC glTexParameterIiv;
extern PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv;
extern PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv;
extern PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv;
extern PFNGLCLEARBUFFERIVPROC glClearBufferiv;
extern PFNGLCLEARBUFFERUIVPROC glClearBufferuiv;
extern PFNGLCLEARBUFFERFVPROC glClearBufferfv;
extern PFNGLCLEARBUFFERFIPROC glClearBufferfi;
extern PFNGLGETSTRINGIPROC glGetStringi;
extern PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
extern PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;
extern PFNGLTEXBUFFERPROC glTexBuffer;
extern PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;
extern PFNGLGETINTEGER64I_VPROC glGetInteger64i_v;
extern PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v;
extern PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;
extern PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;
extern PFNGLMINSAMPLESHADINGPROC glMinSampleShading;
extern PFNGLBLENDEQUATIONIPROC glBlendEquationi;
extern PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei;
extern PFNGLBLENDFUNCIPROC glBlendFunci;
extern PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei;
extern PFNGLISRENDERBUFFERPROC glIsRenderbuffer;
extern PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;
extern PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
extern PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;
extern PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
extern PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv;
extern PFNGLISFRAMEBUFFERPROC glIsFramebuffer;
extern PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
extern PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
extern PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
extern PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
extern PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D;
extern PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;
extern PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D;
extern PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;
extern PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;
extern PFNGLGENERATEMIPMAPPROC glGenerateMipmap;
extern PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;
extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample;
extern PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer;
extern PFNGLMAPBUFFERRANGEPROC glMapBufferRange;
extern PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange;
extern PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
extern PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
extern PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
extern PFNGLISVERTEXARRAYPROC glIsVertexArray;
extern PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;
extern PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
extern PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName;
extern PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
extern PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
extern PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;
extern PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;
extern PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;
extern PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;
extern PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex;
extern PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex;
extern PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex;
extern PFNGLPROVOKINGVERTEXPROC glProvokingVertex;
extern PFNGLFENCESYNCPROC glFenceSync;
extern PFNGLISSYNCPROC glIsSync;
extern PFNGLDELETESYNCPROC glDeleteSync;
extern PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
extern PFNGLWAITSYNCPROC glWaitSync;
extern PFNGLGETINTEGER64VPROC glGetInteger64v;
extern PFNGLGETSYNCIVPROC glGetSynciv;
extern PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;
extern PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample;
extern PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv;
extern PFNGLSAMPLEMASKIPROC glSampleMaski;
extern PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed;
extern PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex;
extern PFNGLGENSAMPLERSPROC glGenSamplers;
extern PFNGLDELETESAMPLERSPROC glDeleteSamplers;
extern PFNGLISSAMPLERPROC glIsSampler;
extern PFNGLBINDSAMPLERPROC glBindSampler;
extern PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;
extern PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv;
extern PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf;
extern PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv;
extern PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv;
extern PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv;
extern PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv;
extern PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv;
extern PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv;
extern PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv;
extern PFNGLQUERYCOUNTERPROC glQueryCounter;
extern PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v;
extern PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v;
extern PFNGLVERTEXP2UIPROC glVertexP2ui;
extern PFNGLVERTEXP2UIVPROC glVertexP2uiv;
extern PFNGLVERTEXP3UIPROC glVertexP3ui;
extern PFNGLVERTEXP3UIVPROC glVertexP3uiv;
extern PFNGLVERTEXP4UIPROC glVertexP4ui;
extern PFNGLVERTEXP4UIVPROC glVertexP4uiv;
extern PFNGLTEXCOORDP1UIPROC glTexCoordP1ui;
extern PFNGLTEXCOORDP1UIVPROC glTexCoordP1uiv;
extern PFNGLTEXCOORDP2UIPROC glTexCoordP2ui;
extern PFNGLTEXCOORDP2UIVPROC glTexCoordP2uiv;
extern PFNGLTEXCOORDP3UIPROC glTexCoordP3ui;
extern PFNGLTEXCOORDP3UIVPROC glTexCoordP3uiv;
extern PFNGLTEXCOORDP4UIPROC glTexCoordP4ui;
extern PFNGLTEXCOORDP4UIVPROC glTexCoordP4uiv;
extern PFNGLMULTITEXCOORDP1UIPROC glMultiTexCoordP1ui;
extern PFNGLMULTITEXCOORDP1UIVPROC glMultiTexCoordP1uiv;
extern PFNGLMULTITEXCOORDP2UIPROC glMultiTexCoordP2ui;
extern PFNGLMULTITEXCOORDP2UIVPROC glMultiTexCoordP2uiv;
extern PFNGLMULTITEXCOORDP3UIPROC glMultiTexCoordP3ui;
extern PFNGLMULTITEXCOORDP3UIVPROC glMultiTexCoordP3uiv;
extern PFNGLMULTITEXCOORDP4UIPROC glMultiTexCoordP4ui;
extern PFNGLMULTITEXCOORDP4UIVPROC glMultiTexCoordP4uiv;
extern PFNGLNORMALP3UIPROC glNormalP3ui;
extern PFNGLNORMALP3UIVPROC glNormalP3uiv;
extern PFNGLCOLORP3UIPROC glColorP3ui;
extern PFNGLCOLORP3UIVPROC glColorP3uiv;
extern PFNGLCOLORP4UIPROC glColorP4ui;
extern PFNGLCOLORP4UIVPROC glColorP4uiv;
extern PFNGLSECONDARYCOLORP3UIPROC glSecondaryColorP3ui;
extern PFNGLSECONDARYCOLORP3UIVPROC glSecondaryColorP3uiv;
extern PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui;
extern PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv;
extern PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui;
extern PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv;
extern PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui;
extern PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv;
extern PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui;
extern PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv;
extern PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect;
extern PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect;
extern PFNGLUNIFORM1DPROC glUniform1d;
extern PFNGLUNIFORM2DPROC glUniform2d;
extern PFNGLUNIFORM3DPROC glUniform3d;
extern PFNGLUNIFORM4DPROC glUniform4d;
extern PFNGLUNIFORM1DVPROC glUniform1dv;
extern PFNGLUNIFORM2DVPROC glUniform2dv;
extern PFNGLUNIFORM3DVPROC glUniform3dv;
extern PFNGLUNIFORM4DVPROC glUniform4dv;
extern PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv;
extern PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv;
extern PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv;
extern PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv;
extern PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv;
extern PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv;
extern PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv;
extern PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv;
extern PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv;
extern PFNGLGETUNIFORMDVPROC glGetUniformdv;
extern PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation;
extern PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex;
extern PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv;
extern PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName;
extern PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName;
extern PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv;
extern PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv;
extern PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv;
extern PFNGLPATCHPARAMETERIPROC glPatchParameteri;
extern PFNGLPATCHPARAMETERFVPROC glPatchParameterfv;
extern PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback;
extern PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks;
extern PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks;
extern PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback;
extern PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback;
extern PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback;
extern PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback;
extern PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream;
extern PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed;
extern PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed;
extern PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv;
extern PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler;
extern PFNGLSHADERBINARYPROC glShaderBinary;
extern PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat;
extern PFNGLDEPTHRANGEFPROC glDepthRangef;
extern PFNGLCLEARDEPTHFPROC glClearDepthf;
extern PFNGLGETPROGRAMBINARYPROC glGetProgramBinary;
extern PFNGLPROGRAMBINARYPROC glProgramBinary;
extern PFNGLPROGRAMPARAMETERIPROC glProgramParameteri;
extern PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages;
extern PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram;
extern PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv;
extern PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline;
extern PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines;
extern PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines;
extern PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline;
extern PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv;
extern PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i;
extern PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv;
extern PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f;
extern PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv;
extern PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d;
extern PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv;
extern PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui;
extern PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv;
extern PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i;
extern PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv;
extern PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f;
extern PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv;
extern PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d;
extern PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv;
extern PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui;
extern PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv;
extern PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i;
extern PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv;
extern PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f;
extern PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv;
extern PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d;
extern PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv;
extern PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui;
extern PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv;
extern PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i;
extern PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv;
extern PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f;
extern PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv;
extern PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d;
extern PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv;
extern PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui;
extern PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv;
extern PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv;
extern PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv;
extern PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv;
extern PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv;
extern PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv;
extern PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv;
extern PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv;
extern PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv;
extern PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv;
extern PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv;
extern PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv;
extern PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv;
extern PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv;
extern PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv;
extern PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv;
extern PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv;
extern PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv;
extern PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv;
extern PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline;
extern PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog;
extern PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d;
extern PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d;
extern PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d;
extern PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d;
extern PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv;
extern PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv;
extern PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv;
extern PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv;
extern PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer;
extern PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv;
extern PFNGLVIEWPORTARRAYVPROC glViewportArrayv;
extern PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf;
extern PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv;
extern PFNGLSCISSORARRAYVPROC glScissorArrayv;
extern PFNGLSCISSORINDEXEDPROC glScissorIndexed;
extern PFNGLSCISSORINDEXEDVPROC glScissorIndexedv;
extern PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv;
extern PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed;
extern PFNGLGETFLOATI_VPROC glGetFloati_v;
extern PFNGLGETDOUBLEI_VPROC glGetDoublei_v;
extern PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glDrawArraysInstancedBaseInstance;
extern PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance;
extern PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance;
extern PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glDrawTransformFeedbackInstanced;
extern PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glDrawTransformFeedbackStreamInstanced;
extern PFNGLGETINTERNALFORMATIVPROC glGetInternalformativ;
extern PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glGetActiveAtomicCounterBufferiv;
extern PFNGLBINDIMAGETEXTUREPROC glBindImageTexture;
extern PFNGLMEMORYBARRIERPROC glMemoryBarrier;
extern PFNGLTEXSTORAGE1DPROC glTexStorage1D;
extern PFNGLTEXSTORAGE2DPROC glTexStorage2D;
extern PFNGLTEXSTORAGE3DPROC glTexStorage3D;
extern PFNGLDEBUGMESSAGECONTROLPROC glDebugMessageControl;
extern PFNGLDEBUGMESSAGEINSERTPROC glDebugMessageInsert;
extern PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback;
extern PFNGLGETDEBUGMESSAGELOGPROC glGetDebugMessageLog;
extern PFNGLPUSHDEBUGGROUPPROC glPushDebugGroup;
extern PFNGLPOPDEBUGGROUPPROC glPopDebugGroup;
extern PFNGLOBJECTLABELPROC glObjectLabel;
extern PFNGLGETOBJECTLABELPROC glGetObjectLabel;
extern PFNGLOBJECTPTRLABELPROC glObjectPtrLabel;
extern PFNGLGETOBJECTPTRLABELPROC glGetObjectPtrLabel;
extern PFNGLCLEARBUFFERDATAPROC glClearBufferData;
extern PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData;
extern PFNGLDISPATCHCOMPUTEPROC glDispatchCompute;
extern PFNGLDISPATCHCOMPUTEINDIRECTPROC glDispatchComputeIndirect;
extern PFNGLCOPYIMAGESUBDATAPROC glCopyImageSubData;
extern PFNGLTEXTUREVIEWPROC glTextureView;
extern PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer;
extern PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat;
extern PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat;
extern PFNGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat;
extern PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding;
extern PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor;
extern PFNGLFRAMEBUFFERPARAMETERIPROC glFramebufferParameteri;
extern PFNGLGETFRAMEBUFFERPARAMETERIVPROC glGetFramebufferParameteriv;
extern PFNGLGETINTERNALFORMATI64VPROC glGetInternalformati64v;
extern PFNGLINVALIDATETEXSUBIMAGEPROC glInvalidateTexSubImage;
extern PFNGLINVALIDATETEXIMAGEPROC glInvalidateTexImage;
extern PFNGLINVALIDATEBUFFERSUBDATAPROC glInvalidateBufferSubData;
extern PFNGLINVALIDATEBUFFERDATAPROC glInvalidateBufferData;
extern PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer;
extern PFNGLINVALIDATESUBFRAMEBUFFERPROC glInvalidateSubFramebuffer;
extern PFNGLMULTIDRAWARRAYSINDIRECTPROC glMultiDrawArraysIndirect;
extern PFNGLMULTIDRAWELEMENTSINDIRECTPROC glMultiDrawElementsIndirect;
extern PFNGLGETPROGRAMINTERFACEIVPROC glGetProgramInterfaceiv;
extern PFNGLGETPROGRAMRESOURCEINDEXPROC glGetProgramResourceIndex;
extern PFNGLGETPROGRAMRESOURCENAMEPROC glGetProgramResourceName;
extern PFNGLGETPROGRAMRESOURCEIVPROC glGetProgramResourceiv;
extern PFNGLGETPROGRAMRESOURCELOCATIONPROC glGetProgramResourceLocation;
extern PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC glGetProgramResourceLocationIndex;
extern PFNGLSHADERSTORAGEBLOCKBINDINGPROC glShaderStorageBlockBinding;
extern PFNGLTEXBUFFERRANGEPROC glTexBufferRange;
extern PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample;
extern PFNGLTEXSTORAGE3DMULTISAMPLEPROC glTexStorage3DMultisample;
extern PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT;
#elif defined(__APPLE__)
#  define GL_DO_NOT_WARN_IF_MULTI_GL_VERSION_HEADERS_INCLUDED
#  include <OpenGL/OpenGL.h>
#  include <OpenGL/gl3.h>
#  include <OpenGL/gl3ext.h>
#  include <GLUT/glut.h>
#elif defined(X11)
#  define GL_GLEXT_PROTOTYPES
#  define GLX_GLXEXT_PROTOTYPES
#  include <GL/glut.h>
#  include <GL/glx.h>
#  include <GL/glext.h>
#else
#  error "This platform is not supported."
#endif

#define glGenFramebuffersEXT glGenFramebuffers
#define glGenRenderbuffersEXT glGenRenderbuffers
#define glBindFramebufferEXT glBindFramebuffer
#define glBindRenderbufferEXT glBindRenderbuffer
#define glRenderbufferStorageEXT glRenderbufferStorage
#define glFramebufferTexture2DEXT glFramebufferTexture2D
#define glFramebufferRenderbufferEXT glFramebufferRenderbuffer
#define glDeleteFramebuffersEXT glDeleteFramebuffers
#define glDeleteRenderbuffersEXT glDeleteRenderbuffers
#define glCheckFramebufferStatusEXT glCheckFramebufferStatus
#define glProgramParameteriEXT glProgramParameteri

namespace gg
{
  /*
  ** ゲームグラフィックス特論の都合にもとづく初期化
  **
  **     Windows で OpenGL 1.2 以降の API を有効化する
  */
  extern void ggInit(void);

  /*
  ** OpenGL のエラーチェック
  **
  **     OpenGL の API を呼び出し直後に実行すればエラーのあるときにメッセージを表示する
  */
  extern void ggError(
    const char *msg = 0                     // 出力するメッセージの先頭に追加する文字列
    );

  /*
  ** FBO のエラーチェック
  **
  **     FBO の API を呼び出し直後に実行すればエラーのあるときにメッセージを表示する
  */
  extern void ggFBOError(
    const char *msg = 0                     // 出力するメッセージの先頭に追加する文字列
    );

  /*
  ** シェーダーソースファイルの読み込み
  */
  extern GLuint ggLoadShader(               // シェーダプログラムのプログラム名
    const char *vert,                       // バーテックスシェーダのソースファイル名
    const char *frag = 0,                   // フラグメントシェーダのソースファイル名（0 なら不使用）
    const char *geom = 0,                   // ジオメトリシェーダのソースファイル名（0 なら不使用）
    GLenum input = GL_TRIANGLES,            // ジオメトリシェーダの入力プリミティブ
    GLenum output = GL_TRIANGLE_STRIP,      // ジオメトリシェーダの出力プリミティブ
    int vertices = 0,                       // ジオメトリシェーダの出力頂点数
    int nvarying = 0,                       // フィードバックする varying 変数の数（0 なら不使用）
    const char **varyings = 0               // フィードバックする varying 変数のリスト
    );

  /*
  ** 配列の内容を TGA ファイルに保存
  */
  bool ggSaveTga(                           // 保存できたら true
    GLsizei sx,                             // 配列の行方向の大きさ
    GLsizei sy,                             // 配列の列方向の大きさ
    unsigned int depth,                     // 配列の要素のバイト数
    const GLubyte *buffer,                  // 保存する配列
    const char *name                        // 保存するファイル名
    );

  /*
  ** カラーバッファの内容を TGA ファイルに保存
  */
  extern bool ggSaveColor(                  // 保存できたら true
    const char *name                        // 保存するファイル名
    );

  /*
  ** デプスバッファの内容を TGA ファイルに保存
  */
  extern bool ggSaveDepth(                  // 保存できたら true
    const char *name                        // 保存するファイル名
    );

  /*
  ** TGA ファイル (8/16/24/32bit) の読み込み
  */
  extern GLubyte *ggLoadTga(                // 読み込んだ画像データのポインタを返す (使用後 delete する)
    const char *name,                       // 読み込むファイル名
    GLsizei *width,                         // 読み込んだ TGA ファイルの幅
    GLsizei *height,                        // 読み込んだ TGA ファイルの高さ
    GLenum *format                          // 読み込んだ TGA ファイルの書式 (GL_R, GL_RG, GL_BGR, GL_BGRA)
    );

  /*
  ** テクスチャメモリの確保
  */
  extern void ggLoadTexture(
    GLsizei width,                          // 確保するテクスチャメモリの幅
    GLsizei height,                         // 確保するテクスチャメモリの高さ
    GLenum internal,                        // 確保するテクスチャメモリの内部書式
    GLenum format = GL_RGBA,                // image の書式
    const GLvoid *image = 0
    );

  /*
  ** TGA ファイルをテクスチャメモリに読み込む
  */
  extern bool ggLoadImage(                  // 読み込みできたら true
    const char *name,                       // 読み込むファイル名
    GLenum internal = GL_RGB                // テクスチャメモリの内部フォーマット
    );

  /*
  ** TGA 画像ファイルの高さマップ読み込んでテクスチャメモリに法線マップを作成する
  */
  extern bool ggLoadHeight(                 // 読み込みできたら true
    const char *name,                       // 読み込むファイル名
    float nz,                               // 法線の z 軸の長さ
    GLenum internal = GL_RGBA               // テクスチャメモリの内部フォーマット
    );

  /*
  ** 三角形分割された OBJ ファイルを読み込む (Elements 形式)
  */
  extern bool ggLoadObj(                    // 読み込みできたら true
    const char *name,                       // 読み込むファイル名
    GLuint &nv,                             // 読み込んだデータの頂点数
    GLfloat (*&vert)[3],                    // 読み込んだデータの頂点位置
    GLfloat (*&norm)[3],                    // 読み込んだデータの頂点法線
    GLuint &nf,                             // 読み込んだデータの三角形数
    GLuint (*&face)[3],                     // 読み込んだデータの三角形の頂点インデックス
    bool normalize = false                  // true なら読み込んだデータの大きさを正規化する
    );

  /*
  ** 三角形分割された OBJ ファイルと MTL ファイルを読み込む (Arrays 形式)
  */
  extern bool ggLoadObj(                    // 読み込みできたら true
    const char *name,                       // 読み込むファイル名
    GLuint &ng,                             // 読み込んだデータのポリゴングループ数
    GLuint (*&group)[2],                    // 読み込んだデータのポリゴングループの最初のポリゴンのインデックスとポリゴン数
    GLfloat (*&ka)[4],                      // 読み込んだっデータのポリゴングループごとの環境光に対する反射係数
    GLfloat (*&kd)[4],                      // 読み込んだっデータのポリゴングループごとの拡散反射係数
    GLfloat (*&ks)[4],                      // 読み込んだっデータのポリゴングループごとの鏡面反射係数
    GLfloat *&kshi,                         // 読み込んだっデータのポリゴングループごとの輝き係数
    GLuint &nv,                             // 読み込んだデータの頂点数
    GLfloat (*&vert)[3],                    // 読み込んだデータの頂点位置
    GLfloat (*&norm)[3],                    // 読み込んだデータの頂点法線
    bool normalize = false                  // true なら読み込んだデータの大きさを正規化する
    );

  /*
  ** 基底クラス
  */
  class Gg
  {
  protected:

    // デストラクタ
    ~Gg(void) {}

  public:

    // コンストラクタ
    Gg(void) {}
  };

  /*
  ** 変換行列
  */
  class GgMatrix
    : public Gg
  {
    // 変換行列の要素
    GLfloat array[16];

    // 行列 a とベクトル b の積をベクトル c に代入する
    void projection(GLfloat *c, const GLfloat *a, const GLfloat *b) const;

    // 行列 a と行列 b の積を行列 c に代入する
    void multiply(GLfloat *c, const GLfloat *a, const GLfloat *b) const;

  public:

    // デストラクタ
    virtual ~GgMatrix(void) {}

    // コンストラクタ
    GgMatrix(void) {}
    GgMatrix(const GLfloat *a)
    {
      load(a);
    }
    GgMatrix(const GgMatrix &m)
    {
      load(m);
    }

    // 変換行列の読み込み
    GgMatrix &load(const GLfloat *a)
    {
      for (int i = 0; i < 16; ++i) array[i] = a[i];
      return *this;
    }
    GgMatrix &load(const GgMatrix &m)
    {
      return load(m.array);
    }

    // 変換行列の積
    GgMatrix &loadMultiply(const GLfloat *a, const GLfloat *b)
    {
      multiply(array, a, b);
      return *this;
    }
    GgMatrix &loadMultiply(const GgMatrix &m, const GgMatrix &n)
    {
      return loadMultiply(m.array, n.array);
    }
    GgMatrix &loadMultiply(const GLfloat *a, const GgMatrix &m)
    {
      return loadMultiply(a, m.array);
    }
    GgMatrix &loadMultiply(const GgMatrix &m, const GLfloat *a)
    {
      return loadMultiply(m.array, a);
    }
    GgMatrix &loadMultiply(const GLfloat *a)
    {
      GgMatrix t = *this;
      return loadMultiply(t, a);
    }
    GgMatrix &loadMultiply(const GgMatrix &m)
    {
      return loadMultiply(m.array);
    }
    GgMatrix multiply(const GLfloat *a) const
    {
      GgMatrix t;
      multiply(t.array, array, a);
      return t;
    }
    GgMatrix multiply(const GgMatrix &m) const
    {
      return multiply(m.array);
    }

    // 演算子
    GgMatrix &operator=(const GLfloat *a)
    {
      return load(a);
    }
    GgMatrix &operator=(const GgMatrix &m)
    {
      return load(m);
    }
    GgMatrix operator*(const GLfloat *a) const
    {
      return multiply(a);
    }
    GgMatrix operator*(const GgMatrix &m) const
    {
      return multiply(m);
    }
    GgMatrix &operator*=(const GLfloat *a)
    {
      return loadMultiply(a);
    }
    GgMatrix &operator*=(const GgMatrix &m)
    {
      return loadMultiply(m);
    }

    // 単位行列を設定する
    GgMatrix &loadIdentity(void);

    // 平行移動の変換行列を設定する
    GgMatrix &loadTranslate(GLfloat x, GLfloat y, GLfloat z, GLfloat w = 1.0f);
    GgMatrix &loadTranslate(const GLfloat *t)
    {
      return loadTranslate(t[0], t[1], t[2], t[3]);
    }

    // 拡大縮小の変換行列を設定する
    GgMatrix &loadScale(GLfloat x, GLfloat y, GLfloat z, GLfloat w = 1.0f);
    GgMatrix &loadScale(const GLfloat *s)
    {
      return loadScale(s[0], s[1], s[2], s[3]);
    }

    // 回転の変換行列を設定する
    GgMatrix &loadRotateX(GLfloat a);
    GgMatrix &loadRotateY(GLfloat a);
    GgMatrix &loadRotateZ(GLfloat a);
    GgMatrix &loadRotate(GLfloat x, GLfloat y, GLfloat z, GLfloat a);
    GgMatrix &loadRotate(const GLfloat *r, GLfloat a)
    {
      return loadRotate(r[0], r[1], r[2], a);
    }
    GgMatrix &loadRotate(const GLfloat *r)
    {
      return loadRotate(r[0], r[1], r[2], r[3]);
    }

    // ビュー変換行列を設定する
    GgMatrix &loadLookat(
      GLfloat ex, GLfloat ey, GLfloat ez,   // 視点の位置
      GLfloat tx, GLfloat ty, GLfloat tz,   // 目標点の位置
      GLfloat ux, GLfloat uy, GLfloat uz    // 上方向のベクトル
      );
    GgMatrix &loadLookat(
      const GLfloat *e,                     // 視点の位置
      const GLfloat *t,                     // 目標点の位置
      const GLfloat *u                      // 上方向のベクトル
      )
    {
      return loadLookat(e[0], e[1], e[2], t[0], t[1], t[2], u[0], u[1], u[2]);
    }

    // 直交投影変換行列を設定する
    GgMatrix &loadOrthogonal(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);

    // 透視透視投影変換行列を設定する
    GgMatrix &loadFrustum(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);

    // 画角を指定して透視投影変換行列を設定する
    GgMatrix &loadPerspective(GLfloat fovy, GLfloat aspect, GLfloat zNear, GLfloat zFar);

    // 転置行列を設定する
    GgMatrix &loadTranspose(const GgMatrix &m);

    // 逆行列を設定する
    GgMatrix &loadInvert(const GgMatrix &m);

    // 法線変換行列を設定する
    GgMatrix &loadNormal(const GgMatrix &m);

    // 平行移動変換を乗じる
    GgMatrix translate(GLfloat x, GLfloat y, GLfloat z, GLfloat w = 1.0f) const
    {
      GgMatrix m;
      return multiply(m.loadTranslate(x, y, z, w));
    }
    GgMatrix translate(const GLfloat *t) const
    {
      return translate(t[0], t[1], t[2]);
    }

    // 拡大縮小変換を乗じる
    GgMatrix scale(GLfloat x, GLfloat y, GLfloat z, GLfloat w = 1.0f) const
    {
      GgMatrix m;
      return multiply(m.loadScale(x, y, z, w));
    }
    GgMatrix scale(const GLfloat *s) const
    {
      return scale(s[0], s[1], s[2]);
    }

    // 回転変換を乗じる
    GgMatrix rotateX(GLfloat a) const
    {
      GgMatrix m;
      return multiply(m.loadRotateX(a));
    }
    GgMatrix rotateY(GLfloat a) const
    {
      GgMatrix m;
      return multiply(m.loadRotateY(a));
    }
    GgMatrix rotateZ(GLfloat a) const
    {
      GgMatrix m;
      return multiply(m.loadRotateZ(a));
    }
    GgMatrix rotate(GLfloat x, GLfloat y, GLfloat z, GLfloat a) const
    {
      GgMatrix m;
      return multiply(m.loadRotate(x, y, z, a));
    }
    GgMatrix rotate(const GLfloat *r, GLfloat a) const
    {
      return rotate(r[0], r[1], r[2], a);
    }
    GgMatrix rotate(const GLfloat *r) const
    {
      return rotate(r[0], r[1], r[2], r[3]);
    }

    // ビュー変換を乗じる
    GgMatrix lookat(
      GLfloat ex, GLfloat ey, GLfloat ez,   // 視点の位置
      GLfloat tx, GLfloat ty, GLfloat tz,   // 目標点の位置
      GLfloat ux, GLfloat uy, GLfloat uz    // 上方向のベクトル
      ) const;
    GgMatrix lookat(
      const GLfloat *e,                     // 視点の位置
      const GLfloat *t,                     // 目標点の位置
      const GLfloat *u                      // 上方向のベクトル
      ) const
    {
      return lookat(e[0], e[1], e[2], t[0], t[1], t[2], u[0], u[1], u[2]);
    }

    // 直交投影変換を乗じる
    GgMatrix orthogonal(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar) const;

    // 透視投影変換を乗じる
    GgMatrix frustum(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar) const;

    // 画角を指定して透視投影変換を乗じる
    GgMatrix perspective(GLfloat fovy, GLfloat aspect, GLfloat zNear, GLfloat zFar) const;

    // 転置行列を得る
    GgMatrix transpose(void) const
    {
      GgMatrix t;
      return t.loadTranspose(*this);
    }

    // 逆行列を得る
    GgMatrix invert(void) const
    {
      GgMatrix t;
      return t.loadInvert(*this);
    }

    // 法線変換行列を得る
    GgMatrix normal(void) const
    {
      GgMatrix t;
      return t.loadNormal(*this);
    }

    // ベクトルに対して投影変換を行う
    void projection(GLfloat *c, const GLfloat *v) const
    {
      projection(c, array, v);
    }

    // 変換行列を取り出す
    const GLfloat *get(void) const
    {
      return array;
    }
  };

  // 単位行列を求める
  inline GgMatrix ggIdentity(void)
  {
    GgMatrix t;
    t.loadIdentity();
    return t;
  };

  // 平行移動の変換行列を求める
  inline GgMatrix ggTranslate(GLfloat x, GLfloat y, GLfloat z, GLfloat w = 1.0f)
  {
    GgMatrix m;
    m.loadTranslate(x, y, z, w);
    return m;
  }
  inline GgMatrix ggTranslate(const GLfloat *t)
  {
    GgMatrix m;
    m.loadTranslate(t[0], t[1], t[2]);
    return m;
  }

  // 拡大縮小の変換行列を求める
  inline GgMatrix ggScale(GLfloat x, GLfloat y, GLfloat z, GLfloat w = 1.0f)
  {
    GgMatrix m;
    m.loadScale(x, y, z, w);
    return m;
  }
  inline GgMatrix ggScale(const GLfloat *s)
  {
    GgMatrix m;
    m.loadScale(s[0], s[1], s[2]);
    return m;
  }

  // 回転の変換行列を求める
  inline GgMatrix ggRotateX(GLfloat a)
  {
    GgMatrix m;
    m.loadRotateX(a);
    return m;
  }
  inline GgMatrix ggRotateY(GLfloat a)
  {
    GgMatrix m;
    m.loadRotateY(a);
    return m;
  }
  inline GgMatrix ggRotateZ(GLfloat a)
  {
    GgMatrix m;
    m.loadRotateZ(a);
    return m;
  }
  inline GgMatrix ggRotate(GLfloat x, GLfloat y, GLfloat z, GLfloat a)
  {
    GgMatrix m;
    m.loadRotate(x, y, z, a);
    return m;
  }
  inline GgMatrix ggRotate(const GLfloat *r, GLfloat a)
  {
    GgMatrix m;
    m.loadRotate(r[0], r[1], r[2], a);
    return m;
  }
  inline GgMatrix ggRotate(const GLfloat *r)
  {
    GgMatrix m;
    m.loadRotate(r[0], r[1], r[2], r[3]);
    return m;
  }

  // ビュー変換行列を求める
  inline GgMatrix ggLookat(
    GLfloat ex, GLfloat ey, GLfloat ez,     // 視点の位置
    GLfloat tx, GLfloat ty, GLfloat tz,     // 目標点の位置
    GLfloat ux, GLfloat uy, GLfloat uz      // 上方向のベクトル
    )
  {
    GgMatrix m;
    m.loadLookat(ex, ey, ez, tx, ty, tz, ux, uy, uz);
    return m;
  }
  inline GgMatrix ggLookat(
    const GLfloat *e,                       // 視点の位置
    const GLfloat *t,                       // 目標点の位置
    const GLfloat *u                        // 上方向のベクトル
    )
  {
    GgMatrix m;
    m.loadLookat(e[0], e[1], e[2], t[0], t[1], t[2], u[0], u[1], u[2]);
    return m;
  }

  // 直交投影変換行列を求める
  inline GgMatrix ggOrthogonal(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
  {
    GgMatrix m;
    m.loadOrthogonal(left, right, bottom, top, zNear, zFar);
    return m;
  }

  // 透視透視投影変換行列を求める
  inline GgMatrix ggFrustum(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
  {
    GgMatrix m;
    m.loadFrustum(left, right, bottom, top, zNear, zFar);
    return m;
  }

  // 画角を指定して透視投影変換行列を求める
  inline GgMatrix ggPerspective(GLfloat fovy, GLfloat aspect, GLfloat zNear, GLfloat zFar)
  {
    GgMatrix m;
    m.loadPerspective(fovy, aspect, zNear, zFar);
    return m;
  }

  // 転置行列を求める
  inline GgMatrix ggTranspose(const GgMatrix &m)
  {
    return m.transpose();
  }

  // 逆行列を求める
  inline GgMatrix ggInvert(const GgMatrix &m)
  {
    return m.invert();
  }

  // 法線変換行列を求める
  inline GgMatrix ggNormal(const GgMatrix &m)
  {
    return m.normal();
  }

  /*
  ** 四元数
  */
  class GgQuaternion
    : public Gg
  {
    // 四元数の要素
    GLfloat array[4];

    // 四元数 p と四元数 q の和を四元数 r に求める
    void add(GLfloat *r, const GLfloat *p, const GLfloat *q) const;

    // 四元数 p と四元数 q の差を四元数 r に求める
    void subtract(GLfloat *r, const GLfloat *p, const GLfloat *q) const;

    // 四元数 p と四元数 q の積を四元数 r に求める
    void multiply(GLfloat *r, const GLfloat *p, const GLfloat *q) const;

    // 四元数 q が表す回転の変換行列を m に求める
    void toMatrix(GLfloat *m, const GLfloat *q) const;

    // 回転の変換行列 m が表す四元数を q に求める
    void toQuaternion(GLfloat *q, const GLfloat *m) const;

    // 球面線形補間 q と r を t で補間した四元数を p に求める
    void slerp(GLfloat *p, const GLfloat *q, const GLfloat *r, GLfloat t) const;

  public:

    // デストラクタ
    virtual ~GgQuaternion(void) {}

    // コンストラクタ
    GgQuaternion(void) {}
    GgQuaternion(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
    {
      load(x, y, z, w);
    }
    GgQuaternion(const GLfloat *a)
    {
      load(a);
    }
    GgQuaternion(const GgQuaternion &q)
    {
      load(q);
    }

    // 四元数を設定する
    GgQuaternion &load(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
    {
      array[0] = x;
      array[1] = y;
      array[2] = z;
      array[3] = w;
      return *this;
    }
    GgQuaternion &load(const GLfloat *a)
    {
      return load(a[0], a[1], a[2], a[3]);
    }
    GgQuaternion &load(const GgQuaternion &q)
    {
      return load(q.array);
    }

    // 四元数の和を求める
    GgQuaternion &loadAdd(const GLfloat *a, const GLfloat *b)
    {
      add(array, a, b);
      return *this;
    }
    GgQuaternion &loadAdd(const GgQuaternion &q, const GgQuaternion &r)
    {
      return loadAdd(q.array, r.array);
    }
    GgQuaternion &loadAdd(const GLfloat *a, const GgQuaternion &q)
    {
      return loadAdd(a, q.array);
    }
    GgQuaternion &loadAdd(const GgQuaternion &q, const GLfloat *a)
    {
      return loadAdd(q.array, a);
    }
    GgQuaternion &loadAdd(const GLfloat *a)
    {
      return loadAdd(array, a);
    }
    GgQuaternion &loadAdd(const GgQuaternion &q)
    {
      return loadAdd(q.array);
    }
    GgQuaternion add(const GLfloat *a) const
    {
      GgQuaternion t;
      add(t.array, array, a);
      return t;
    }
    GgQuaternion add(const GgQuaternion &q) const
    {
      return add(q.array);
    }

    // 四元数の差を求める
    GgQuaternion &loadSubtract(const GLfloat *a, const GLfloat *b)
    {
      subtract(array, a, b);
      return *this;
    }
    GgQuaternion &loadSubtract(const GgQuaternion &q, const GgQuaternion &r)
    {
      return loadSubtract(q.array, r.array);
    }
    GgQuaternion &loadSubtract(const GLfloat *a, const GgQuaternion &q)
    {
      return loadSubtract(a, q.array);
    }
    GgQuaternion &loadSubtract(const GgQuaternion &q, const GLfloat *a)
    {
      return loadSubtract(q.array, a);
    }
    GgQuaternion &loadSubtract(const GLfloat *a)
    {
      return loadSubtract(array, a);
    }
    GgQuaternion &loadSubtract(const GgQuaternion &q)
    {
      return loadSubtract(q.array);
    }
    GgQuaternion subtract(const GLfloat *a) const
    {
      GgQuaternion t;
      subtract(t.array, array, a);
      return t;
    }
    GgQuaternion subtract(const GgQuaternion &q) const
    {
      return subtract(q.array);
    }

    // 四元数の積を求める
    GgQuaternion &loadMultiply(const GLfloat *a, const GLfloat *b)
    {
      multiply(array, a, b);
      return *this;
    }
    GgQuaternion &loadMultiply(const GgQuaternion &q, const GgQuaternion &r)
    {
      return loadMultiply(q.array, r.array);
    }
    GgQuaternion &loadMultiply(const GLfloat *a, const GgQuaternion &q)
    {
      return loadMultiply(a, q.array);
    }
    GgQuaternion &loadMultiply(const GgQuaternion &q, const GLfloat *a)
    {
      return loadMultiply(q.array, a);
    }
    GgQuaternion &loadMultiply(const GLfloat *a)
    {
      GgQuaternion t = *this;
      return loadMultiply(t.array, a);
    }
    GgQuaternion &loadMultiply(const GgQuaternion &q)
    {
      return loadMultiply(q.array);
    }
    GgQuaternion multiply(const GLfloat *a) const
    {
      GgQuaternion t;
      multiply(t.array, array, a);
      return t;
    }
    GgQuaternion multiply(const GgQuaternion &q) const
    {
      return multiply(q.array);
    }

    // 演算子
    GgQuaternion &operator=(const GLfloat *a)
    {
      return load(a);
    }
    GgQuaternion &operator=(const GgQuaternion &q)
    {
      return load(q);
    }
    GgQuaternion operator+(const GLfloat *a) const
    {
      return add(a);
    }
    GgQuaternion operator+(const GgQuaternion &q) const
    {
      return add(q);
    }
    GgQuaternion &operator+=(const GLfloat *a)
    {
      return loadAdd(a);
    }
    GgQuaternion &operator+=(const GgQuaternion &q)
    {
      return loadAdd(q);
    }
    GgQuaternion operator-(const GLfloat *a) const
    {
      return subtract(a);
    }
    GgQuaternion operator-(const GgQuaternion &q) const
    {
      return subtract(q);
    }
    GgQuaternion &operator-=(const GLfloat *a)
    {
      return loadSubtract(a);
    }
    GgQuaternion &operator-=(const GgQuaternion &q)
    {
      return loadSubtract(q);
    }
    GgQuaternion operator*(const GLfloat *a) const
    {
      return multiply(a);
    }
    GgQuaternion operator*(const GgQuaternion &q) const
    {
      return multiply(q);
    }
    GgQuaternion &operator*=(const GLfloat *a)
    {
      return loadMultiply(a);
    }
    GgQuaternion &operator*=(const GgQuaternion &q)
    {
      return loadMultiply(q);
    }

    // 回転の変換行列 m を表す四元数を設定する
    GgQuaternion &loadMatrix(const GLfloat *m)
    {
      toQuaternion(array, m);
      return *this;
    }

    // 単位元を設定する
    GgQuaternion &loadIdentity(void)
    {
      return load(0.0f, 0.0f, 0.0f, 1.0f);
    }

    // (x, y, z) を軸として角度 a 回転する四元数を設定する
    GgQuaternion &loadRotate(GLfloat x, GLfloat y, GLfloat z, GLfloat a);
    GgQuaternion &loadRotate(const GLfloat *v, GLfloat a)
    {
      return loadRotate(v[0], v[1], v[2], a);
    }

    // 四元数を (x, y, z) を軸として角度 a 回転する
    GgQuaternion rotate(GLfloat x, GLfloat y, GLfloat z, GLfloat a) const
    {
      GgQuaternion q;
      return multiply(q.loadRotate(x, y, z, a));
    }
    GgQuaternion rotate(const GLfloat *v, GLfloat a) const
    {
      return multiply(rotate(v[0], v[1], v[2], a));
    }
    GgQuaternion rotate(const GLfloat *v) const
    {
      return multiply(rotate(v[0], v[1], v[2], v[3]));
    }

    // オイラー角 (h, p, r) で与えられた回転を表す四元数を設定する
    GgQuaternion &loadEuler(GLfloat h, GLfloat p, GLfloat r);
    GgQuaternion &loadEuler(const GLfloat *e)
    {
      return loadEuler(e[0], e[1], e[2]);
    }

    // 四元数をオイラー角 (h, p, r) で回転する
    GgQuaternion euler(GLfloat h, GLfloat p, GLfloat r) const
    {
      GgQuaternion q;
      return multiply(q.loadEuler(h, p, r));
    }
    GgQuaternion euler(const GLfloat *e) const
    {
      return multiply(euler(e[0], e[1], e[2]));
    }

    // 球面線形補間
    GgQuaternion &loadSlerp(const GLfloat *a, const GLfloat *b, GLfloat t)
    {
      slerp(array, a, b, t);
      return *this;
    }
    GgQuaternion &loadSlerp(const GgQuaternion &q, const GgQuaternion &r, GLfloat t)
    {
      return loadSlerp(q.array, r.array, t);
    }
    GgQuaternion &loadSlerp(const GgQuaternion &q, const GLfloat *a, GLfloat t)
    {
      return loadSlerp(q.array, a, t);
    }
    GgQuaternion &loadSlerp(const GLfloat *a, const GgQuaternion &q, GLfloat t)
    {
      return loadSlerp(a, q.array, t);
    }
    GgQuaternion slerp(GLfloat *a, GLfloat t) const
    {
      GgQuaternion q;
      slerp(q.array, array, a, t);
      return q;
    }
    GgQuaternion slerp(const GgQuaternion &q, GLfloat t) const
    {
      return slerp(q.array, t);
    }

    // 四元数のノルムを求める
    GLfloat norm(void) const;

    // 共役四元数を求める
    GgQuaternion conjugate(void) const;

    // 四元数の逆を求める
    GgQuaternion invert(void) const;

    // 四元数を正規化する
    GgQuaternion normalize(void) const;

    // 四元数を取り出す
    const GLfloat *get(void) const
    {
      return array;
    }
    void get(GLfloat *a) const
    {
      a[0] = array[0];
      a[1] = array[1];
      a[2] = array[2];
      a[3] = array[3];
    }

    // 四元数が表す回転の行列を m に求める
    void getMatrix(GLfloat *m) const
    {
      toMatrix(m, array);
    }
  };

  // 回転の変換行列 m を表す四元数を求める
  inline GgQuaternion ggMatrixQuaternion(const GLfloat *m)
  {
    GgQuaternion t;
    t.loadMatrix(m);
    return t;
  }
  inline GgQuaternion ggMatrixQuaternion(const GgMatrix &m)
  {
    return ggMatrixQuaternion(m.get());
  }

  // 四元数 q の回転の変換行列を求める
  inline GgMatrix ggQuaternionMatrix(const GgQuaternion &q)
  {
    GLfloat m[16];
    q.getMatrix(m);
    GgMatrix t;
    t.load(m);
    return t;
  }

  // 単位元を求める
  inline GgQuaternion ggIdentityQuaternion(void)
  {
    GgQuaternion t;
    t.loadIdentity();
    return t;
  }

  // (x, y, z) を軸として角度 a 回転する四元数を求める
  inline GgQuaternion ggRotateQuaternion(GLfloat x, GLfloat y, GLfloat z, GLfloat a)
  {
    GgQuaternion t;
    t.loadRotate(x, y, z, a);
    return t;
  }
  inline GgQuaternion ggRotateQuaternion(const GLfloat *v, GLfloat a)
  {
    return ggRotateQuaternion(v[0], v[1], v[2], a);
  }
  inline GgQuaternion ggRotateQuaternion(const GLfloat *v)
  {
    return ggRotateQuaternion(v[0], v[1], v[2], v[3]);
  }

  // オイラー角 (h, p, r) で与えられた回転を表す四元数を求める
  inline GgQuaternion ggEulerQuaternion(GLfloat h, GLfloat p, GLfloat r)
  {
    GgQuaternion t;
    t.loadEuler(h, p, r);
    return t;
  }
  inline GgQuaternion ggEulerQuaternion(const GLfloat *e)
  {
    return ggEulerQuaternion(e[0], e[1], e[2]);
  }

  // 球面線形補間
  inline GgQuaternion ggSlerpQuaternion(const GLfloat *a, const GLfloat *b, GLfloat t)
  {
    GgQuaternion q;
    q.loadSlerp(a, b, t);
    return q;
  }
  inline GgQuaternion ggSlerpQuaternion(const GgQuaternion &q, const GgQuaternion &r, GLfloat t)
  {
    return ggSlerpQuaternion(q.get(), r.get(), t);
  }
  inline GgQuaternion ggSlerpQuaternion(const GgQuaternion &q, const GLfloat *a, GLfloat t)
  {
    return ggSlerpQuaternion(q.get(), a, t);
  }
  inline GgQuaternion ggSlerpQuaternion(const GLfloat *a, const GgQuaternion &q, GLfloat t)
  {
    return ggSlerpQuaternion(a, q.get(), t);
  }

  // 四元数のノルムを求める
  inline GLfloat ggNormQuaternion(const GgQuaternion &q)
  {
    return q.norm();
  }

  // 共役四元数を求める
  inline GgQuaternion ggConjugateQuaternion(const GgQuaternion &q)
  {
    return q.conjugate();
  }

  // 四元数の逆を求める
  inline GgQuaternion ggInvertQuaternion(const GgQuaternion &q)
  {
    return q.invert();
  }

  // 正規化した四元数を求める
  inline GgQuaternion normalize(const GgQuaternion &q)
  {
    return q.normalize();
  }

  /*
  ** 簡易トラックボール処理
  */
  class GgTrackball
    : public Gg
  {
    int cx, cy;                             // ドラッグ開始位置
    bool drag;                              // ドラッグ中か否か
    float sx, sy;                           // マウスの絶対位置→ウィンドウ内での相対位置の換算係数
    GgQuaternion cq;                        // 回転の初期値 (四元数)
    GgQuaternion tq;                        // ドラッグ中の回転 (四元数)
    GLfloat rt[16];                         // 回転の変換行列

  public:

    // デストラクタ
    virtual ~GgTrackball(void) {}

    // コンストラクタ
    GgTrackball(void);

    // トラックボール処理の範囲指定
    //    ウィンドウのリサイズ時に呼び出す
    void region(int w, int h);

    // トラックボール処理の開始
    //    マウスのドラッグ開始時（マウスボタンを押したとき）に呼び出す
    void start(int x, int y);

    // 回転の変換行列の計算
    //    マウスのドラッグ中に呼び出す
    void motion(int x, int y);

    // トラックボール処理の停止
    //    マウスのドラッグ終了時（マウスボタンを離したとき）に呼び出す
    void stop(int x, int y);

    // 現在の回転の変換行列を取り出す
    const GLfloat *get(void) const
    {
      return rt;
    }
  };

  /*
  ** 参照カウンタ
  **
  **     複数の属性データ間で共有されるリソースの確保と解放を管理する
  */
  class GgCounter
    : public Gg
  {
    friend class GgAttribute;

    // 参照カウント
    unsigned int count;

    // デストラクタ
    ~GgCounter(void) {}

    // コンストラクタ
    GgCounter(void)
      : count(0) {}
  };

  /*
  ** 属性データ
  **
  **     テクスチャとシェーダの基底クラス
  **     インスタンスは複数のオブジェクトから参照されることを想定する
  **     そのためこのクラスでは参照カウントを管理する
  */
  class GgAttribute
    : public Gg
  {
    // 参照カウンタ
    GgCounter *ref;

    // 参照カウントの増加
    void inc(void)
    {
      ++ref->count;
    }

  protected:

    // 参照カウントの減少
    unsigned int dec(void)
    {
      return --ref->count;
    }

  public:

    // デストラクタ
    virtual ~GgAttribute(void)
    {
      if (ref->count == 0) delete ref;
    }

    // コンストラクタ
    GgAttribute(void)
      : ref(new GgCounter)
    {
      inc();
    }
    GgAttribute(const GgAttribute &o)
      : ref(o.ref)
    {
      inc();
    }

    // 代入
    GgAttribute &operator=(const GgAttribute &o)
    {
      if (&o != this)
      {
        ref = o.ref;
        inc();
      }
      return *this;
    }
  };

  /*
  ** テクスチャ
  **
  **     カラー画像を読み込んでテクスチャマップを作成する
  */
  class GgTexture
    : public GgAttribute
  {
    // テクスチャ名
    GLuint texture;

  public:

    // デストラクタ
    virtual ~GgTexture(void)
    {
      if (dec() == 0)
      {
        glBindTexture(GL_TEXTURE_2D, 0);
        glDeleteTextures(1, &texture);
      }
    }

    // コンストラクタ
    GgTexture(void)
    {
      glGenTextures(1, &texture);
    }
    GgTexture(GLsizei width, GLsizei height, GLenum internal = GL_RGBA, GLenum format = GL_RGBA, const GLvoid *image = 0)
    {
      glGenTextures(1, &texture);
      glBindTexture(GL_TEXTURE_2D, texture);
      ggLoadTexture(width, height, internal, format, image);
    }
    GgTexture(const char *name, GLenum internal = GL_RGBA)
    {
      glGenTextures(1, &texture);
      glBindTexture(GL_TEXTURE_2D, texture);
      ggLoadImage(name, internal);
    }
    GgTexture(const GgTexture &o)
      : GgAttribute(o), texture(o.texture) {}

    // 代入
    GgTexture &operator=(const GgTexture &o)
    {
      if (&o != this)
      {
        GgAttribute::operator=(o);
        texture = o.texture;
      }
      return *this;
    }

    // テクスチャオブジェクトを結合する
    //     このテクスチャを使用する際に呼び出す
    //     unit: 使用するテクスチャユニット番号（0〜）
    void use(GLuint unit = 0) const
    {
      glActiveTexture(GL_TEXTURE0 + unit);
      glBindTexture(GL_TEXTURE_2D, texture);
    }

    // テクスチャオブジェクトを解放する
    //    このテクスチャを使用しなくなったら呼び出す
    void unuse(void) const
    {
      glBindTexture(GL_TEXTURE_2D, 0);
      glActiveTexture(GL_TEXTURE0);
    }

    // テクスチャオブジェクトを取り出す
    GLuint get(void) const
    {
      return texture;
    }
  };

  /*
  ** 法線マップ
  **
  **     高さマップ（グレイスケール画像）を読み込んで法線マップを作成する
  */
  class GgNormalTexture
    : public GgTexture
  {
  public:

    // デストラクタ
    virtual ~GgNormalTexture(void) {}

    // コンストラクタ
    GgNormalTexture(void) {}
    GgNormalTexture(
      const char *name,                     // 画像ファイル名（1 チャネルの TGA 画像）
      float nz = 1.0f                       // 法線マップの z 成分の値
      )
      : GgTexture()
    {
      glBindTexture(GL_TEXTURE_2D, get());
      ggLoadHeight(name, nz);
      glBindTexture(GL_TEXTURE_2D, 0);
    }
    GgNormalTexture(const GgNormalTexture &o)
      : GgTexture(o) {}

    // 代入
    GgNormalTexture &operator=(const GgNormalTexture &o)
    {
      GgTexture::operator=(o);
      return *this;
    }
  };

  /*
  ** シェーダ
  **
  **     シェーダの基底クラス
  */
  class GgShader
    : public GgAttribute
  {
    // プログラム名
    GLuint program;

  public:

    // デストラクタ
    virtual ~GgShader(void)
    {
      if (dec() == 0 && program != 0)
      {
        glUseProgram(0);
        glDeleteProgram(program);
      }
    }

    // コンストラクタ
    GgShader(void)
      : program(0) {}
    GgShader(
      const char *vert,                     // バーテックスシェーダのソースファイル名
      const char *frag = 0,                 // フラグメントシェーダのソースファイル名（0 なら不使用）
      const char *geom = 0,                 // ジオメトリシェーダのソースファイル名（0 なら不使用）
      GLenum input = GL_TRIANGLES,          // ジオメトリシェーダの入力プリミティブ
      GLenum output = GL_TRIANGLE_STRIP,    // ジオメトリシェーダの出力プリミティブ
      int vertices = 0,                     // ジオメトリシェーダの出力頂点数
      int nvarying = 0,                     // フィードバックする varying 変数の数（0 なら不使用）
      const char **varyings = 0             // フィードバックする varying 変数のリスト
      )
      : program(ggLoadShader(vert, frag, geom, input, output, vertices, nvarying, varyings)) {}
    GgShader(const GgShader &o)
      : GgAttribute(o), program(o.program) {}

    // 代入
    GgShader &operator=(const GgShader &o)
    {
      if (&o != this)
      {
        GgAttribute::operator=(o);
        program = o.program;
      }
      return *this;
    }

    // シェーダのソースプログラムの読み込みとコンパイル・リンク
    void load(
      const char *vert,                     // バーテックスシェーダのソースファイル名
      const char *frag = 0,                 // フラグメントシェーダのソースファイル名（0 なら不使用）
      const char *geom = 0,                 // ジオメトリシェーダのソースファイル名（0 なら不使用）
      GLenum input = GL_TRIANGLES,          // ジオメトリシェーダの入力プリミティブ
      GLenum output = GL_TRIANGLE_STRIP,    // ジオメトリシェーダの出力プリミティブ
      GLint vertices = 0,                   // ジオメトリシェーダの出力頂点数
      GLint nvarying = 0,                   // フィードバックする varying 変数の数（0 なら不使用）
      const char **varyings = 0             // フィードバックする varying 変数のリスト
      )
    {
      if (program != 0) glDeleteProgram(program);
      program = ggLoadShader(vert, frag, geom, input, output, vertices, nvarying, varyings);
    }

    // シェーダプログラムの使用を開始する
    virtual void use(void) const
    {
      glUseProgram(program);
    }

    // シェーダプログラムの使用を終了する
    virtual void unuse(void) const
    {
      glUseProgram(0);
    }

    // シェーダプログラム名を取り出す
    GLuint get(void) const
    {
      return program;
    }
  };

  /*
  ** バッファオブジェクト
  **
  **    頂点／インデックスバッファオブジェクトの基底クラス
  */
  template <typename T>
  class GgBuffer
    : public GgAttribute
  {
    // バッファオブジェクト
    GLuint buffer;

    // ターゲット
    GLenum target;

    // データ数
    GLuint number;

  public:

    // デストラクタ
    virtual ~GgBuffer<T>(void)
    {
      if (dec() == 0)
      {
        glBindBuffer(target, 0);
        glDeleteBuffers(1, &buffer);
      }
    }

    // コンストラクタ
    GgBuffer<T>(void)
      : number(0)
    {
      glGenBuffers(1, &buffer);
    }
    GgBuffer<T>(
      GLenum target,                        // バッファオブジェクトのターゲット
      GLuint number,                        // データの数
      const T *data,                        // データが格納されている領域の先頭のポインタ
      GLenum usage = GL_STATIC_DRAW         // バッファオブジェクトの使い方
      )
    {
      glGenBuffers(1, &buffer);
      load(target, number, data, usage);
    }
    GgBuffer<T>(const GgBuffer<T> &o)
      : GgAttribute(o), buffer(o.buffer), target(o.target), number(o.number) {}

    // 代入
    GgBuffer<T> &operator=(const GgBuffer<T> &o)
    {
      if (&o != this)
      {
        GgAttribute::operator=(o);
        buffer = o.buffer;
        target = o.target;
        number = o.number;
      }
      return *this;
    }

    // バッファオブジェクトにデータを転送する
    void send(
      GLuint number,                        // 転送するデータの数 (0 ならバッファ全体)
      const T *data,                        // 転送元のデータが格納されてている領域の先頭のポインタ
      GLuint offset = 0                     // 転送先のバッファオブジェクトの先頭の要素番号
      )
    {
      if (number == 0) number = this->number;
      glBufferSubData(target, sizeof (T) * offset, sizeof (T) * number, data);
    }

    // バッファオブジェクトにデータを格納する
    void load(
      GLenum target,                        // バッファオブジェクトのターゲット
      GLuint number,                        // データの数
      const T *data,                        // データが格納されている領域の先頭のポインタ
      GLenum usage = GL_STATIC_DRAW         // バッファオブジェクトの使い方
      )
    {
      this->target = target;
      this->number = number;
      glBindBuffer(target, buffer);
      glBufferData(target, sizeof (T) * number, data, usage);
    }

    // バッファオブジェクトのデータを複写する
    void copy(GLuint buf)
    {
      const size_t size = sizeof (T) * number;
#ifdef __APPLE__
      T *temp = new T[number];
      glBindBuffer(GL_ARRAY_BUFFER, buf);
      glGetBufferSubData(GL_ARRAY_BUFFER, 0, size, temp);
      glBindBuffer(GL_ARRAY_BUFFER, buffer);
      glBufferSubData(GL_ARRAY_BUFFER, 0, size, temp);
      glBindBuffer(GL_ARRAY_BUFFER, 0);
      delete[] temp;
#else
      glBindBuffer(GL_COPY_READ_BUFFER, buf);
      glBindBuffer(GL_COPY_WRITE_BUFFER, buffer);
      glCopyBufferSubData(GL_COPY_READ_BUFFER, GL_COPY_WRITE_BUFFER, 0, 0, size);
      glBindBuffer(GL_COPY_WRITE_BUFFER, 0);
      glBindBuffer(GL_COPY_READ_BUFFER, 0);
#endif
    }

    // バッファオブジェクト名を取り出す
    GLuint buf(void) const
    {
      return buffer;
    }

    // データの数を取り出す
    GLuint num(void) const
    {
      return number;
    }
  };

  /*
  ** 形状データ
  **
  **    形状データの基底クラス
  **    このクラスから使用するシェーダを参照する
  **    シェーダのインスタンスを結合したら参照カウントをインクリメントする
  **    シェーダのインスタンスの結合を解除したら参照カウントをデクリメントし，0 になったらシェーダを削除する
  */
  class GgShape
    : public Gg
  {
    // 頂点配列オブジェクト
    GLuint vao;

  public:

    // デストラクタ
    virtual ~GgShape(void)
    {
      glBindVertexArray(0);
      glDeleteVertexArrays(1, &vao);
    }

    // コンストラクタ
    GgShape(void)
    {
      glGenVertexArrays(1, &vao);
      glBindVertexArray(vao);
    }
    GgShape(const GgShape &o)
      : vao(o.vao)
    {
      glBindVertexArray(vao);
    }

    // 代入演算子
    GgShape &operator=(const GgShape &o)
    {
      if (this != &o)
      {
        vao = o.vao;
        glBindVertexArray(vao);
      }
      return *this;
    }

    // 頂点配列オブジェクトを指定する
    void use(void) const
    {
      glBindVertexArray(vao);
    }

    // 頂点配列オブジェクトの指定を解除する
    void unuse(void) const
    {
      glBindVertexArray(0);
    }

    // 頂点配列オブジェクト名を取り出す
    GLuint get(void) const
    {
      return vao;
    }

    // この形状を描画する手続きをオーバーライドする
    virtual void draw(GLenum mode = GL_POINTS) const = 0;
  };

  /*
  ** ポイント
  */
  class GgPoints
    : public GgShape
  {
    // 頂点バッファオブジェクト
    GgBuffer<GLfloat[3]> position;

  public:

    // デストラクタ
    virtual ~GgPoints(void) {}

    // コンストラクタ
    GgPoints(void) {}
    GgPoints(
      GLuint nv,                            // 頂点数
      const GLfloat (*pos)[3],              // 頂点位置のデータ
      GLenum usage = GL_STATIC_DRAW         // バッファオブジェクトの使い方
      )
    {
      load(nv, pos, usage);
    }
    GgPoints(const GgPoints &o)
      : GgShape(o), position(o.position) {}

    // 代入
    GgPoints &operator=(const GgPoints &o)
    {
      if (&o != this)
      {
        GgShape::operator=(o);
        position = o.position;
      }
      return *this;
    }

    // 既存のバッファオブジェクトにデータを転送する
    void send(
      GLuint nv,                            // 転送するデータの数 (0 ならバッファ全体)
      const GLfloat (*pos)[3],              // 転送元のデータが格納されてている領域の先頭のポインタ
      GLuint offset = 0                     // 転送先のバッファオブジェクトの先頭の要素番号
      )
    {
      position.send(nv, pos, offset);
    }

    // バッファオブジェクトを確保して頂点を格納する
    void load(
      GLuint nv,                            // 頂点数
      const GLfloat (*pos)[3],              // 頂点位置のデータ
      GLenum usage = GL_STATIC_DRAW         // バッファオブジェクトの使い方
      )
    {
      position.load(GL_ARRAY_BUFFER, nv, pos, usage);

      // このバッファオブジェクトは index == 0 の in 変数から入力する
      glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
      glEnableVertexAttribArray(0);
    }

    // バッファオブジェクト名を取り出す
    GLuint pbuf(void) const
    {
      return position.buf();
    }

    // データの数を取り出す
    GLuint pnum(void) const
    {
      return position.num();
    }

    // ポイントの描画
    virtual void draw(GLenum mode = GL_POINTS) const;
  };

  /*
  ** ポリゴン
  */
  class GgTriangles
    : public GgPoints
  {
    // 頂点の法線ベクトル
    GgBuffer<GLfloat[3]> normal;

  public:

    // デストラクタ
    virtual ~GgTriangles(void) {}

    // コンストラクタ
    GgTriangles(void) {}
    GgTriangles(
      GLuint nv,                            // 頂点数
      const GLfloat (*pos)[3],              // 頂点位置のデータ
      const GLfloat (*norm)[3],             // 頂点法線のデータ
      GLenum usage = GL_STATIC_DRAW         // バッファオブジェクトの使い方
      )
    {
      load(nv, pos, norm);
    }
    GgTriangles(const GgTriangles &o)
      : GgPoints(o), normal(o.normal) {}

    // 代入
    GgTriangles &operator=(const GgTriangles &o)
    {
      if (&o != this)
      {
        GgPoints::operator=(o);
        normal = o.normal;
      }
      return *this;
    }

    // 既存のバッファオブジェクトにデータを転送する
    void send(
      GLuint nv,                            // 転送する頂点数 (0 ならバッファ全体)
      const GLfloat (*pos)[3],              // 転送元の頂点位置のデータ
      const GLfloat (*norm)[3],             // 転送元の頂点法線のデータ
      GLuint offset = 0                     // 転送先のバッファオブジェクトの先頭の要素番号
      )
    {
      GgPoints::send(nv, pos, offset);
      normal.send(nv, norm, offset);
    }

    // バッファオブジェクトを確保して位置と法線を格納する
    void load(
      GLuint nv,                            // 頂点数
      const GLfloat (*pos)[3],              // 頂点位置のデータ
      const GLfloat (*norm)[3],             // 頂点法線のデータ
      GLenum usage = GL_STATIC_DRAW         // バッファオブジェクトの使い方
      )
    {
      GgPoints::load(nv, pos, usage);
      normal.load(GL_ARRAY_BUFFER, nv, norm, usage);

      // このバッファオブジェクトは index == 1 の in 変数から入力する
      glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, 0);
      glEnableVertexAttribArray(1);
    }

    // バッファオブジェクト名を取り出す
    GLuint nbuf(void) const
    {
      return normal.buf();
    }

    // データの数を取り出す
    GLuint nnum(void) const
    {
      return normal.num();
    }

    // 三角形群を描画する手続き
    virtual void draw(GLenum mode = GL_TRIANGLE_FAN) const;
  };

  /*
  ** 三角形の形状データ
  */
  class GgElements
    : public GgTriangles
  {
    // インデックスバッファオブジェクト
    GgBuffer<GLuint[3]> index;

  public:

    // デストラクタ
    virtual ~GgElements(void) {}

    // コンストラクタ
    GgElements(void) {}
    GgElements(
      GLuint nv,                            // 頂点数
      const GLfloat (*pos)[3],              // 頂点位置のデータ
      const GLfloat (*norm)[3],             // 頂点法線のデータ
      GLuint nf,                            // 三角形数
      const GLuint (*face)[3],              // 三角形の頂点インデックス
      GLenum usage = GL_STATIC_DRAW         // バッファオブジェクトの使い方
      )
      : GgTriangles(nv, pos, norm, usage)
    {
      index.load(GL_ELEMENT_ARRAY_BUFFER, nf, face);
    }
    GgElements(const GgElements &o)
      : GgTriangles(o), index(o.index) {}

    // 代入
    GgElements &operator=(const GgElements &o)
    {
      if (&o != this)
      {
        GgTriangles::operator=(o);
        index = o.index;
      }
      return *this;
    }

    // 既存のバッファオブジェクトにデータを転送する
    void send(
      GLuint nv,                            // 転送する頂点数 (0 ならバッファ全体)
      const GLfloat (*pos)[3],              // 転送元の頂点位置のデータ
      const GLfloat (*norm)[3],             // 転送元の頂点法線のデータ
      GLuint offset = 0                     // 転送先のバッファオブジェクトの先頭の要素番号
      )
    {
      GgTriangles::send(nv, pos, norm, offset);
    }

    // バッファオブジェクトを確保して位置と法線とインデックスを格納する
    void load(
      GLuint nv,                            // 頂点数
      const GLfloat (*pos)[3],              // 頂点位置のデータ
      const GLfloat (*norm)[3],             // 頂点法線のデータ
      GLuint nf,                            // 三角形数
      const GLuint (*face)[3],              // 三角形の頂点インデックス
      GLenum usage = GL_STATIC_DRAW         // バッファオブジェクトの使い方
      )
    {
      GgTriangles::load(nv, pos, norm, usage);
      index.load(GL_ELEMENT_ARRAY_BUFFER, nf, face);
    }

    // バッファオブジェクト名を取り出す
    GLuint fbuf(void) const
    {
      return index.buf();
    }

    // データの数を取り出す
    GLuint fnum(void) const
    {
      return index.num();
    }

    // 三角形ポリゴンを描画する手続き
    virtual void draw(GLenum mode = GL_TRIANGLES) const;
  };

  /*
  ** 球状のポイント
  */
  extern GgPoints *ggPointSphere(GLuint nv, GLfloat cx = 0.0f, GLfloat cy = 0.0f, GLfloat cz = 0.0f, GLfloat radius = 0.5f);

  /*
  ** 矩形
  */
  extern GgTriangles *ggRectangle(GLfloat width = 1.0f, GLfloat height = 1.0f);

  /*
  ** 楕円
  */
  extern GgTriangles *ggEllipse(GLfloat width = 1.0f, GLfloat height = 1.0f, GLuint slices = 16);

  /*
  ** 三角形分割された Alias OBJ ファイル (Arrays 形式)
  */
  extern GgTriangles *ggArraysObj(const char *name, bool normalize = false);

  /*
  ** 三角形分割された Alias OBJ ファイル (Elements 形式)
  */
  extern GgElements *ggElementsObj(const char *name, bool normalize = false);

  /*
  ** メッシュ (Elements 形式)
  */
  extern GgElements *ggElementsMesh(GLfloat width = 1.0f, GLfloat height = 1.0f, int slices = 4, int stacks = 4);

  /*
  ** 球 (Elements 形式)
  */
  extern GgElements *ggElementsSphere(GLfloat radius = 1.0f, int slices = 16, int stacks = 8);
}

#endif
