// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/aescontext.h"
#include "classes/arvranchor.h"
#include "classes/arvrcamera.h"
#include "classes/arvrcontroller.h"
#include "classes/arvrinterface.h"
#include "classes/arvrinterfacegdnative.h"
#include "classes/arvrorigin.h"
#include "classes/arvrpositionaltracker.h"
#include "classes/arvrserver.h"
#include "classes/astar.h"
#include "classes/astar2d.h"
#include "classes/acceptdialog.h"
#include "classes/animatedsprite.h"
#include "classes/animatedsprite3d.h"
#include "classes/animatedtexture.h"
#include "classes/animation.h"
#include "classes/animationnode.h"
#include "classes/animationnodeadd2.h"
#include "classes/animationnodeadd3.h"
#include "classes/animationnodeanimation.h"
#include "classes/animationnodeblend2.h"
#include "classes/animationnodeblend3.h"
#include "classes/animationnodeblendspace1d.h"
#include "classes/animationnodeblendspace2d.h"
#include "classes/animationnodeblendtree.h"
#include "classes/animationnodeoneshot.h"
#include "classes/animationnodeoutput.h"
#include "classes/animationnodestatemachine.h"
#include "classes/animationnodestatemachineplayback.h"
#include "classes/animationnodestatemachinetransition.h"
#include "classes/animationnodetimescale.h"
#include "classes/animationnodetimeseek.h"
#include "classes/animationnodetransition.h"
#include "classes/animationplayer.h"
#include "classes/animationrootnode.h"
#include "classes/animationtrackeditplugin.h"
#include "classes/animationtree.h"
#include "classes/animationtreeplayer.h"
#include "classes/area.h"
#include "classes/area2d.h"
#include "classes/arraymesh.h"
#include "classes/aspectratiocontainer.h"
#include "classes/atlastexture.h"
#include "classes/audiobuslayout.h"
#include "classes/audioeffect.h"
#include "classes/audioeffectamplify.h"
#include "classes/audioeffectbandlimitfilter.h"
#include "classes/audioeffectbandpassfilter.h"
#include "classes/audioeffectcapture.h"
#include "classes/audioeffectchorus.h"
#include "classes/audioeffectcompressor.h"
#include "classes/audioeffectdelay.h"
#include "classes/audioeffectdistortion.h"
#include "classes/audioeffecteq.h"
#include "classes/audioeffecteq10.h"
#include "classes/audioeffecteq21.h"
#include "classes/audioeffecteq6.h"
#include "classes/audioeffectfilter.h"
#include "classes/audioeffecthighpassfilter.h"
#include "classes/audioeffecthighshelffilter.h"
#include "classes/audioeffectinstance.h"
#include "classes/audioeffectlimiter.h"
#include "classes/audioeffectlowpassfilter.h"
#include "classes/audioeffectlowshelffilter.h"
#include "classes/audioeffectnotchfilter.h"
#include "classes/audioeffectpanner.h"
#include "classes/audioeffectphaser.h"
#include "classes/audioeffectpitchshift.h"
#include "classes/audioeffectrecord.h"
#include "classes/audioeffectreverb.h"
#include "classes/audioeffectspectrumanalyzer.h"
#include "classes/audioeffectspectrumanalyzerinstance.h"
#include "classes/audioeffectstereoenhance.h"
#include "classes/audioserver.h"
#include "classes/audiostream.h"
#include "classes/audiostreamgenerator.h"
#include "classes/audiostreamgeneratorplayback.h"
#include "classes/audiostreammp3.h"
#include "classes/audiostreammicrophone.h"
#include "classes/audiostreamoggvorbis.h"
#include "classes/audiostreamplayback.h"
#include "classes/audiostreamplaybackresampled.h"
#include "classes/audiostreamplayer.h"
#include "classes/audiostreamplayer2d.h"
#include "classes/audiostreamplayer3d.h"
#include "classes/audiostreamrandompitch.h"
#include "classes/audiostreamsample.h"
#include "classes/backbuffercopy.h"
#include "classes/bakedlightmap.h"
#include "classes/bakedlightmapdata.h"
#include "classes/basebutton.h"
#include "classes/bitmap.h"
#include "classes/bitmapfont.h"
#include "classes/bone2d.h"
#include "classes/boneattachment.h"
#include "classes/boxcontainer.h"
#include "classes/boxshape.h"
#include "classes/bulletphysicsdirectbodystate.h"
#include "classes/bulletphysicsserver.h"
#include "classes/button.h"
#include "classes/buttongroup.h"
#include "classes/cpuparticles.h"
#include "classes/cpuparticles2d.h"
#include "classes/csgbox.h"
#include "classes/csgcombiner.h"
#include "classes/csgcylinder.h"
#include "classes/csgmesh.h"
#include "classes/csgpolygon.h"
#include "classes/csgprimitive.h"
#include "classes/csgshape.h"
#include "classes/csgsphere.h"
#include "classes/csgtorus.h"
#include "classes/camera.h"
#include "classes/camera2d.h"
#include "classes/camerafeed.h"
#include "classes/cameraserver.h"
#include "classes/cameratexture.h"
#include "classes/canvasitem.h"
#include "classes/canvasitemmaterial.h"
#include "classes/canvaslayer.h"
#include "classes/canvasmodulate.h"
#include "classes/capsulemesh.h"
#include "classes/capsuleshape.h"
#include "classes/capsuleshape2d.h"
#include "classes/centercontainer.h"
#include "classes/charfxtransform.h"
#include "classes/checkbox.h"
#include "classes/checkbutton.h"
#include "classes/circleshape2d.h"
#include "classes/classdb.h"
#include "classes/clippedcamera.h"
#include "classes/collisionobject.h"
#include "classes/collisionobject2d.h"
#include "classes/collisionpolygon.h"
#include "classes/collisionpolygon2d.h"
#include "classes/collisionshape.h"
#include "classes/collisionshape2d.h"
#include "classes/colorpicker.h"
#include "classes/colorpickerbutton.h"
#include "classes/colorrect.h"
#include "classes/concavepolygonshape.h"
#include "classes/concavepolygonshape2d.h"
#include "classes/conetwistjoint.h"
#include "classes/configfile.h"
#include "classes/confirmationdialog.h"
#include "classes/container.h"
#include "classes/control.h"
#include "classes/convexpolygonshape.h"
#include "classes/convexpolygonshape2d.h"
#include "classes/crypto.h"
#include "classes/cryptokey.h"
#include "classes/cubemap.h"
#include "classes/cubemesh.h"
#include "classes/cullinstance.h"
#include "classes/curve.h"
#include "classes/curve2d.h"
#include "classes/curve3d.h"
#include "classes/curvetexture.h"
#include "classes/cylindermesh.h"
#include "classes/cylindershape.h"
#include "classes/dtlsserver.h"
#include "classes/dampedspringjoint2d.h"
#include "classes/defaultip.h"
#include "classes/directionallight.h"
#include "classes/directory.h"
#include "classes/dynamicfont.h"
#include "classes/dynamicfontdata.h"
#include "classes/editorexportplugin.h"
#include "classes/editorfeatureprofile.h"
#include "classes/editorfiledialog.h"
#include "classes/editorfilesystem.h"
#include "classes/editorfilesystemdirectory.h"
#include "classes/editorimportplugin.h"
#include "classes/editorinspector.h"
#include "classes/editorinspectorplugin.h"
#include "classes/editorinterface.h"
#include "classes/editornavigationmeshgenerator.h"
#include "classes/editorplugin.h"
#include "classes/editorproperty.h"
#include "classes/editorresourceconversionplugin.h"
#include "classes/editorresourcepicker.h"
#include "classes/editorresourcepreview.h"
#include "classes/editorresourcepreviewgenerator.h"
#include "classes/editorsceneimporter.h"
#include "classes/editorsceneimporterfbx.h"
#include "classes/editorsceneimportergltf.h"
#include "classes/editorscenepostimport.h"
#include "classes/editorscript.h"
#include "classes/editorscriptpicker.h"
#include "classes/editorselection.h"
#include "classes/editorsettings.h"
#include "classes/editorspatialgizmo.h"
#include "classes/editorspatialgizmoplugin.h"
#include "classes/editorspinslider.h"
#include "classes/editorvcsinterface.h"
#include "classes/encodedobjectasid.h"
#include "classes/engine.h"
#include "classes/environment.h"
#include "classes/expression.h"
#include "classes/externaltexture.h"
#include "classes/file.h"
#include "classes/filedialog.h"
#include "classes/filesystemdock.h"
#include "classes/font.h"
#include "classes/funcref.h"
#include "classes/gdnative.h"
#include "classes/gdnativelibrary.h"
#include "classes/gdscript.h"
#include "classes/gdscriptfunctionstate.h"
#include "classes/giprobe.h"
#include "classes/giprobedata.h"
#include "classes/gltfaccessor.h"
#include "classes/gltfanimation.h"
#include "classes/gltfbufferview.h"
#include "classes/gltfcamera.h"
#include "classes/gltfdocument.h"
#include "classes/gltflight.h"
#include "classes/gltfmesh.h"
#include "classes/gltfnode.h"
#include "classes/gltfskeleton.h"
#include "classes/gltfskin.h"
#include "classes/gltfspecgloss.h"
#include "classes/gltfstate.h"
#include "classes/gltftexture.h"
#include "classes/generic6dofjoint.h"
#include "classes/geometry.h"
#include "classes/geometryinstance.h"
#include "classes/globalconstants.h"
#include "classes/gradient.h"
#include "classes/gradienttexture.h"
#include "classes/graphedit.h"
#include "classes/graphnode.h"
#include "classes/gridcontainer.h"
#include "classes/gridmap.h"
#include "classes/groovejoint2d.h"
#include "classes/hboxcontainer.h"
#include "classes/hmaccontext.h"
#include "classes/hscrollbar.h"
#include "classes/hseparator.h"
#include "classes/hslider.h"
#include "classes/hsplitcontainer.h"
#include "classes/httpclient.h"
#include "classes/httprequest.h"
#include "classes/hashingcontext.h"
#include "classes/heightmapshape.h"
#include "classes/hingejoint.h"
#include "classes/ip.h"
#include "classes/image.h"
#include "classes/imagetexture.h"
#include "classes/immediategeometry.h"
#include "classes/input.h"
#include "classes/inputdefault.h"
#include "classes/inputevent.h"
#include "classes/inputeventaction.h"
#include "classes/inputeventgesture.h"
#include "classes/inputeventjoypadbutton.h"
#include "classes/inputeventjoypadmotion.h"
#include "classes/inputeventkey.h"
#include "classes/inputeventmidi.h"
#include "classes/inputeventmagnifygesture.h"
#include "classes/inputeventmouse.h"
#include "classes/inputeventmousebutton.h"
#include "classes/inputeventmousemotion.h"
#include "classes/inputeventpangesture.h"
#include "classes/inputeventscreendrag.h"
#include "classes/inputeventscreentouch.h"
#include "classes/inputeventwithmodifiers.h"
#include "classes/inputmap.h"
#include "classes/instanceplaceholder.h"
#include "classes/interpolatedcamera.h"
#include "classes/itemlist.h"
#include "classes/jnisingleton.h"
#include "classes/json.h"
#include "classes/jsonparseresult.h"
#include "classes/jsonrpc.h"
#include "classes/javaclass.h"
#include "classes/javaclasswrapper.h"
#include "classes/javascript.h"
#include "classes/javascriptobject.h"
#include "classes/joint.h"
#include "classes/joint2d.h"
#include "classes/kinematicbody.h"
#include "classes/kinematicbody2d.h"
#include "classes/kinematiccollision.h"
#include "classes/kinematiccollision2d.h"
#include "classes/label.h"
#include "classes/largetexture.h"
#include "classes/light.h"
#include "classes/light2d.h"
#include "classes/lightoccluder2d.h"
#include "classes/line2d.h"
#include "classes/lineedit.h"
#include "classes/lineshape2d.h"
#include "classes/linkbutton.h"
#include "classes/listener.h"
#include "classes/listener2d.h"
#include "classes/mainloop.h"
#include "classes/margincontainer.h"
#include "classes/marshalls.h"
#include "classes/material.h"
#include "classes/menubutton.h"
#include "classes/mesh.h"
#include "classes/meshdatatool.h"
#include "classes/meshinstance.h"
#include "classes/meshinstance2d.h"
#include "classes/meshlibrary.h"
#include "classes/meshtexture.h"
#include "classes/mobilevrinterface.h"
#include "classes/multimesh.h"
#include "classes/multimeshinstance.h"
#include "classes/multimeshinstance2d.h"
#include "classes/multiplayerapi.h"
#include "classes/multiplayerpeergdnative.h"
#include "classes/mutex.h"
#include "classes/nativescript.h"
#include "classes/navigation.h"
#include "classes/navigation2d.h"
#include "classes/navigationmesh.h"
#include "classes/navigationmeshinstance.h"
#include "classes/navigationpolygon.h"
#include "classes/navigationpolygoninstance.h"
#include "classes/networkedmultiplayerenet.h"
#include "classes/networkedmultiplayerpeer.h"
#include "classes/ninepatchrect.h"
#include "classes/node.h"
#include "classes/node2d.h"
#include "classes/noisetexture.h"
#include "classes/os.h"
#include "classes/object.h"
#include "classes/occluder.h"
#include "classes/occluderpolygon2d.h"
#include "classes/occludershape.h"
#include "classes/occludershapesphere.h"
#include "classes/omnilight.h"
#include "classes/opensimplexnoise.h"
#include "classes/optionbutton.h"
#include "classes/pckpacker.h"
#include "classes/phashtranslation.h"
#include "classes/packeddatacontainer.h"
#include "classes/packeddatacontainerref.h"
#include "classes/packedscene.h"
#include "classes/packedscenegltf.h"
#include "classes/packetpeer.h"
#include "classes/packetpeerdtls.h"
#include "classes/packetpeergdnative.h"
#include "classes/packetpeerstream.h"
#include "classes/packetpeerudp.h"
#include "classes/panel.h"
#include "classes/panelcontainer.h"
#include "classes/panoramasky.h"
#include "classes/parallaxbackground.h"
#include "classes/parallaxlayer.h"
#include "classes/particles.h"
#include "classes/particles2d.h"
#include "classes/particlesmaterial.h"
#include "classes/path.h"
#include "classes/path2d.h"
#include "classes/pathfollow.h"
#include "classes/pathfollow2d.h"
#include "classes/performance.h"
#include "classes/physicalbone.h"
#include "classes/physics2ddirectbodystate.h"
#include "classes/physics2ddirectbodystatesw.h"
#include "classes/physics2ddirectspacestate.h"
#include "classes/physics2dserver.h"
#include "classes/physics2dserversw.h"
#include "classes/physics2dshapequeryparameters.h"
#include "classes/physics2dtestmotionresult.h"
#include "classes/physicsbody.h"
#include "classes/physicsbody2d.h"
#include "classes/physicsdirectbodystate.h"
#include "classes/physicsdirectspacestate.h"
#include "classes/physicsmaterial.h"
#include "classes/physicsserver.h"
#include "classes/physicsshapequeryparameters.h"
#include "classes/physicstestmotionresult.h"
#include "classes/pinjoint.h"
#include "classes/pinjoint2d.h"
#include "classes/planemesh.h"
#include "classes/planeshape.h"
#include "classes/pluginscript.h"
#include "classes/pointmesh.h"
#include "classes/polygon2d.h"
#include "classes/polygonpathfinder.h"
#include "classes/popup.h"
#include "classes/popupdialog.h"
#include "classes/popupmenu.h"
#include "classes/popuppanel.h"
#include "classes/portal.h"
#include "classes/position2d.h"
#include "classes/position3d.h"
#include "classes/primitivemesh.h"
#include "classes/prismmesh.h"
#include "classes/proceduralsky.h"
#include "classes/progressbar.h"
#include "classes/projectsettings.h"
#include "classes/proximitygroup.h"
#include "classes/proxytexture.h"
#include "classes/quadmesh.h"
#include "classes/randomnumbergenerator.h"
#include "classes/range.h"
#include "classes/raycast.h"
#include "classes/raycast2d.h"
#include "classes/rayshape.h"
#include "classes/rayshape2d.h"
#include "classes/rectangleshape2d.h"
#include "classes/reference.h"
#include "classes/referencerect.h"
#include "classes/reflectionprobe.h"
#include "classes/regex.h"
#include "classes/regexmatch.h"
#include "classes/remotetransform.h"
#include "classes/remotetransform2d.h"
#include "classes/resource.h"
#include "classes/resourceformatloader.h"
#include "classes/resourceformatsaver.h"
#include "classes/resourceimporter.h"
#include "classes/resourceinteractiveloader.h"
#include "classes/resourceloader.h"
#include "classes/resourcepreloader.h"
#include "classes/resourcesaver.h"
#include "classes/richtexteffect.h"
#include "classes/richtextlabel.h"
#include "classes/rigidbody.h"
#include "classes/rigidbody2d.h"
#include "classes/room.h"
#include "classes/roomgroup.h"
#include "classes/roommanager.h"
#include "classes/rootmotionview.h"
#include "classes/scenestate.h"
#include "classes/scenetree.h"
#include "classes/scenetreetimer.h"
#include "classes/script.h"
#include "classes/scriptcreatedialog.h"
#include "classes/scripteditor.h"
#include "classes/scrollbar.h"
#include "classes/scrollcontainer.h"
#include "classes/segmentshape2d.h"
#include "classes/semaphore.h"
#include "classes/separator.h"
#include "classes/shader.h"
#include "classes/shadermaterial.h"
#include "classes/shape.h"
#include "classes/shape2d.h"
#include "classes/shortcut.h"
#include "classes/skeleton.h"
#include "classes/skeleton2d.h"
#include "classes/skeletonik.h"
#include "classes/skin.h"
#include "classes/skinreference.h"
#include "classes/sky.h"
#include "classes/slider.h"
#include "classes/sliderjoint.h"
#include "classes/softbody.h"
#include "classes/spatial.h"
#include "classes/spatialgizmo.h"
#include "classes/spatialmaterial.h"
#include "classes/spatialvelocitytracker.h"
#include "classes/spheremesh.h"
#include "classes/sphereshape.h"
#include "classes/spinbox.h"
#include "classes/splitcontainer.h"
#include "classes/spotlight.h"
#include "classes/springarm.h"
#include "classes/sprite.h"
#include "classes/sprite3d.h"
#include "classes/spritebase3d.h"
#include "classes/spriteframes.h"
#include "classes/staticbody.h"
#include "classes/staticbody2d.h"
#include "classes/streampeer.h"
#include "classes/streampeerbuffer.h"
#include "classes/streampeergdnative.h"
#include "classes/streampeerssl.h"
#include "classes/streampeertcp.h"
#include "classes/streamtexture.h"
#include "classes/stylebox.h"
#include "classes/styleboxempty.h"
#include "classes/styleboxflat.h"
#include "classes/styleboxline.h"
#include "classes/styleboxtexture.h"
#include "classes/surfacetool.h"
#include "classes/tcp_server.h"
#include "classes/tabcontainer.h"
#include "classes/tabs.h"
#include "classes/textedit.h"
#include "classes/textfile.h"
#include "classes/texture.h"
#include "classes/texture3d.h"
#include "classes/texturearray.h"
#include "classes/texturebutton.h"
#include "classes/texturelayered.h"
#include "classes/textureprogress.h"
#include "classes/texturerect.h"
#include "classes/theme.h"
#include "classes/thread.h"
#include "classes/tilemap.h"
#include "classes/tileset.h"
#include "classes/timer.h"
#include "classes/toolbutton.h"
#include "classes/touchscreenbutton.h"
#include "classes/translation.h"
#include "classes/translationserver.h"
#include "classes/tree.h"
#include "classes/treeitem.h"
#include "classes/trianglemesh.h"
#include "classes/tween.h"
#include "classes/udpserver.h"
#include "classes/upnp.h"
#include "classes/upnpdevice.h"
#include "classes/undoredo.h"
#include "classes/vboxcontainer.h"
#include "classes/vscrollbar.h"
#include "classes/vseparator.h"
#include "classes/vslider.h"
#include "classes/vsplitcontainer.h"
#include "classes/vehiclebody.h"
#include "classes/vehiclewheel.h"
#include "classes/videoplayer.h"
#include "classes/videostream.h"
#include "classes/videostreamgdnative.h"
#include "classes/videostreamtheora.h"
#include "classes/viewport.h"
#include "classes/viewportcontainer.h"
#include "classes/viewporttexture.h"
#include "classes/visibilityenabler.h"
#include "classes/visibilityenabler2d.h"
#include "classes/visibilitynotifier.h"
#include "classes/visibilitynotifier2d.h"
#include "classes/visualinstance.h"
#include "classes/visualscript.h"
#include "classes/visualscriptbasictypeconstant.h"
#include "classes/visualscriptbuiltinfunc.h"
#include "classes/visualscriptclassconstant.h"
#include "classes/visualscriptcomment.h"
#include "classes/visualscriptcomposearray.h"
#include "classes/visualscriptcondition.h"
#include "classes/visualscriptconstant.h"
#include "classes/visualscriptconstructor.h"
#include "classes/visualscriptcustomnode.h"
#include "classes/visualscriptdeconstruct.h"
#include "classes/visualscripteditor.h"
#include "classes/visualscriptemitsignal.h"
#include "classes/visualscriptenginesingleton.h"
#include "classes/visualscriptexpression.h"
#include "classes/visualscriptfunction.h"
#include "classes/visualscriptfunctioncall.h"
#include "classes/visualscriptfunctionstate.h"
#include "classes/visualscriptglobalconstant.h"
#include "classes/visualscriptindexget.h"
#include "classes/visualscriptindexset.h"
#include "classes/visualscriptinputaction.h"
#include "classes/visualscriptiterator.h"
#include "classes/visualscriptlists.h"
#include "classes/visualscriptlocalvar.h"
#include "classes/visualscriptlocalvarset.h"
#include "classes/visualscriptmathconstant.h"
#include "classes/visualscriptnode.h"
#include "classes/visualscriptoperator.h"
#include "classes/visualscriptpreload.h"
#include "classes/visualscriptpropertyget.h"
#include "classes/visualscriptpropertyset.h"
#include "classes/visualscriptresourcepath.h"
#include "classes/visualscriptreturn.h"
#include "classes/visualscriptscenenode.h"
#include "classes/visualscriptscenetree.h"
#include "classes/visualscriptselect.h"
#include "classes/visualscriptself.h"
#include "classes/visualscriptsequence.h"
#include "classes/visualscriptsubcall.h"
#include "classes/visualscriptswitch.h"
#include "classes/visualscripttypecast.h"
#include "classes/visualscriptvariableget.h"
#include "classes/visualscriptvariableset.h"
#include "classes/visualscriptwhile.h"
#include "classes/visualscriptyield.h"
#include "classes/visualscriptyieldsignal.h"
#include "classes/visualserver.h"
#include "classes/visualshader.h"
#include "classes/visualshadernode.h"
#include "classes/visualshadernodebooleanconstant.h"
#include "classes/visualshadernodebooleanuniform.h"
#include "classes/visualshadernodecolorconstant.h"
#include "classes/visualshadernodecolorfunc.h"
#include "classes/visualshadernodecolorop.h"
#include "classes/visualshadernodecoloruniform.h"
#include "classes/visualshadernodecompare.h"
#include "classes/visualshadernodecubemap.h"
#include "classes/visualshadernodecubemapuniform.h"
#include "classes/visualshadernodecustom.h"
#include "classes/visualshadernodedeterminant.h"
#include "classes/visualshadernodedotproduct.h"
#include "classes/visualshadernodeexpression.h"
#include "classes/visualshadernodefaceforward.h"
#include "classes/visualshadernodefresnel.h"
#include "classes/visualshadernodeglobalexpression.h"
#include "classes/visualshadernodegroupbase.h"
#include "classes/visualshadernodeif.h"
#include "classes/visualshadernodeinput.h"
#include "classes/visualshadernodeis.h"
#include "classes/visualshadernodeouterproduct.h"
#include "classes/visualshadernodeoutput.h"
#include "classes/visualshadernodescalarclamp.h"
#include "classes/visualshadernodescalarconstant.h"
#include "classes/visualshadernodescalarderivativefunc.h"
#include "classes/visualshadernodescalarfunc.h"
#include "classes/visualshadernodescalarinterp.h"
#include "classes/visualshadernodescalarop.h"
#include "classes/visualshadernodescalarsmoothstep.h"
#include "classes/visualshadernodescalarswitch.h"
#include "classes/visualshadernodescalaruniform.h"
#include "classes/visualshadernodeswitch.h"
#include "classes/visualshadernodetexture.h"
#include "classes/visualshadernodetextureuniform.h"
#include "classes/visualshadernodetextureuniformtriplanar.h"
#include "classes/visualshadernodetransformcompose.h"
#include "classes/visualshadernodetransformconstant.h"
#include "classes/visualshadernodetransformdecompose.h"
#include "classes/visualshadernodetransformfunc.h"
#include "classes/visualshadernodetransformmult.h"
#include "classes/visualshadernodetransformuniform.h"
#include "classes/visualshadernodetransformvecmult.h"
#include "classes/visualshadernodeuniform.h"
#include "classes/visualshadernodeuniformref.h"
#include "classes/visualshadernodevec3constant.h"
#include "classes/visualshadernodevec3uniform.h"
#include "classes/visualshadernodevectorclamp.h"
#include "classes/visualshadernodevectorcompose.h"
#include "classes/visualshadernodevectordecompose.h"
#include "classes/visualshadernodevectorderivativefunc.h"
#include "classes/visualshadernodevectordistance.h"
#include "classes/visualshadernodevectorfunc.h"
#include "classes/visualshadernodevectorinterp.h"
#include "classes/visualshadernodevectorlen.h"
#include "classes/visualshadernodevectorop.h"
#include "classes/visualshadernodevectorrefract.h"
#include "classes/visualshadernodevectorscalarmix.h"
#include "classes/visualshadernodevectorscalarsmoothstep.h"
#include "classes/visualshadernodevectorscalarstep.h"
#include "classes/visualshadernodevectorsmoothstep.h"
#include "classes/weakref.h"
#include "classes/webrtcdatachannel.h"
#include "classes/webrtcdatachannelgdnative.h"
#include "classes/webrtcmultiplayer.h"
#include "classes/webrtcpeerconnection.h"
#include "classes/webrtcpeerconnectiongdnative.h"
#include "classes/websocketclient.h"
#include "classes/websocketmultiplayerpeer.h"
#include "classes/websocketpeer.h"
#include "classes/websocketserver.h"
#include "classes/webxrinterface.h"
#include "classes/windowdialog.h"
#include "classes/world.h"
#include "classes/world2d.h"
#include "classes/worldenvironment.h"
#include "classes/x509certificate.h"
#include "classes/xmlparser.h"
#include "classes/ysort.h"

namespace Rebel {
void init_method_bindings() {
    AESContext::init_method_bindings();
    ARVRAnchor::init_method_bindings();
    ARVRCamera::init_method_bindings();
    ARVRController::init_method_bindings();
    ARVRInterface::init_method_bindings();
    ARVRInterfaceGDNative::init_method_bindings();
    ARVROrigin::init_method_bindings();
    ARVRPositionalTracker::init_method_bindings();
    ARVRServer::init_method_bindings();
    AStar::init_method_bindings();
    AStar2D::init_method_bindings();
    AcceptDialog::init_method_bindings();
    AnimatedSprite::init_method_bindings();
    AnimatedSprite3D::init_method_bindings();
    AnimatedTexture::init_method_bindings();
    Animation::init_method_bindings();
    AnimationNode::init_method_bindings();
    AnimationNodeAdd2::init_method_bindings();
    AnimationNodeAdd3::init_method_bindings();
    AnimationNodeAnimation::init_method_bindings();
    AnimationNodeBlend2::init_method_bindings();
    AnimationNodeBlend3::init_method_bindings();
    AnimationNodeBlendSpace1D::init_method_bindings();
    AnimationNodeBlendSpace2D::init_method_bindings();
    AnimationNodeBlendTree::init_method_bindings();
    AnimationNodeOneShot::init_method_bindings();
    AnimationNodeOutput::init_method_bindings();
    AnimationNodeStateMachine::init_method_bindings();
    AnimationNodeStateMachinePlayback::init_method_bindings();
    AnimationNodeStateMachineTransition::init_method_bindings();
    AnimationNodeTimeScale::init_method_bindings();
    AnimationNodeTimeSeek::init_method_bindings();
    AnimationNodeTransition::init_method_bindings();
    AnimationPlayer::init_method_bindings();
    AnimationRootNode::init_method_bindings();
    AnimationTrackEditPlugin::init_method_bindings();
    AnimationTree::init_method_bindings();
    AnimationTreePlayer::init_method_bindings();
    Area::init_method_bindings();
    Area2D::init_method_bindings();
    ArrayMesh::init_method_bindings();
    AspectRatioContainer::init_method_bindings();
    AtlasTexture::init_method_bindings();
    AudioBusLayout::init_method_bindings();
    AudioEffect::init_method_bindings();
    AudioEffectAmplify::init_method_bindings();
    AudioEffectBandLimitFilter::init_method_bindings();
    AudioEffectBandPassFilter::init_method_bindings();
    AudioEffectCapture::init_method_bindings();
    AudioEffectChorus::init_method_bindings();
    AudioEffectCompressor::init_method_bindings();
    AudioEffectDelay::init_method_bindings();
    AudioEffectDistortion::init_method_bindings();
    AudioEffectEQ::init_method_bindings();
    AudioEffectEQ10::init_method_bindings();
    AudioEffectEQ21::init_method_bindings();
    AudioEffectEQ6::init_method_bindings();
    AudioEffectFilter::init_method_bindings();
    AudioEffectHighPassFilter::init_method_bindings();
    AudioEffectHighShelfFilter::init_method_bindings();
    AudioEffectInstance::init_method_bindings();
    AudioEffectLimiter::init_method_bindings();
    AudioEffectLowPassFilter::init_method_bindings();
    AudioEffectLowShelfFilter::init_method_bindings();
    AudioEffectNotchFilter::init_method_bindings();
    AudioEffectPanner::init_method_bindings();
    AudioEffectPhaser::init_method_bindings();
    AudioEffectPitchShift::init_method_bindings();
    AudioEffectRecord::init_method_bindings();
    AudioEffectReverb::init_method_bindings();
    AudioEffectSpectrumAnalyzer::init_method_bindings();
    AudioEffectSpectrumAnalyzerInstance::init_method_bindings();
    AudioEffectStereoEnhance::init_method_bindings();
    AudioServer::init_method_bindings();
    AudioStream::init_method_bindings();
    AudioStreamGenerator::init_method_bindings();
    AudioStreamGeneratorPlayback::init_method_bindings();
    AudioStreamMP3::init_method_bindings();
    AudioStreamMicrophone::init_method_bindings();
    AudioStreamOGGVorbis::init_method_bindings();
    AudioStreamPlayback::init_method_bindings();
    AudioStreamPlaybackResampled::init_method_bindings();
    AudioStreamPlayer::init_method_bindings();
    AudioStreamPlayer2D::init_method_bindings();
    AudioStreamPlayer3D::init_method_bindings();
    AudioStreamRandomPitch::init_method_bindings();
    AudioStreamSample::init_method_bindings();
    BackBufferCopy::init_method_bindings();
    BakedLightmap::init_method_bindings();
    BakedLightmapData::init_method_bindings();
    BaseButton::init_method_bindings();
    BitMap::init_method_bindings();
    BitmapFont::init_method_bindings();
    Bone2D::init_method_bindings();
    BoneAttachment::init_method_bindings();
    BoxContainer::init_method_bindings();
    BoxShape::init_method_bindings();
    BulletPhysicsDirectBodyState::init_method_bindings();
    BulletPhysicsServer::init_method_bindings();
    Button::init_method_bindings();
    ButtonGroup::init_method_bindings();
    CPUParticles::init_method_bindings();
    CPUParticles2D::init_method_bindings();
    CSGBox::init_method_bindings();
    CSGCombiner::init_method_bindings();
    CSGCylinder::init_method_bindings();
    CSGMesh::init_method_bindings();
    CSGPolygon::init_method_bindings();
    CSGPrimitive::init_method_bindings();
    CSGShape::init_method_bindings();
    CSGSphere::init_method_bindings();
    CSGTorus::init_method_bindings();
    Camera::init_method_bindings();
    Camera2D::init_method_bindings();
    CameraFeed::init_method_bindings();
    CameraServer::init_method_bindings();
    CameraTexture::init_method_bindings();
    CanvasItem::init_method_bindings();
    CanvasItemMaterial::init_method_bindings();
    CanvasLayer::init_method_bindings();
    CanvasModulate::init_method_bindings();
    CapsuleMesh::init_method_bindings();
    CapsuleShape::init_method_bindings();
    CapsuleShape2D::init_method_bindings();
    CenterContainer::init_method_bindings();
    CharFXTransform::init_method_bindings();
    CheckBox::init_method_bindings();
    CheckButton::init_method_bindings();
    CircleShape2D::init_method_bindings();
    ClassDB::init_method_bindings();
    ClippedCamera::init_method_bindings();
    CollisionObject::init_method_bindings();
    CollisionObject2D::init_method_bindings();
    CollisionPolygon::init_method_bindings();
    CollisionPolygon2D::init_method_bindings();
    CollisionShape::init_method_bindings();
    CollisionShape2D::init_method_bindings();
    ColorPicker::init_method_bindings();
    ColorPickerButton::init_method_bindings();
    ColorRect::init_method_bindings();
    ConcavePolygonShape::init_method_bindings();
    ConcavePolygonShape2D::init_method_bindings();
    ConeTwistJoint::init_method_bindings();
    ConfigFile::init_method_bindings();
    ConfirmationDialog::init_method_bindings();
    Container::init_method_bindings();
    Control::init_method_bindings();
    ConvexPolygonShape::init_method_bindings();
    ConvexPolygonShape2D::init_method_bindings();
    Crypto::init_method_bindings();
    CryptoKey::init_method_bindings();
    CubeMap::init_method_bindings();
    CubeMesh::init_method_bindings();
    CullInstance::init_method_bindings();
    Curve::init_method_bindings();
    Curve2D::init_method_bindings();
    Curve3D::init_method_bindings();
    CurveTexture::init_method_bindings();
    CylinderMesh::init_method_bindings();
    CylinderShape::init_method_bindings();
    DTLSServer::init_method_bindings();
    DampedSpringJoint2D::init_method_bindings();
    DefaultIP::init_method_bindings();
    DirectionalLight::init_method_bindings();
    Directory::init_method_bindings();
    DynamicFont::init_method_bindings();
    DynamicFontData::init_method_bindings();
    EditorExportPlugin::init_method_bindings();
    EditorFeatureProfile::init_method_bindings();
    EditorFileDialog::init_method_bindings();
    EditorFileSystem::init_method_bindings();
    EditorFileSystemDirectory::init_method_bindings();
    EditorImportPlugin::init_method_bindings();
    EditorInspector::init_method_bindings();
    EditorInspectorPlugin::init_method_bindings();
    EditorInterface::init_method_bindings();
    EditorNavigationMeshGenerator::init_method_bindings();
    EditorPlugin::init_method_bindings();
    EditorProperty::init_method_bindings();
    EditorResourceConversionPlugin::init_method_bindings();
    EditorResourcePicker::init_method_bindings();
    EditorResourcePreview::init_method_bindings();
    EditorResourcePreviewGenerator::init_method_bindings();
    EditorSceneImporter::init_method_bindings();
    EditorSceneImporterFBX::init_method_bindings();
    EditorSceneImporterGLTF::init_method_bindings();
    EditorScenePostImport::init_method_bindings();
    EditorScript::init_method_bindings();
    EditorScriptPicker::init_method_bindings();
    EditorSelection::init_method_bindings();
    EditorSettings::init_method_bindings();
    EditorSpatialGizmo::init_method_bindings();
    EditorSpatialGizmoPlugin::init_method_bindings();
    EditorSpinSlider::init_method_bindings();
    EditorVCSInterface::init_method_bindings();
    EncodedObjectAsID::init_method_bindings();
    Engine::init_method_bindings();
    Environment::init_method_bindings();
    Expression::init_method_bindings();
    ExternalTexture::init_method_bindings();
    File::init_method_bindings();
    FileDialog::init_method_bindings();
    FileSystemDock::init_method_bindings();
    Font::init_method_bindings();
    FuncRef::init_method_bindings();
    GDNative::init_method_bindings();
    GDNativeLibrary::init_method_bindings();
    GDScript::init_method_bindings();
    GDScriptFunctionState::init_method_bindings();
    GIProbe::init_method_bindings();
    GIProbeData::init_method_bindings();
    GLTFAccessor::init_method_bindings();
    GLTFAnimation::init_method_bindings();
    GLTFBufferView::init_method_bindings();
    GLTFCamera::init_method_bindings();
    GLTFDocument::init_method_bindings();
    GLTFLight::init_method_bindings();
    GLTFMesh::init_method_bindings();
    GLTFNode::init_method_bindings();
    GLTFSkeleton::init_method_bindings();
    GLTFSkin::init_method_bindings();
    GLTFSpecGloss::init_method_bindings();
    GLTFState::init_method_bindings();
    GLTFTexture::init_method_bindings();
    Generic6DOFJoint::init_method_bindings();
    Geometry::init_method_bindings();
    GeometryInstance::init_method_bindings();
    GlobalConstants::init_method_bindings();
    Gradient::init_method_bindings();
    GradientTexture::init_method_bindings();
    GraphEdit::init_method_bindings();
    GraphNode::init_method_bindings();
    GridContainer::init_method_bindings();
    GridMap::init_method_bindings();
    GrooveJoint2D::init_method_bindings();
    HBoxContainer::init_method_bindings();
    HMACContext::init_method_bindings();
    HScrollBar::init_method_bindings();
    HSeparator::init_method_bindings();
    HSlider::init_method_bindings();
    HSplitContainer::init_method_bindings();
    HTTPClient::init_method_bindings();
    HTTPRequest::init_method_bindings();
    HashingContext::init_method_bindings();
    HeightMapShape::init_method_bindings();
    HingeJoint::init_method_bindings();
    IP::init_method_bindings();
    Image::init_method_bindings();
    ImageTexture::init_method_bindings();
    ImmediateGeometry::init_method_bindings();
    Input::init_method_bindings();
    InputDefault::init_method_bindings();
    InputEvent::init_method_bindings();
    InputEventAction::init_method_bindings();
    InputEventGesture::init_method_bindings();
    InputEventJoypadButton::init_method_bindings();
    InputEventJoypadMotion::init_method_bindings();
    InputEventKey::init_method_bindings();
    InputEventMIDI::init_method_bindings();
    InputEventMagnifyGesture::init_method_bindings();
    InputEventMouse::init_method_bindings();
    InputEventMouseButton::init_method_bindings();
    InputEventMouseMotion::init_method_bindings();
    InputEventPanGesture::init_method_bindings();
    InputEventScreenDrag::init_method_bindings();
    InputEventScreenTouch::init_method_bindings();
    InputEventWithModifiers::init_method_bindings();
    InputMap::init_method_bindings();
    InstancePlaceholder::init_method_bindings();
    InterpolatedCamera::init_method_bindings();
    ItemList::init_method_bindings();
    JNISingleton::init_method_bindings();
    JSON::init_method_bindings();
    JSONParseResult::init_method_bindings();
    JSONRPC::init_method_bindings();
    JavaClass::init_method_bindings();
    JavaClassWrapper::init_method_bindings();
    JavaScript::init_method_bindings();
    JavaScriptObject::init_method_bindings();
    Joint::init_method_bindings();
    Joint2D::init_method_bindings();
    KinematicBody::init_method_bindings();
    KinematicBody2D::init_method_bindings();
    KinematicCollision::init_method_bindings();
    KinematicCollision2D::init_method_bindings();
    Label::init_method_bindings();
    LargeTexture::init_method_bindings();
    Light::init_method_bindings();
    Light2D::init_method_bindings();
    LightOccluder2D::init_method_bindings();
    Line2D::init_method_bindings();
    LineEdit::init_method_bindings();
    LineShape2D::init_method_bindings();
    LinkButton::init_method_bindings();
    Listener::init_method_bindings();
    Listener2D::init_method_bindings();
    MainLoop::init_method_bindings();
    MarginContainer::init_method_bindings();
    Marshalls::init_method_bindings();
    Material::init_method_bindings();
    MenuButton::init_method_bindings();
    Mesh::init_method_bindings();
    MeshDataTool::init_method_bindings();
    MeshInstance::init_method_bindings();
    MeshInstance2D::init_method_bindings();
    MeshLibrary::init_method_bindings();
    MeshTexture::init_method_bindings();
    MobileVRInterface::init_method_bindings();
    MultiMesh::init_method_bindings();
    MultiMeshInstance::init_method_bindings();
    MultiMeshInstance2D::init_method_bindings();
    MultiplayerAPI::init_method_bindings();
    MultiplayerPeerGDNative::init_method_bindings();
    Mutex::init_method_bindings();
    NativeScript::init_method_bindings();
    Navigation::init_method_bindings();
    Navigation2D::init_method_bindings();
    NavigationMesh::init_method_bindings();
    NavigationMeshInstance::init_method_bindings();
    NavigationPolygon::init_method_bindings();
    NavigationPolygonInstance::init_method_bindings();
    NetworkedMultiplayerENet::init_method_bindings();
    NetworkedMultiplayerPeer::init_method_bindings();
    NinePatchRect::init_method_bindings();
    Node::init_method_bindings();
    Node2D::init_method_bindings();
    NoiseTexture::init_method_bindings();
    OS::init_method_bindings();
    Object::init_method_bindings();
    Occluder::init_method_bindings();
    OccluderPolygon2D::init_method_bindings();
    OccluderShape::init_method_bindings();
    OccluderShapeSphere::init_method_bindings();
    OmniLight::init_method_bindings();
    OpenSimplexNoise::init_method_bindings();
    OptionButton::init_method_bindings();
    PCKPacker::init_method_bindings();
    PHashTranslation::init_method_bindings();
    PackedDataContainer::init_method_bindings();
    PackedDataContainerRef::init_method_bindings();
    PackedScene::init_method_bindings();
    PackedSceneGLTF::init_method_bindings();
    PacketPeer::init_method_bindings();
    PacketPeerDTLS::init_method_bindings();
    PacketPeerGDNative::init_method_bindings();
    PacketPeerStream::init_method_bindings();
    PacketPeerUDP::init_method_bindings();
    Panel::init_method_bindings();
    PanelContainer::init_method_bindings();
    PanoramaSky::init_method_bindings();
    ParallaxBackground::init_method_bindings();
    ParallaxLayer::init_method_bindings();
    Particles::init_method_bindings();
    Particles2D::init_method_bindings();
    ParticlesMaterial::init_method_bindings();
    Path::init_method_bindings();
    Path2D::init_method_bindings();
    PathFollow::init_method_bindings();
    PathFollow2D::init_method_bindings();
    Performance::init_method_bindings();
    PhysicalBone::init_method_bindings();
    Physics2DDirectBodyState::init_method_bindings();
    Physics2DDirectBodyStateSW::init_method_bindings();
    Physics2DDirectSpaceState::init_method_bindings();
    Physics2DServer::init_method_bindings();
    Physics2DServerSW::init_method_bindings();
    Physics2DShapeQueryParameters::init_method_bindings();
    Physics2DTestMotionResult::init_method_bindings();
    PhysicsBody::init_method_bindings();
    PhysicsBody2D::init_method_bindings();
    PhysicsDirectBodyState::init_method_bindings();
    PhysicsDirectSpaceState::init_method_bindings();
    PhysicsMaterial::init_method_bindings();
    PhysicsServer::init_method_bindings();
    PhysicsShapeQueryParameters::init_method_bindings();
    PhysicsTestMotionResult::init_method_bindings();
    PinJoint::init_method_bindings();
    PinJoint2D::init_method_bindings();
    PlaneMesh::init_method_bindings();
    PlaneShape::init_method_bindings();
    PluginScript::init_method_bindings();
    PointMesh::init_method_bindings();
    Polygon2D::init_method_bindings();
    PolygonPathFinder::init_method_bindings();
    Popup::init_method_bindings();
    PopupDialog::init_method_bindings();
    PopupMenu::init_method_bindings();
    PopupPanel::init_method_bindings();
    Portal::init_method_bindings();
    Position2D::init_method_bindings();
    Position3D::init_method_bindings();
    PrimitiveMesh::init_method_bindings();
    PrismMesh::init_method_bindings();
    ProceduralSky::init_method_bindings();
    ProgressBar::init_method_bindings();
    ProjectSettings::init_method_bindings();
    ProximityGroup::init_method_bindings();
    ProxyTexture::init_method_bindings();
    QuadMesh::init_method_bindings();
    RandomNumberGenerator::init_method_bindings();
    Range::init_method_bindings();
    RayCast::init_method_bindings();
    RayCast2D::init_method_bindings();
    RayShape::init_method_bindings();
    RayShape2D::init_method_bindings();
    RectangleShape2D::init_method_bindings();
    Reference::init_method_bindings();
    ReferenceRect::init_method_bindings();
    ReflectionProbe::init_method_bindings();
    RegEx::init_method_bindings();
    RegExMatch::init_method_bindings();
    RemoteTransform::init_method_bindings();
    RemoteTransform2D::init_method_bindings();
    Resource::init_method_bindings();
    ResourceFormatLoader::init_method_bindings();
    ResourceFormatSaver::init_method_bindings();
    ResourceImporter::init_method_bindings();
    ResourceInteractiveLoader::init_method_bindings();
    ResourceLoader::init_method_bindings();
    ResourcePreloader::init_method_bindings();
    ResourceSaver::init_method_bindings();
    RichTextEffect::init_method_bindings();
    RichTextLabel::init_method_bindings();
    RigidBody::init_method_bindings();
    RigidBody2D::init_method_bindings();
    Room::init_method_bindings();
    RoomGroup::init_method_bindings();
    RoomManager::init_method_bindings();
    RootMotionView::init_method_bindings();
    SceneState::init_method_bindings();
    SceneTree::init_method_bindings();
    SceneTreeTimer::init_method_bindings();
    Script::init_method_bindings();
    ScriptCreateDialog::init_method_bindings();
    ScriptEditor::init_method_bindings();
    ScrollBar::init_method_bindings();
    ScrollContainer::init_method_bindings();
    SegmentShape2D::init_method_bindings();
    Semaphore::init_method_bindings();
    Separator::init_method_bindings();
    Shader::init_method_bindings();
    ShaderMaterial::init_method_bindings();
    Shape::init_method_bindings();
    Shape2D::init_method_bindings();
    ShortCut::init_method_bindings();
    Skeleton::init_method_bindings();
    Skeleton2D::init_method_bindings();
    SkeletonIK::init_method_bindings();
    Skin::init_method_bindings();
    SkinReference::init_method_bindings();
    Sky::init_method_bindings();
    Slider::init_method_bindings();
    SliderJoint::init_method_bindings();
    SoftBody::init_method_bindings();
    Spatial::init_method_bindings();
    SpatialGizmo::init_method_bindings();
    SpatialMaterial::init_method_bindings();
    SpatialVelocityTracker::init_method_bindings();
    SphereMesh::init_method_bindings();
    SphereShape::init_method_bindings();
    SpinBox::init_method_bindings();
    SplitContainer::init_method_bindings();
    SpotLight::init_method_bindings();
    SpringArm::init_method_bindings();
    Sprite::init_method_bindings();
    Sprite3D::init_method_bindings();
    SpriteBase3D::init_method_bindings();
    SpriteFrames::init_method_bindings();
    StaticBody::init_method_bindings();
    StaticBody2D::init_method_bindings();
    StreamPeer::init_method_bindings();
    StreamPeerBuffer::init_method_bindings();
    StreamPeerGDNative::init_method_bindings();
    StreamPeerSSL::init_method_bindings();
    StreamPeerTCP::init_method_bindings();
    StreamTexture::init_method_bindings();
    StyleBox::init_method_bindings();
    StyleBoxEmpty::init_method_bindings();
    StyleBoxFlat::init_method_bindings();
    StyleBoxLine::init_method_bindings();
    StyleBoxTexture::init_method_bindings();
    SurfaceTool::init_method_bindings();
    TCP_Server::init_method_bindings();
    TabContainer::init_method_bindings();
    Tabs::init_method_bindings();
    TextEdit::init_method_bindings();
    TextFile::init_method_bindings();
    Texture::init_method_bindings();
    Texture3D::init_method_bindings();
    TextureArray::init_method_bindings();
    TextureButton::init_method_bindings();
    TextureLayered::init_method_bindings();
    TextureProgress::init_method_bindings();
    TextureRect::init_method_bindings();
    Theme::init_method_bindings();
    Thread::init_method_bindings();
    TileMap::init_method_bindings();
    TileSet::init_method_bindings();
    Timer::init_method_bindings();
    ToolButton::init_method_bindings();
    TouchScreenButton::init_method_bindings();
    Translation::init_method_bindings();
    TranslationServer::init_method_bindings();
    Tree::init_method_bindings();
    TreeItem::init_method_bindings();
    TriangleMesh::init_method_bindings();
    Tween::init_method_bindings();
    UDPServer::init_method_bindings();
    UPNP::init_method_bindings();
    UPNPDevice::init_method_bindings();
    UndoRedo::init_method_bindings();
    VBoxContainer::init_method_bindings();
    VScrollBar::init_method_bindings();
    VSeparator::init_method_bindings();
    VSlider::init_method_bindings();
    VSplitContainer::init_method_bindings();
    VehicleBody::init_method_bindings();
    VehicleWheel::init_method_bindings();
    VideoPlayer::init_method_bindings();
    VideoStream::init_method_bindings();
    VideoStreamGDNative::init_method_bindings();
    VideoStreamTheora::init_method_bindings();
    Viewport::init_method_bindings();
    ViewportContainer::init_method_bindings();
    ViewportTexture::init_method_bindings();
    VisibilityEnabler::init_method_bindings();
    VisibilityEnabler2D::init_method_bindings();
    VisibilityNotifier::init_method_bindings();
    VisibilityNotifier2D::init_method_bindings();
    VisualInstance::init_method_bindings();
    VisualScript::init_method_bindings();
    VisualScriptBasicTypeConstant::init_method_bindings();
    VisualScriptBuiltinFunc::init_method_bindings();
    VisualScriptClassConstant::init_method_bindings();
    VisualScriptComment::init_method_bindings();
    VisualScriptComposeArray::init_method_bindings();
    VisualScriptCondition::init_method_bindings();
    VisualScriptConstant::init_method_bindings();
    VisualScriptConstructor::init_method_bindings();
    VisualScriptCustomNode::init_method_bindings();
    VisualScriptDeconstruct::init_method_bindings();
    VisualScriptEditor::init_method_bindings();
    VisualScriptEmitSignal::init_method_bindings();
    VisualScriptEngineSingleton::init_method_bindings();
    VisualScriptExpression::init_method_bindings();
    VisualScriptFunction::init_method_bindings();
    VisualScriptFunctionCall::init_method_bindings();
    VisualScriptFunctionState::init_method_bindings();
    VisualScriptGlobalConstant::init_method_bindings();
    VisualScriptIndexGet::init_method_bindings();
    VisualScriptIndexSet::init_method_bindings();
    VisualScriptInputAction::init_method_bindings();
    VisualScriptIterator::init_method_bindings();
    VisualScriptLists::init_method_bindings();
    VisualScriptLocalVar::init_method_bindings();
    VisualScriptLocalVarSet::init_method_bindings();
    VisualScriptMathConstant::init_method_bindings();
    VisualScriptNode::init_method_bindings();
    VisualScriptOperator::init_method_bindings();
    VisualScriptPreload::init_method_bindings();
    VisualScriptPropertyGet::init_method_bindings();
    VisualScriptPropertySet::init_method_bindings();
    VisualScriptResourcePath::init_method_bindings();
    VisualScriptReturn::init_method_bindings();
    VisualScriptSceneNode::init_method_bindings();
    VisualScriptSceneTree::init_method_bindings();
    VisualScriptSelect::init_method_bindings();
    VisualScriptSelf::init_method_bindings();
    VisualScriptSequence::init_method_bindings();
    VisualScriptSubCall::init_method_bindings();
    VisualScriptSwitch::init_method_bindings();
    VisualScriptTypeCast::init_method_bindings();
    VisualScriptVariableGet::init_method_bindings();
    VisualScriptVariableSet::init_method_bindings();
    VisualScriptWhile::init_method_bindings();
    VisualScriptYield::init_method_bindings();
    VisualScriptYieldSignal::init_method_bindings();
    VisualServer::init_method_bindings();
    VisualShader::init_method_bindings();
    VisualShaderNode::init_method_bindings();
    VisualShaderNodeBooleanConstant::init_method_bindings();
    VisualShaderNodeBooleanUniform::init_method_bindings();
    VisualShaderNodeColorConstant::init_method_bindings();
    VisualShaderNodeColorFunc::init_method_bindings();
    VisualShaderNodeColorOp::init_method_bindings();
    VisualShaderNodeColorUniform::init_method_bindings();
    VisualShaderNodeCompare::init_method_bindings();
    VisualShaderNodeCubeMap::init_method_bindings();
    VisualShaderNodeCubeMapUniform::init_method_bindings();
    VisualShaderNodeCustom::init_method_bindings();
    VisualShaderNodeDeterminant::init_method_bindings();
    VisualShaderNodeDotProduct::init_method_bindings();
    VisualShaderNodeExpression::init_method_bindings();
    VisualShaderNodeFaceForward::init_method_bindings();
    VisualShaderNodeFresnel::init_method_bindings();
    VisualShaderNodeGlobalExpression::init_method_bindings();
    VisualShaderNodeGroupBase::init_method_bindings();
    VisualShaderNodeIf::init_method_bindings();
    VisualShaderNodeInput::init_method_bindings();
    VisualShaderNodeIs::init_method_bindings();
    VisualShaderNodeOuterProduct::init_method_bindings();
    VisualShaderNodeOutput::init_method_bindings();
    VisualShaderNodeScalarClamp::init_method_bindings();
    VisualShaderNodeScalarConstant::init_method_bindings();
    VisualShaderNodeScalarDerivativeFunc::init_method_bindings();
    VisualShaderNodeScalarFunc::init_method_bindings();
    VisualShaderNodeScalarInterp::init_method_bindings();
    VisualShaderNodeScalarOp::init_method_bindings();
    VisualShaderNodeScalarSmoothStep::init_method_bindings();
    VisualShaderNodeScalarSwitch::init_method_bindings();
    VisualShaderNodeScalarUniform::init_method_bindings();
    VisualShaderNodeSwitch::init_method_bindings();
    VisualShaderNodeTexture::init_method_bindings();
    VisualShaderNodeTextureUniform::init_method_bindings();
    VisualShaderNodeTextureUniformTriplanar::init_method_bindings();
    VisualShaderNodeTransformCompose::init_method_bindings();
    VisualShaderNodeTransformConstant::init_method_bindings();
    VisualShaderNodeTransformDecompose::init_method_bindings();
    VisualShaderNodeTransformFunc::init_method_bindings();
    VisualShaderNodeTransformMult::init_method_bindings();
    VisualShaderNodeTransformUniform::init_method_bindings();
    VisualShaderNodeTransformVecMult::init_method_bindings();
    VisualShaderNodeUniform::init_method_bindings();
    VisualShaderNodeUniformRef::init_method_bindings();
    VisualShaderNodeVec3Constant::init_method_bindings();
    VisualShaderNodeVec3Uniform::init_method_bindings();
    VisualShaderNodeVectorClamp::init_method_bindings();
    VisualShaderNodeVectorCompose::init_method_bindings();
    VisualShaderNodeVectorDecompose::init_method_bindings();
    VisualShaderNodeVectorDerivativeFunc::init_method_bindings();
    VisualShaderNodeVectorDistance::init_method_bindings();
    VisualShaderNodeVectorFunc::init_method_bindings();
    VisualShaderNodeVectorInterp::init_method_bindings();
    VisualShaderNodeVectorLen::init_method_bindings();
    VisualShaderNodeVectorOp::init_method_bindings();
    VisualShaderNodeVectorRefract::init_method_bindings();
    VisualShaderNodeVectorScalarMix::init_method_bindings();
    VisualShaderNodeVectorScalarSmoothStep::init_method_bindings();
    VisualShaderNodeVectorScalarStep::init_method_bindings();
    VisualShaderNodeVectorSmoothStep::init_method_bindings();
    WeakRef::init_method_bindings();
    WebRTCDataChannel::init_method_bindings();
    WebRTCDataChannelGDNative::init_method_bindings();
    WebRTCMultiplayer::init_method_bindings();
    WebRTCPeerConnection::init_method_bindings();
    WebRTCPeerConnectionGDNative::init_method_bindings();
    WebSocketClient::init_method_bindings();
    WebSocketMultiplayerPeer::init_method_bindings();
    WebSocketPeer::init_method_bindings();
    WebSocketServer::init_method_bindings();
    WebXRInterface::init_method_bindings();
    WindowDialog::init_method_bindings();
    World::init_method_bindings();
    World2D::init_method_bindings();
    WorldEnvironment::init_method_bindings();
    X509Certificate::init_method_bindings();
    XMLParser::init_method_bindings();
    YSort::init_method_bindings();
}
} // namespace Rebel
