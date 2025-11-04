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
#include "common/tagdb.h"

#include <typeinfo>

namespace Rebel {
void register_types() {
    TagDB::register_global_type(
        "AESContext",
        typeid(AESContext).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "ARVRAnchor",
        typeid(ARVRAnchor).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "ARVRCamera",
        typeid(ARVRCamera).hash_code(),
        typeid(Camera).hash_code()
    );

    TagDB::register_global_type(
        "ARVRController",
        typeid(ARVRController).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "ARVRInterface",
        typeid(ARVRInterface).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "ARVRInterfaceGDNative",
        typeid(ARVRInterfaceGDNative).hash_code(),
        typeid(ARVRInterface).hash_code()
    );

    TagDB::register_global_type(
        "ARVROrigin",
        typeid(ARVROrigin).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "ARVRPositionalTracker",
        typeid(ARVRPositionalTracker).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "ARVRServer",
        typeid(ARVRServer).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "AStar",
        typeid(AStar).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "AStar2D",
        typeid(AStar2D).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "AcceptDialog",
        typeid(AcceptDialog).hash_code(),
        typeid(WindowDialog).hash_code()
    );

    TagDB::register_global_type(
        "AnimatedSprite",
        typeid(AnimatedSprite).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "AnimatedSprite3D",
        typeid(AnimatedSprite3D).hash_code(),
        typeid(SpriteBase3D).hash_code()
    );

    TagDB::register_global_type(
        "AnimatedTexture",
        typeid(AnimatedTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "Animation",
        typeid(Animation).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNode",
        typeid(AnimationNode).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeAdd2",
        typeid(AnimationNodeAdd2).hash_code(),
        typeid(AnimationNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeAdd3",
        typeid(AnimationNodeAdd3).hash_code(),
        typeid(AnimationNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeAnimation",
        typeid(AnimationNodeAnimation).hash_code(),
        typeid(AnimationRootNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeBlend2",
        typeid(AnimationNodeBlend2).hash_code(),
        typeid(AnimationNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeBlend3",
        typeid(AnimationNodeBlend3).hash_code(),
        typeid(AnimationNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeBlendSpace1D",
        typeid(AnimationNodeBlendSpace1D).hash_code(),
        typeid(AnimationRootNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeBlendSpace2D",
        typeid(AnimationNodeBlendSpace2D).hash_code(),
        typeid(AnimationRootNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeBlendTree",
        typeid(AnimationNodeBlendTree).hash_code(),
        typeid(AnimationRootNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeOneShot",
        typeid(AnimationNodeOneShot).hash_code(),
        typeid(AnimationNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeOutput",
        typeid(AnimationNodeOutput).hash_code(),
        typeid(AnimationNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeStateMachine",
        typeid(AnimationNodeStateMachine).hash_code(),
        typeid(AnimationRootNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeStateMachinePlayback",
        typeid(AnimationNodeStateMachinePlayback).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeStateMachineTransition",
        typeid(AnimationNodeStateMachineTransition).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeTimeScale",
        typeid(AnimationNodeTimeScale).hash_code(),
        typeid(AnimationNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeTimeSeek",
        typeid(AnimationNodeTimeSeek).hash_code(),
        typeid(AnimationNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationNodeTransition",
        typeid(AnimationNodeTransition).hash_code(),
        typeid(AnimationNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationPlayer",
        typeid(AnimationPlayer).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "AnimationRootNode",
        typeid(AnimationRootNode).hash_code(),
        typeid(AnimationNode).hash_code()
    );

    TagDB::register_global_type(
        "AnimationTrackEditPlugin",
        typeid(AnimationTrackEditPlugin).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "AnimationTree",
        typeid(AnimationTree).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "AnimationTreePlayer",
        typeid(AnimationTreePlayer).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "Area",
        typeid(Area).hash_code(),
        typeid(CollisionObject).hash_code()
    );

    TagDB::register_global_type(
        "Area2D",
        typeid(Area2D).hash_code(),
        typeid(CollisionObject2D).hash_code()
    );

    TagDB::register_global_type(
        "ArrayMesh",
        typeid(ArrayMesh).hash_code(),
        typeid(Mesh).hash_code()
    );

    TagDB::register_global_type(
        "AspectRatioContainer",
        typeid(AspectRatioContainer).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "AtlasTexture",
        typeid(AtlasTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "AudioBusLayout",
        typeid(AudioBusLayout).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffect",
        typeid(AudioEffect).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectAmplify",
        typeid(AudioEffectAmplify).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectBandLimitFilter",
        typeid(AudioEffectBandLimitFilter).hash_code(),
        typeid(AudioEffectFilter).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectBandPassFilter",
        typeid(AudioEffectBandPassFilter).hash_code(),
        typeid(AudioEffectFilter).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectCapture",
        typeid(AudioEffectCapture).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectChorus",
        typeid(AudioEffectChorus).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectCompressor",
        typeid(AudioEffectCompressor).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectDelay",
        typeid(AudioEffectDelay).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectDistortion",
        typeid(AudioEffectDistortion).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectEQ",
        typeid(AudioEffectEQ).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectEQ10",
        typeid(AudioEffectEQ10).hash_code(),
        typeid(AudioEffectEQ).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectEQ21",
        typeid(AudioEffectEQ21).hash_code(),
        typeid(AudioEffectEQ).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectEQ6",
        typeid(AudioEffectEQ6).hash_code(),
        typeid(AudioEffectEQ).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectFilter",
        typeid(AudioEffectFilter).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectHighPassFilter",
        typeid(AudioEffectHighPassFilter).hash_code(),
        typeid(AudioEffectFilter).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectHighShelfFilter",
        typeid(AudioEffectHighShelfFilter).hash_code(),
        typeid(AudioEffectFilter).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectInstance",
        typeid(AudioEffectInstance).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectLimiter",
        typeid(AudioEffectLimiter).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectLowPassFilter",
        typeid(AudioEffectLowPassFilter).hash_code(),
        typeid(AudioEffectFilter).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectLowShelfFilter",
        typeid(AudioEffectLowShelfFilter).hash_code(),
        typeid(AudioEffectFilter).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectNotchFilter",
        typeid(AudioEffectNotchFilter).hash_code(),
        typeid(AudioEffectFilter).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectPanner",
        typeid(AudioEffectPanner).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectPhaser",
        typeid(AudioEffectPhaser).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectPitchShift",
        typeid(AudioEffectPitchShift).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectRecord",
        typeid(AudioEffectRecord).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectReverb",
        typeid(AudioEffectReverb).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectSpectrumAnalyzer",
        typeid(AudioEffectSpectrumAnalyzer).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectSpectrumAnalyzerInstance",
        typeid(AudioEffectSpectrumAnalyzerInstance).hash_code(),
        typeid(AudioEffectInstance).hash_code()
    );

    TagDB::register_global_type(
        "AudioEffectStereoEnhance",
        typeid(AudioEffectStereoEnhance).hash_code(),
        typeid(AudioEffect).hash_code()
    );

    TagDB::register_global_type(
        "AudioServer",
        typeid(AudioServer).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "AudioStream",
        typeid(AudioStream).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamGenerator",
        typeid(AudioStreamGenerator).hash_code(),
        typeid(AudioStream).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamGeneratorPlayback",
        typeid(AudioStreamGeneratorPlayback).hash_code(),
        typeid(AudioStreamPlaybackResampled).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamMP3",
        typeid(AudioStreamMP3).hash_code(),
        typeid(AudioStream).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamMicrophone",
        typeid(AudioStreamMicrophone).hash_code(),
        typeid(AudioStream).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamOGGVorbis",
        typeid(AudioStreamOGGVorbis).hash_code(),
        typeid(AudioStream).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamPlayback",
        typeid(AudioStreamPlayback).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamPlaybackResampled",
        typeid(AudioStreamPlaybackResampled).hash_code(),
        typeid(AudioStreamPlayback).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamPlayer",
        typeid(AudioStreamPlayer).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamPlayer2D",
        typeid(AudioStreamPlayer2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamPlayer3D",
        typeid(AudioStreamPlayer3D).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamRandomPitch",
        typeid(AudioStreamRandomPitch).hash_code(),
        typeid(AudioStream).hash_code()
    );

    TagDB::register_global_type(
        "AudioStreamSample",
        typeid(AudioStreamSample).hash_code(),
        typeid(AudioStream).hash_code()
    );

    TagDB::register_global_type(
        "BackBufferCopy",
        typeid(BackBufferCopy).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "BakedLightmap",
        typeid(BakedLightmap).hash_code(),
        typeid(VisualInstance).hash_code()
    );

    TagDB::register_global_type(
        "BakedLightmapData",
        typeid(BakedLightmapData).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "BaseButton",
        typeid(BaseButton).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "BitMap",
        typeid(BitMap).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "BitmapFont",
        typeid(BitmapFont).hash_code(),
        typeid(Font).hash_code()
    );

    TagDB::register_global_type(
        "Bone2D",
        typeid(Bone2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "BoneAttachment",
        typeid(BoneAttachment).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "BoxContainer",
        typeid(BoxContainer).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "BoxShape",
        typeid(BoxShape).hash_code(),
        typeid(Shape).hash_code()
    );

    TagDB::register_global_type(
        "BulletPhysicsDirectBodyState",
        typeid(BulletPhysicsDirectBodyState).hash_code(),
        typeid(PhysicsDirectBodyState).hash_code()
    );

    TagDB::register_global_type(
        "BulletPhysicsServer",
        typeid(BulletPhysicsServer).hash_code(),
        typeid(PhysicsServer).hash_code()
    );

    TagDB::register_global_type(
        "Button",
        typeid(Button).hash_code(),
        typeid(BaseButton).hash_code()
    );

    TagDB::register_global_type(
        "ButtonGroup",
        typeid(ButtonGroup).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "CPUParticles",
        typeid(CPUParticles).hash_code(),
        typeid(GeometryInstance).hash_code()
    );

    TagDB::register_global_type(
        "CPUParticles2D",
        typeid(CPUParticles2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "CSGBox",
        typeid(CSGBox).hash_code(),
        typeid(CSGPrimitive).hash_code()
    );

    TagDB::register_global_type(
        "CSGCombiner",
        typeid(CSGCombiner).hash_code(),
        typeid(CSGShape).hash_code()
    );

    TagDB::register_global_type(
        "CSGCylinder",
        typeid(CSGCylinder).hash_code(),
        typeid(CSGPrimitive).hash_code()
    );

    TagDB::register_global_type(
        "CSGMesh",
        typeid(CSGMesh).hash_code(),
        typeid(CSGPrimitive).hash_code()
    );

    TagDB::register_global_type(
        "CSGPolygon",
        typeid(CSGPolygon).hash_code(),
        typeid(CSGPrimitive).hash_code()
    );

    TagDB::register_global_type(
        "CSGPrimitive",
        typeid(CSGPrimitive).hash_code(),
        typeid(CSGShape).hash_code()
    );

    TagDB::register_global_type(
        "CSGShape",
        typeid(CSGShape).hash_code(),
        typeid(GeometryInstance).hash_code()
    );

    TagDB::register_global_type(
        "CSGSphere",
        typeid(CSGSphere).hash_code(),
        typeid(CSGPrimitive).hash_code()
    );

    TagDB::register_global_type(
        "CSGTorus",
        typeid(CSGTorus).hash_code(),
        typeid(CSGPrimitive).hash_code()
    );

    TagDB::register_global_type(
        "Camera",
        typeid(Camera).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "Camera2D",
        typeid(Camera2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "CameraFeed",
        typeid(CameraFeed).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "CameraServer",
        typeid(CameraServer).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "CameraTexture",
        typeid(CameraTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "CanvasItem",
        typeid(CanvasItem).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "CanvasItemMaterial",
        typeid(CanvasItemMaterial).hash_code(),
        typeid(Material).hash_code()
    );

    TagDB::register_global_type(
        "CanvasLayer",
        typeid(CanvasLayer).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "CanvasModulate",
        typeid(CanvasModulate).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "CapsuleMesh",
        typeid(CapsuleMesh).hash_code(),
        typeid(PrimitiveMesh).hash_code()
    );

    TagDB::register_global_type(
        "CapsuleShape",
        typeid(CapsuleShape).hash_code(),
        typeid(Shape).hash_code()
    );

    TagDB::register_global_type(
        "CapsuleShape2D",
        typeid(CapsuleShape2D).hash_code(),
        typeid(Shape2D).hash_code()
    );

    TagDB::register_global_type(
        "CenterContainer",
        typeid(CenterContainer).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "CharFXTransform",
        typeid(CharFXTransform).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "CheckBox",
        typeid(CheckBox).hash_code(),
        typeid(Button).hash_code()
    );

    TagDB::register_global_type(
        "CheckButton",
        typeid(CheckButton).hash_code(),
        typeid(Button).hash_code()
    );

    TagDB::register_global_type(
        "CircleShape2D",
        typeid(CircleShape2D).hash_code(),
        typeid(Shape2D).hash_code()
    );

    TagDB::register_global_type(
        "ClassDB",
        typeid(ClassDB).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "ClippedCamera",
        typeid(ClippedCamera).hash_code(),
        typeid(Camera).hash_code()
    );

    TagDB::register_global_type(
        "CollisionObject",
        typeid(CollisionObject).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "CollisionObject2D",
        typeid(CollisionObject2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "CollisionPolygon",
        typeid(CollisionPolygon).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "CollisionPolygon2D",
        typeid(CollisionPolygon2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "CollisionShape",
        typeid(CollisionShape).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "CollisionShape2D",
        typeid(CollisionShape2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "ColorPicker",
        typeid(ColorPicker).hash_code(),
        typeid(BoxContainer).hash_code()
    );

    TagDB::register_global_type(
        "ColorPickerButton",
        typeid(ColorPickerButton).hash_code(),
        typeid(Button).hash_code()
    );

    TagDB::register_global_type(
        "ColorRect",
        typeid(ColorRect).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "ConcavePolygonShape",
        typeid(ConcavePolygonShape).hash_code(),
        typeid(Shape).hash_code()
    );

    TagDB::register_global_type(
        "ConcavePolygonShape2D",
        typeid(ConcavePolygonShape2D).hash_code(),
        typeid(Shape2D).hash_code()
    );

    TagDB::register_global_type(
        "ConeTwistJoint",
        typeid(ConeTwistJoint).hash_code(),
        typeid(Joint).hash_code()
    );

    TagDB::register_global_type(
        "ConfigFile",
        typeid(ConfigFile).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "ConfirmationDialog",
        typeid(ConfirmationDialog).hash_code(),
        typeid(AcceptDialog).hash_code()
    );

    TagDB::register_global_type(
        "Container",
        typeid(Container).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "Control",
        typeid(Control).hash_code(),
        typeid(CanvasItem).hash_code()
    );

    TagDB::register_global_type(
        "ConvexPolygonShape",
        typeid(ConvexPolygonShape).hash_code(),
        typeid(Shape).hash_code()
    );

    TagDB::register_global_type(
        "ConvexPolygonShape2D",
        typeid(ConvexPolygonShape2D).hash_code(),
        typeid(Shape2D).hash_code()
    );

    TagDB::register_global_type(
        "Crypto",
        typeid(Crypto).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "CryptoKey",
        typeid(CryptoKey).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "CubeMap",
        typeid(CubeMap).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "CubeMesh",
        typeid(CubeMesh).hash_code(),
        typeid(PrimitiveMesh).hash_code()
    );

    TagDB::register_global_type(
        "CullInstance",
        typeid(CullInstance).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "Curve",
        typeid(Curve).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Curve2D",
        typeid(Curve2D).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Curve3D",
        typeid(Curve3D).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "CurveTexture",
        typeid(CurveTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "CylinderMesh",
        typeid(CylinderMesh).hash_code(),
        typeid(PrimitiveMesh).hash_code()
    );

    TagDB::register_global_type(
        "CylinderShape",
        typeid(CylinderShape).hash_code(),
        typeid(Shape).hash_code()
    );

    TagDB::register_global_type(
        "DTLSServer",
        typeid(DTLSServer).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "DampedSpringJoint2D",
        typeid(DampedSpringJoint2D).hash_code(),
        typeid(Joint2D).hash_code()
    );

    TagDB::register_global_type(
        "DefaultIP",
        typeid(DefaultIP).hash_code(),
        typeid(IP).hash_code()
    );

    TagDB::register_global_type(
        "DirectionalLight",
        typeid(DirectionalLight).hash_code(),
        typeid(Light).hash_code()
    );

    TagDB::register_global_type(
        "Directory",
        typeid(Directory).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "DynamicFont",
        typeid(DynamicFont).hash_code(),
        typeid(Font).hash_code()
    );

    TagDB::register_global_type(
        "DynamicFontData",
        typeid(DynamicFontData).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "EditorExportPlugin",
        typeid(EditorExportPlugin).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "EditorFeatureProfile",
        typeid(EditorFeatureProfile).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "EditorFileDialog",
        typeid(EditorFileDialog).hash_code(),
        typeid(ConfirmationDialog).hash_code()
    );

    TagDB::register_global_type(
        "EditorFileSystem",
        typeid(EditorFileSystem).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "EditorFileSystemDirectory",
        typeid(EditorFileSystemDirectory).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "EditorImportPlugin",
        typeid(EditorImportPlugin).hash_code(),
        typeid(ResourceImporter).hash_code()
    );

    TagDB::register_global_type(
        "EditorInspector",
        typeid(EditorInspector).hash_code(),
        typeid(ScrollContainer).hash_code()
    );

    TagDB::register_global_type(
        "EditorInspectorPlugin",
        typeid(EditorInspectorPlugin).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "EditorInterface",
        typeid(EditorInterface).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "EditorNavigationMeshGenerator",
        typeid(EditorNavigationMeshGenerator).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "EditorPlugin",
        typeid(EditorPlugin).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "EditorProperty",
        typeid(EditorProperty).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "EditorResourceConversionPlugin",
        typeid(EditorResourceConversionPlugin).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "EditorResourcePicker",
        typeid(EditorResourcePicker).hash_code(),
        typeid(HBoxContainer).hash_code()
    );

    TagDB::register_global_type(
        "EditorResourcePreview",
        typeid(EditorResourcePreview).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "EditorResourcePreviewGenerator",
        typeid(EditorResourcePreviewGenerator).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "EditorSceneImporter",
        typeid(EditorSceneImporter).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "EditorSceneImporterFBX",
        typeid(EditorSceneImporterFBX).hash_code(),
        typeid(EditorSceneImporter).hash_code()
    );

    TagDB::register_global_type(
        "EditorSceneImporterGLTF",
        typeid(EditorSceneImporterGLTF).hash_code(),
        typeid(EditorSceneImporter).hash_code()
    );

    TagDB::register_global_type(
        "EditorScenePostImport",
        typeid(EditorScenePostImport).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "EditorScript",
        typeid(EditorScript).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "EditorScriptPicker",
        typeid(EditorScriptPicker).hash_code(),
        typeid(EditorResourcePicker).hash_code()
    );

    TagDB::register_global_type(
        "EditorSelection",
        typeid(EditorSelection).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "EditorSettings",
        typeid(EditorSettings).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "EditorSpatialGizmo",
        typeid(EditorSpatialGizmo).hash_code(),
        typeid(SpatialGizmo).hash_code()
    );

    TagDB::register_global_type(
        "EditorSpatialGizmoPlugin",
        typeid(EditorSpatialGizmoPlugin).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "EditorSpinSlider",
        typeid(EditorSpinSlider).hash_code(),
        typeid(Range).hash_code()
    );

    TagDB::register_global_type(
        "EditorVCSInterface",
        typeid(EditorVCSInterface).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "EncodedObjectAsID",
        typeid(EncodedObjectAsID).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "Engine",
        typeid(Engine).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "Environment",
        typeid(Environment).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Expression",
        typeid(Expression).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "ExternalTexture",
        typeid(ExternalTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "File",
        typeid(File).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "FileDialog",
        typeid(FileDialog).hash_code(),
        typeid(ConfirmationDialog).hash_code()
    );

    TagDB::register_global_type(
        "FileSystemDock",
        typeid(FileSystemDock).hash_code(),
        typeid(VBoxContainer).hash_code()
    );

    TagDB::register_global_type(
        "Font",
        typeid(Font).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "FuncRef",
        typeid(FuncRef).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "GDNative",
        typeid(GDNative).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "GDNativeLibrary",
        typeid(GDNativeLibrary).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GDScript",
        typeid(GDScript).hash_code(),
        typeid(Script).hash_code()
    );

    TagDB::register_global_type(
        "GDScriptFunctionState",
        typeid(GDScriptFunctionState).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "GIProbe",
        typeid(GIProbe).hash_code(),
        typeid(VisualInstance).hash_code()
    );

    TagDB::register_global_type(
        "GIProbeData",
        typeid(GIProbeData).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFAccessor",
        typeid(GLTFAccessor).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFAnimation",
        typeid(GLTFAnimation).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFBufferView",
        typeid(GLTFBufferView).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFCamera",
        typeid(GLTFCamera).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFDocument",
        typeid(GLTFDocument).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFLight",
        typeid(GLTFLight).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFMesh",
        typeid(GLTFMesh).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFNode",
        typeid(GLTFNode).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFSkeleton",
        typeid(GLTFSkeleton).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFSkin",
        typeid(GLTFSkin).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFSpecGloss",
        typeid(GLTFSpecGloss).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFState",
        typeid(GLTFState).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GLTFTexture",
        typeid(GLTFTexture).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Generic6DOFJoint",
        typeid(Generic6DOFJoint).hash_code(),
        typeid(Joint).hash_code()
    );

    TagDB::register_global_type(
        "Geometry",
        typeid(Geometry).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "GeometryInstance",
        typeid(GeometryInstance).hash_code(),
        typeid(VisualInstance).hash_code()
    );

    TagDB::register_global_type(
        "GlobalConstants",
        typeid(GlobalConstants).hash_code(),
        0
    );

    TagDB::register_global_type(
        "Gradient",
        typeid(Gradient).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "GradientTexture",
        typeid(GradientTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "GraphEdit",
        typeid(GraphEdit).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "GraphNode",
        typeid(GraphNode).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "GridContainer",
        typeid(GridContainer).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "GridMap",
        typeid(GridMap).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "GrooveJoint2D",
        typeid(GrooveJoint2D).hash_code(),
        typeid(Joint2D).hash_code()
    );

    TagDB::register_global_type(
        "HBoxContainer",
        typeid(HBoxContainer).hash_code(),
        typeid(BoxContainer).hash_code()
    );

    TagDB::register_global_type(
        "HMACContext",
        typeid(HMACContext).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "HScrollBar",
        typeid(HScrollBar).hash_code(),
        typeid(ScrollBar).hash_code()
    );

    TagDB::register_global_type(
        "HSeparator",
        typeid(HSeparator).hash_code(),
        typeid(Separator).hash_code()
    );

    TagDB::register_global_type(
        "HSlider",
        typeid(HSlider).hash_code(),
        typeid(Slider).hash_code()
    );

    TagDB::register_global_type(
        "HSplitContainer",
        typeid(HSplitContainer).hash_code(),
        typeid(SplitContainer).hash_code()
    );

    TagDB::register_global_type(
        "HTTPClient",
        typeid(HTTPClient).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "HTTPRequest",
        typeid(HTTPRequest).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "HashingContext",
        typeid(HashingContext).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "HeightMapShape",
        typeid(HeightMapShape).hash_code(),
        typeid(Shape).hash_code()
    );

    TagDB::register_global_type(
        "HingeJoint",
        typeid(HingeJoint).hash_code(),
        typeid(Joint).hash_code()
    );

    TagDB::register_global_type(
        "IP",
        typeid(IP).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "Image",
        typeid(Image).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "ImageTexture",
        typeid(ImageTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "ImmediateGeometry",
        typeid(ImmediateGeometry).hash_code(),
        typeid(GeometryInstance).hash_code()
    );

    TagDB::register_global_type(
        "Input",
        typeid(Input).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "InputDefault",
        typeid(InputDefault).hash_code(),
        typeid(Input).hash_code()
    );

    TagDB::register_global_type(
        "InputEvent",
        typeid(InputEvent).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "InputEventAction",
        typeid(InputEventAction).hash_code(),
        typeid(InputEvent).hash_code()
    );

    TagDB::register_global_type(
        "InputEventGesture",
        typeid(InputEventGesture).hash_code(),
        typeid(InputEventWithModifiers).hash_code()
    );

    TagDB::register_global_type(
        "InputEventJoypadButton",
        typeid(InputEventJoypadButton).hash_code(),
        typeid(InputEvent).hash_code()
    );

    TagDB::register_global_type(
        "InputEventJoypadMotion",
        typeid(InputEventJoypadMotion).hash_code(),
        typeid(InputEvent).hash_code()
    );

    TagDB::register_global_type(
        "InputEventKey",
        typeid(InputEventKey).hash_code(),
        typeid(InputEventWithModifiers).hash_code()
    );

    TagDB::register_global_type(
        "InputEventMIDI",
        typeid(InputEventMIDI).hash_code(),
        typeid(InputEvent).hash_code()
    );

    TagDB::register_global_type(
        "InputEventMagnifyGesture",
        typeid(InputEventMagnifyGesture).hash_code(),
        typeid(InputEventGesture).hash_code()
    );

    TagDB::register_global_type(
        "InputEventMouse",
        typeid(InputEventMouse).hash_code(),
        typeid(InputEventWithModifiers).hash_code()
    );

    TagDB::register_global_type(
        "InputEventMouseButton",
        typeid(InputEventMouseButton).hash_code(),
        typeid(InputEventMouse).hash_code()
    );

    TagDB::register_global_type(
        "InputEventMouseMotion",
        typeid(InputEventMouseMotion).hash_code(),
        typeid(InputEventMouse).hash_code()
    );

    TagDB::register_global_type(
        "InputEventPanGesture",
        typeid(InputEventPanGesture).hash_code(),
        typeid(InputEventGesture).hash_code()
    );

    TagDB::register_global_type(
        "InputEventScreenDrag",
        typeid(InputEventScreenDrag).hash_code(),
        typeid(InputEvent).hash_code()
    );

    TagDB::register_global_type(
        "InputEventScreenTouch",
        typeid(InputEventScreenTouch).hash_code(),
        typeid(InputEvent).hash_code()
    );

    TagDB::register_global_type(
        "InputEventWithModifiers",
        typeid(InputEventWithModifiers).hash_code(),
        typeid(InputEvent).hash_code()
    );

    TagDB::register_global_type(
        "InputMap",
        typeid(InputMap).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "InstancePlaceholder",
        typeid(InstancePlaceholder).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "InterpolatedCamera",
        typeid(InterpolatedCamera).hash_code(),
        typeid(Camera).hash_code()
    );

    TagDB::register_global_type(
        "ItemList",
        typeid(ItemList).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "JNISingleton",
        typeid(JNISingleton).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "JSON",
        typeid(JSON).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "JSONParseResult",
        typeid(JSONParseResult).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "JSONRPC",
        typeid(JSONRPC).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "JavaClass",
        typeid(JavaClass).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "JavaClassWrapper",
        typeid(JavaClassWrapper).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "JavaScript",
        typeid(JavaScript).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "JavaScriptObject",
        typeid(JavaScriptObject).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "Joint",
        typeid(Joint).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "Joint2D",
        typeid(Joint2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "KinematicBody",
        typeid(KinematicBody).hash_code(),
        typeid(PhysicsBody).hash_code()
    );

    TagDB::register_global_type(
        "KinematicBody2D",
        typeid(KinematicBody2D).hash_code(),
        typeid(PhysicsBody2D).hash_code()
    );

    TagDB::register_global_type(
        "KinematicCollision",
        typeid(KinematicCollision).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "KinematicCollision2D",
        typeid(KinematicCollision2D).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "Label",
        typeid(Label).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "LargeTexture",
        typeid(LargeTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "Light",
        typeid(Light).hash_code(),
        typeid(VisualInstance).hash_code()
    );

    TagDB::register_global_type(
        "Light2D",
        typeid(Light2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "LightOccluder2D",
        typeid(LightOccluder2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "Line2D",
        typeid(Line2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "LineEdit",
        typeid(LineEdit).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "LineShape2D",
        typeid(LineShape2D).hash_code(),
        typeid(Shape2D).hash_code()
    );

    TagDB::register_global_type(
        "LinkButton",
        typeid(LinkButton).hash_code(),
        typeid(BaseButton).hash_code()
    );

    TagDB::register_global_type(
        "Listener",
        typeid(Listener).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "Listener2D",
        typeid(Listener2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "MainLoop",
        typeid(MainLoop).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "MarginContainer",
        typeid(MarginContainer).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "Marshalls",
        typeid(Marshalls).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "Material",
        typeid(Material).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "MenuButton",
        typeid(MenuButton).hash_code(),
        typeid(Button).hash_code()
    );

    TagDB::register_global_type(
        "Mesh",
        typeid(Mesh).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "MeshDataTool",
        typeid(MeshDataTool).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "MeshInstance",
        typeid(MeshInstance).hash_code(),
        typeid(GeometryInstance).hash_code()
    );

    TagDB::register_global_type(
        "MeshInstance2D",
        typeid(MeshInstance2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "MeshLibrary",
        typeid(MeshLibrary).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "MeshTexture",
        typeid(MeshTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "MobileVRInterface",
        typeid(MobileVRInterface).hash_code(),
        typeid(ARVRInterface).hash_code()
    );

    TagDB::register_global_type(
        "MultiMesh",
        typeid(MultiMesh).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "MultiMeshInstance",
        typeid(MultiMeshInstance).hash_code(),
        typeid(GeometryInstance).hash_code()
    );

    TagDB::register_global_type(
        "MultiMeshInstance2D",
        typeid(MultiMeshInstance2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "MultiplayerAPI",
        typeid(MultiplayerAPI).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "MultiplayerPeerGDNative",
        typeid(MultiplayerPeerGDNative).hash_code(),
        typeid(NetworkedMultiplayerPeer).hash_code()
    );

    TagDB::register_global_type(
        "Mutex",
        typeid(Mutex).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "NativeScript",
        typeid(NativeScript).hash_code(),
        typeid(Script).hash_code()
    );

    TagDB::register_global_type(
        "Navigation",
        typeid(Navigation).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "Navigation2D",
        typeid(Navigation2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "NavigationMesh",
        typeid(NavigationMesh).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "NavigationMeshInstance",
        typeid(NavigationMeshInstance).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "NavigationPolygon",
        typeid(NavigationPolygon).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "NavigationPolygonInstance",
        typeid(NavigationPolygonInstance).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "NetworkedMultiplayerENet",
        typeid(NetworkedMultiplayerENet).hash_code(),
        typeid(NetworkedMultiplayerPeer).hash_code()
    );

    TagDB::register_global_type(
        "NetworkedMultiplayerPeer",
        typeid(NetworkedMultiplayerPeer).hash_code(),
        typeid(PacketPeer).hash_code()
    );

    TagDB::register_global_type(
        "NinePatchRect",
        typeid(NinePatchRect).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "Node",
        typeid(Node).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "Node2D",
        typeid(Node2D).hash_code(),
        typeid(CanvasItem).hash_code()
    );

    TagDB::register_global_type(
        "NoiseTexture",
        typeid(NoiseTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "OS",
        typeid(OS).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "Object",
        typeid(Object).hash_code(),
        0
    );

    TagDB::register_global_type(
        "Occluder",
        typeid(Occluder).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "OccluderPolygon2D",
        typeid(OccluderPolygon2D).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "OccluderShape",
        typeid(OccluderShape).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "OccluderShapeSphere",
        typeid(OccluderShapeSphere).hash_code(),
        typeid(OccluderShape).hash_code()
    );

    TagDB::register_global_type(
        "OmniLight",
        typeid(OmniLight).hash_code(),
        typeid(Light).hash_code()
    );

    TagDB::register_global_type(
        "OpenSimplexNoise",
        typeid(OpenSimplexNoise).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "OptionButton",
        typeid(OptionButton).hash_code(),
        typeid(Button).hash_code()
    );

    TagDB::register_global_type(
        "PCKPacker",
        typeid(PCKPacker).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "PHashTranslation",
        typeid(PHashTranslation).hash_code(),
        typeid(Translation).hash_code()
    );

    TagDB::register_global_type(
        "PackedDataContainer",
        typeid(PackedDataContainer).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "PackedDataContainerRef",
        typeid(PackedDataContainerRef).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "PackedScene",
        typeid(PackedScene).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "PackedSceneGLTF",
        typeid(PackedSceneGLTF).hash_code(),
        typeid(PackedScene).hash_code()
    );

    TagDB::register_global_type(
        "PacketPeer",
        typeid(PacketPeer).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "PacketPeerDTLS",
        typeid(PacketPeerDTLS).hash_code(),
        typeid(PacketPeer).hash_code()
    );

    TagDB::register_global_type(
        "PacketPeerGDNative",
        typeid(PacketPeerGDNative).hash_code(),
        typeid(PacketPeer).hash_code()
    );

    TagDB::register_global_type(
        "PacketPeerStream",
        typeid(PacketPeerStream).hash_code(),
        typeid(PacketPeer).hash_code()
    );

    TagDB::register_global_type(
        "PacketPeerUDP",
        typeid(PacketPeerUDP).hash_code(),
        typeid(PacketPeer).hash_code()
    );

    TagDB::register_global_type(
        "Panel",
        typeid(Panel).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "PanelContainer",
        typeid(PanelContainer).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "PanoramaSky",
        typeid(PanoramaSky).hash_code(),
        typeid(Sky).hash_code()
    );

    TagDB::register_global_type(
        "ParallaxBackground",
        typeid(ParallaxBackground).hash_code(),
        typeid(CanvasLayer).hash_code()
    );

    TagDB::register_global_type(
        "ParallaxLayer",
        typeid(ParallaxLayer).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "Particles",
        typeid(Particles).hash_code(),
        typeid(GeometryInstance).hash_code()
    );

    TagDB::register_global_type(
        "Particles2D",
        typeid(Particles2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "ParticlesMaterial",
        typeid(ParticlesMaterial).hash_code(),
        typeid(Material).hash_code()
    );

    TagDB::register_global_type(
        "Path",
        typeid(Path).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "Path2D",
        typeid(Path2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "PathFollow",
        typeid(PathFollow).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "PathFollow2D",
        typeid(PathFollow2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "Performance",
        typeid(Performance).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "PhysicalBone",
        typeid(PhysicalBone).hash_code(),
        typeid(PhysicsBody).hash_code()
    );

    TagDB::register_global_type(
        "Physics2DDirectBodyState",
        typeid(Physics2DDirectBodyState).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "Physics2DDirectBodyStateSW",
        typeid(Physics2DDirectBodyStateSW).hash_code(),
        typeid(Physics2DDirectBodyState).hash_code()
    );

    TagDB::register_global_type(
        "Physics2DDirectSpaceState",
        typeid(Physics2DDirectSpaceState).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "Physics2DServer",
        typeid(Physics2DServer).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "Physics2DServerSW",
        typeid(Physics2DServerSW).hash_code(),
        typeid(Physics2DServer).hash_code()
    );

    TagDB::register_global_type(
        "Physics2DShapeQueryParameters",
        typeid(Physics2DShapeQueryParameters).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "Physics2DTestMotionResult",
        typeid(Physics2DTestMotionResult).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "PhysicsBody",
        typeid(PhysicsBody).hash_code(),
        typeid(CollisionObject).hash_code()
    );

    TagDB::register_global_type(
        "PhysicsBody2D",
        typeid(PhysicsBody2D).hash_code(),
        typeid(CollisionObject2D).hash_code()
    );

    TagDB::register_global_type(
        "PhysicsDirectBodyState",
        typeid(PhysicsDirectBodyState).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "PhysicsDirectSpaceState",
        typeid(PhysicsDirectSpaceState).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "PhysicsMaterial",
        typeid(PhysicsMaterial).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "PhysicsServer",
        typeid(PhysicsServer).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "PhysicsShapeQueryParameters",
        typeid(PhysicsShapeQueryParameters).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "PhysicsTestMotionResult",
        typeid(PhysicsTestMotionResult).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "PinJoint",
        typeid(PinJoint).hash_code(),
        typeid(Joint).hash_code()
    );

    TagDB::register_global_type(
        "PinJoint2D",
        typeid(PinJoint2D).hash_code(),
        typeid(Joint2D).hash_code()
    );

    TagDB::register_global_type(
        "PlaneMesh",
        typeid(PlaneMesh).hash_code(),
        typeid(PrimitiveMesh).hash_code()
    );

    TagDB::register_global_type(
        "PlaneShape",
        typeid(PlaneShape).hash_code(),
        typeid(Shape).hash_code()
    );

    TagDB::register_global_type(
        "PluginScript",
        typeid(PluginScript).hash_code(),
        typeid(Script).hash_code()
    );

    TagDB::register_global_type(
        "PointMesh",
        typeid(PointMesh).hash_code(),
        typeid(PrimitiveMesh).hash_code()
    );

    TagDB::register_global_type(
        "Polygon2D",
        typeid(Polygon2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "PolygonPathFinder",
        typeid(PolygonPathFinder).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Popup",
        typeid(Popup).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "PopupDialog",
        typeid(PopupDialog).hash_code(),
        typeid(Popup).hash_code()
    );

    TagDB::register_global_type(
        "PopupMenu",
        typeid(PopupMenu).hash_code(),
        typeid(Popup).hash_code()
    );

    TagDB::register_global_type(
        "PopupPanel",
        typeid(PopupPanel).hash_code(),
        typeid(Popup).hash_code()
    );

    TagDB::register_global_type(
        "Portal",
        typeid(Portal).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "Position2D",
        typeid(Position2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "Position3D",
        typeid(Position3D).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "PrimitiveMesh",
        typeid(PrimitiveMesh).hash_code(),
        typeid(Mesh).hash_code()
    );

    TagDB::register_global_type(
        "PrismMesh",
        typeid(PrismMesh).hash_code(),
        typeid(PrimitiveMesh).hash_code()
    );

    TagDB::register_global_type(
        "ProceduralSky",
        typeid(ProceduralSky).hash_code(),
        typeid(Sky).hash_code()
    );

    TagDB::register_global_type(
        "ProgressBar",
        typeid(ProgressBar).hash_code(),
        typeid(Range).hash_code()
    );

    TagDB::register_global_type(
        "ProjectSettings",
        typeid(ProjectSettings).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "ProximityGroup",
        typeid(ProximityGroup).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "ProxyTexture",
        typeid(ProxyTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "QuadMesh",
        typeid(QuadMesh).hash_code(),
        typeid(PrimitiveMesh).hash_code()
    );

    TagDB::register_global_type(
        "RandomNumberGenerator",
        typeid(RandomNumberGenerator).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "Range",
        typeid(Range).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "RayCast",
        typeid(RayCast).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "RayCast2D",
        typeid(RayCast2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "RayShape",
        typeid(RayShape).hash_code(),
        typeid(Shape).hash_code()
    );

    TagDB::register_global_type(
        "RayShape2D",
        typeid(RayShape2D).hash_code(),
        typeid(Shape2D).hash_code()
    );

    TagDB::register_global_type(
        "RectangleShape2D",
        typeid(RectangleShape2D).hash_code(),
        typeid(Shape2D).hash_code()
    );

    TagDB::register_global_type(
        "Reference",
        typeid(Reference).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "ReferenceRect",
        typeid(ReferenceRect).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "ReflectionProbe",
        typeid(ReflectionProbe).hash_code(),
        typeid(VisualInstance).hash_code()
    );

    TagDB::register_global_type(
        "RegEx",
        typeid(RegEx).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "RegExMatch",
        typeid(RegExMatch).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "RemoteTransform",
        typeid(RemoteTransform).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "RemoteTransform2D",
        typeid(RemoteTransform2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "Resource",
        typeid(Resource).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "ResourceFormatLoader",
        typeid(ResourceFormatLoader).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "ResourceFormatSaver",
        typeid(ResourceFormatSaver).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "ResourceImporter",
        typeid(ResourceImporter).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "ResourceInteractiveLoader",
        typeid(ResourceInteractiveLoader).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "ResourceLoader",
        typeid(ResourceLoader).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "ResourcePreloader",
        typeid(ResourcePreloader).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "ResourceSaver",
        typeid(ResourceSaver).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "RichTextEffect",
        typeid(RichTextEffect).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "RichTextLabel",
        typeid(RichTextLabel).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "RigidBody",
        typeid(RigidBody).hash_code(),
        typeid(PhysicsBody).hash_code()
    );

    TagDB::register_global_type(
        "RigidBody2D",
        typeid(RigidBody2D).hash_code(),
        typeid(PhysicsBody2D).hash_code()
    );

    TagDB::register_global_type(
        "Room",
        typeid(Room).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "RoomGroup",
        typeid(RoomGroup).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "RoomManager",
        typeid(RoomManager).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "RootMotionView",
        typeid(RootMotionView).hash_code(),
        typeid(VisualInstance).hash_code()
    );

    TagDB::register_global_type(
        "SceneState",
        typeid(SceneState).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "SceneTree",
        typeid(SceneTree).hash_code(),
        typeid(MainLoop).hash_code()
    );

    TagDB::register_global_type(
        "SceneTreeTimer",
        typeid(SceneTreeTimer).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "Script",
        typeid(Script).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "ScriptCreateDialog",
        typeid(ScriptCreateDialog).hash_code(),
        typeid(ConfirmationDialog).hash_code()
    );

    TagDB::register_global_type(
        "ScriptEditor",
        typeid(ScriptEditor).hash_code(),
        typeid(PanelContainer).hash_code()
    );

    TagDB::register_global_type(
        "ScrollBar",
        typeid(ScrollBar).hash_code(),
        typeid(Range).hash_code()
    );

    TagDB::register_global_type(
        "ScrollContainer",
        typeid(ScrollContainer).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "SegmentShape2D",
        typeid(SegmentShape2D).hash_code(),
        typeid(Shape2D).hash_code()
    );

    TagDB::register_global_type(
        "Semaphore",
        typeid(Semaphore).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "Separator",
        typeid(Separator).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "Shader",
        typeid(Shader).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "ShaderMaterial",
        typeid(ShaderMaterial).hash_code(),
        typeid(Material).hash_code()
    );

    TagDB::register_global_type(
        "Shape",
        typeid(Shape).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Shape2D",
        typeid(Shape2D).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "ShortCut",
        typeid(ShortCut).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Skeleton",
        typeid(Skeleton).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "Skeleton2D",
        typeid(Skeleton2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "SkeletonIK",
        typeid(SkeletonIK).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "Skin",
        typeid(Skin).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "SkinReference",
        typeid(SkinReference).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "Sky",
        typeid(Sky).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Slider",
        typeid(Slider).hash_code(),
        typeid(Range).hash_code()
    );

    TagDB::register_global_type(
        "SliderJoint",
        typeid(SliderJoint).hash_code(),
        typeid(Joint).hash_code()
    );

    TagDB::register_global_type(
        "SoftBody",
        typeid(SoftBody).hash_code(),
        typeid(MeshInstance).hash_code()
    );

    TagDB::register_global_type(
        "Spatial",
        typeid(Spatial).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "SpatialGizmo",
        typeid(SpatialGizmo).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "SpatialMaterial",
        typeid(SpatialMaterial).hash_code(),
        typeid(Material).hash_code()
    );

    TagDB::register_global_type(
        "SpatialVelocityTracker",
        typeid(SpatialVelocityTracker).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "SphereMesh",
        typeid(SphereMesh).hash_code(),
        typeid(PrimitiveMesh).hash_code()
    );

    TagDB::register_global_type(
        "SphereShape",
        typeid(SphereShape).hash_code(),
        typeid(Shape).hash_code()
    );

    TagDB::register_global_type(
        "SpinBox",
        typeid(SpinBox).hash_code(),
        typeid(Range).hash_code()
    );

    TagDB::register_global_type(
        "SplitContainer",
        typeid(SplitContainer).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "SpotLight",
        typeid(SpotLight).hash_code(),
        typeid(Light).hash_code()
    );

    TagDB::register_global_type(
        "SpringArm",
        typeid(SpringArm).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "Sprite",
        typeid(Sprite).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "Sprite3D",
        typeid(Sprite3D).hash_code(),
        typeid(SpriteBase3D).hash_code()
    );

    TagDB::register_global_type(
        "SpriteBase3D",
        typeid(SpriteBase3D).hash_code(),
        typeid(GeometryInstance).hash_code()
    );

    TagDB::register_global_type(
        "SpriteFrames",
        typeid(SpriteFrames).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "StaticBody",
        typeid(StaticBody).hash_code(),
        typeid(PhysicsBody).hash_code()
    );

    TagDB::register_global_type(
        "StaticBody2D",
        typeid(StaticBody2D).hash_code(),
        typeid(PhysicsBody2D).hash_code()
    );

    TagDB::register_global_type(
        "StreamPeer",
        typeid(StreamPeer).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "StreamPeerBuffer",
        typeid(StreamPeerBuffer).hash_code(),
        typeid(StreamPeer).hash_code()
    );

    TagDB::register_global_type(
        "StreamPeerGDNative",
        typeid(StreamPeerGDNative).hash_code(),
        typeid(StreamPeer).hash_code()
    );

    TagDB::register_global_type(
        "StreamPeerSSL",
        typeid(StreamPeerSSL).hash_code(),
        typeid(StreamPeer).hash_code()
    );

    TagDB::register_global_type(
        "StreamPeerTCP",
        typeid(StreamPeerTCP).hash_code(),
        typeid(StreamPeer).hash_code()
    );

    TagDB::register_global_type(
        "StreamTexture",
        typeid(StreamTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "StyleBox",
        typeid(StyleBox).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "StyleBoxEmpty",
        typeid(StyleBoxEmpty).hash_code(),
        typeid(StyleBox).hash_code()
    );

    TagDB::register_global_type(
        "StyleBoxFlat",
        typeid(StyleBoxFlat).hash_code(),
        typeid(StyleBox).hash_code()
    );

    TagDB::register_global_type(
        "StyleBoxLine",
        typeid(StyleBoxLine).hash_code(),
        typeid(StyleBox).hash_code()
    );

    TagDB::register_global_type(
        "StyleBoxTexture",
        typeid(StyleBoxTexture).hash_code(),
        typeid(StyleBox).hash_code()
    );

    TagDB::register_global_type(
        "SurfaceTool",
        typeid(SurfaceTool).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "TCP_Server",
        typeid(TCP_Server).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "TabContainer",
        typeid(TabContainer).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "Tabs",
        typeid(Tabs).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "TextEdit",
        typeid(TextEdit).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "TextFile",
        typeid(TextFile).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Texture",
        typeid(Texture).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Texture3D",
        typeid(Texture3D).hash_code(),
        typeid(TextureLayered).hash_code()
    );

    TagDB::register_global_type(
        "TextureArray",
        typeid(TextureArray).hash_code(),
        typeid(TextureLayered).hash_code()
    );

    TagDB::register_global_type(
        "TextureButton",
        typeid(TextureButton).hash_code(),
        typeid(BaseButton).hash_code()
    );

    TagDB::register_global_type(
        "TextureLayered",
        typeid(TextureLayered).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "TextureProgress",
        typeid(TextureProgress).hash_code(),
        typeid(Range).hash_code()
    );

    TagDB::register_global_type(
        "TextureRect",
        typeid(TextureRect).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "Theme",
        typeid(Theme).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Thread",
        typeid(Thread).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "TileMap",
        typeid(TileMap).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "TileSet",
        typeid(TileSet).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "Timer",
        typeid(Timer).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "ToolButton",
        typeid(ToolButton).hash_code(),
        typeid(Button).hash_code()
    );

    TagDB::register_global_type(
        "TouchScreenButton",
        typeid(TouchScreenButton).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "Translation",
        typeid(Translation).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "TranslationServer",
        typeid(TranslationServer).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "Tree",
        typeid(Tree).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "TreeItem",
        typeid(TreeItem).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "TriangleMesh",
        typeid(TriangleMesh).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "Tween",
        typeid(Tween).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "UDPServer",
        typeid(UDPServer).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "UPNP",
        typeid(UPNP).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "UPNPDevice",
        typeid(UPNPDevice).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "UndoRedo",
        typeid(UndoRedo).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "VBoxContainer",
        typeid(VBoxContainer).hash_code(),
        typeid(BoxContainer).hash_code()
    );

    TagDB::register_global_type(
        "VScrollBar",
        typeid(VScrollBar).hash_code(),
        typeid(ScrollBar).hash_code()
    );

    TagDB::register_global_type(
        "VSeparator",
        typeid(VSeparator).hash_code(),
        typeid(Separator).hash_code()
    );

    TagDB::register_global_type(
        "VSlider",
        typeid(VSlider).hash_code(),
        typeid(Slider).hash_code()
    );

    TagDB::register_global_type(
        "VSplitContainer",
        typeid(VSplitContainer).hash_code(),
        typeid(SplitContainer).hash_code()
    );

    TagDB::register_global_type(
        "VehicleBody",
        typeid(VehicleBody).hash_code(),
        typeid(RigidBody).hash_code()
    );

    TagDB::register_global_type(
        "VehicleWheel",
        typeid(VehicleWheel).hash_code(),
        typeid(Spatial).hash_code()
    );

    TagDB::register_global_type(
        "VideoPlayer",
        typeid(VideoPlayer).hash_code(),
        typeid(Control).hash_code()
    );

    TagDB::register_global_type(
        "VideoStream",
        typeid(VideoStream).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "VideoStreamGDNative",
        typeid(VideoStreamGDNative).hash_code(),
        typeid(VideoStream).hash_code()
    );

    TagDB::register_global_type(
        "VideoStreamTheora",
        typeid(VideoStreamTheora).hash_code(),
        typeid(VideoStream).hash_code()
    );

    TagDB::register_global_type(
        "Viewport",
        typeid(Viewport).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "ViewportContainer",
        typeid(ViewportContainer).hash_code(),
        typeid(Container).hash_code()
    );

    TagDB::register_global_type(
        "ViewportTexture",
        typeid(ViewportTexture).hash_code(),
        typeid(Texture).hash_code()
    );

    TagDB::register_global_type(
        "VisibilityEnabler",
        typeid(VisibilityEnabler).hash_code(),
        typeid(VisibilityNotifier).hash_code()
    );

    TagDB::register_global_type(
        "VisibilityEnabler2D",
        typeid(VisibilityEnabler2D).hash_code(),
        typeid(VisibilityNotifier2D).hash_code()
    );

    TagDB::register_global_type(
        "VisibilityNotifier",
        typeid(VisibilityNotifier).hash_code(),
        typeid(CullInstance).hash_code()
    );

    TagDB::register_global_type(
        "VisibilityNotifier2D",
        typeid(VisibilityNotifier2D).hash_code(),
        typeid(Node2D).hash_code()
    );

    TagDB::register_global_type(
        "VisualInstance",
        typeid(VisualInstance).hash_code(),
        typeid(CullInstance).hash_code()
    );

    TagDB::register_global_type(
        "VisualScript",
        typeid(VisualScript).hash_code(),
        typeid(Script).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptBasicTypeConstant",
        typeid(VisualScriptBasicTypeConstant).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptBuiltinFunc",
        typeid(VisualScriptBuiltinFunc).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptClassConstant",
        typeid(VisualScriptClassConstant).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptComment",
        typeid(VisualScriptComment).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptComposeArray",
        typeid(VisualScriptComposeArray).hash_code(),
        typeid(VisualScriptLists).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptCondition",
        typeid(VisualScriptCondition).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptConstant",
        typeid(VisualScriptConstant).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptConstructor",
        typeid(VisualScriptConstructor).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptCustomNode",
        typeid(VisualScriptCustomNode).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptDeconstruct",
        typeid(VisualScriptDeconstruct).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptEditor",
        typeid(VisualScriptEditor).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptEmitSignal",
        typeid(VisualScriptEmitSignal).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptEngineSingleton",
        typeid(VisualScriptEngineSingleton).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptExpression",
        typeid(VisualScriptExpression).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptFunction",
        typeid(VisualScriptFunction).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptFunctionCall",
        typeid(VisualScriptFunctionCall).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptFunctionState",
        typeid(VisualScriptFunctionState).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptGlobalConstant",
        typeid(VisualScriptGlobalConstant).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptIndexGet",
        typeid(VisualScriptIndexGet).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptIndexSet",
        typeid(VisualScriptIndexSet).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptInputAction",
        typeid(VisualScriptInputAction).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptIterator",
        typeid(VisualScriptIterator).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptLists",
        typeid(VisualScriptLists).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptLocalVar",
        typeid(VisualScriptLocalVar).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptLocalVarSet",
        typeid(VisualScriptLocalVarSet).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptMathConstant",
        typeid(VisualScriptMathConstant).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptNode",
        typeid(VisualScriptNode).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptOperator",
        typeid(VisualScriptOperator).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptPreload",
        typeid(VisualScriptPreload).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptPropertyGet",
        typeid(VisualScriptPropertyGet).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptPropertySet",
        typeid(VisualScriptPropertySet).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptResourcePath",
        typeid(VisualScriptResourcePath).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptReturn",
        typeid(VisualScriptReturn).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptSceneNode",
        typeid(VisualScriptSceneNode).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptSceneTree",
        typeid(VisualScriptSceneTree).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptSelect",
        typeid(VisualScriptSelect).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptSelf",
        typeid(VisualScriptSelf).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptSequence",
        typeid(VisualScriptSequence).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptSubCall",
        typeid(VisualScriptSubCall).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptSwitch",
        typeid(VisualScriptSwitch).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptTypeCast",
        typeid(VisualScriptTypeCast).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptVariableGet",
        typeid(VisualScriptVariableGet).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptVariableSet",
        typeid(VisualScriptVariableSet).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptWhile",
        typeid(VisualScriptWhile).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptYield",
        typeid(VisualScriptYield).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualScriptYieldSignal",
        typeid(VisualScriptYieldSignal).hash_code(),
        typeid(VisualScriptNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualServer",
        typeid(VisualServer).hash_code(),
        typeid(Object).hash_code()
    );

    TagDB::register_global_type(
        "VisualShader",
        typeid(VisualShader).hash_code(),
        typeid(Shader).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNode",
        typeid(VisualShaderNode).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeBooleanConstant",
        typeid(VisualShaderNodeBooleanConstant).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeBooleanUniform",
        typeid(VisualShaderNodeBooleanUniform).hash_code(),
        typeid(VisualShaderNodeUniform).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeColorConstant",
        typeid(VisualShaderNodeColorConstant).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeColorFunc",
        typeid(VisualShaderNodeColorFunc).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeColorOp",
        typeid(VisualShaderNodeColorOp).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeColorUniform",
        typeid(VisualShaderNodeColorUniform).hash_code(),
        typeid(VisualShaderNodeUniform).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeCompare",
        typeid(VisualShaderNodeCompare).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeCubeMap",
        typeid(VisualShaderNodeCubeMap).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeCubeMapUniform",
        typeid(VisualShaderNodeCubeMapUniform).hash_code(),
        typeid(VisualShaderNodeTextureUniform).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeCustom",
        typeid(VisualShaderNodeCustom).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeDeterminant",
        typeid(VisualShaderNodeDeterminant).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeDotProduct",
        typeid(VisualShaderNodeDotProduct).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeExpression",
        typeid(VisualShaderNodeExpression).hash_code(),
        typeid(VisualShaderNodeGroupBase).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeFaceForward",
        typeid(VisualShaderNodeFaceForward).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeFresnel",
        typeid(VisualShaderNodeFresnel).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeGlobalExpression",
        typeid(VisualShaderNodeGlobalExpression).hash_code(),
        typeid(VisualShaderNodeExpression).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeGroupBase",
        typeid(VisualShaderNodeGroupBase).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeIf",
        typeid(VisualShaderNodeIf).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeInput",
        typeid(VisualShaderNodeInput).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeIs",
        typeid(VisualShaderNodeIs).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeOuterProduct",
        typeid(VisualShaderNodeOuterProduct).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeOutput",
        typeid(VisualShaderNodeOutput).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeScalarClamp",
        typeid(VisualShaderNodeScalarClamp).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeScalarConstant",
        typeid(VisualShaderNodeScalarConstant).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeScalarDerivativeFunc",
        typeid(VisualShaderNodeScalarDerivativeFunc).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeScalarFunc",
        typeid(VisualShaderNodeScalarFunc).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeScalarInterp",
        typeid(VisualShaderNodeScalarInterp).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeScalarOp",
        typeid(VisualShaderNodeScalarOp).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeScalarSmoothStep",
        typeid(VisualShaderNodeScalarSmoothStep).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeScalarSwitch",
        typeid(VisualShaderNodeScalarSwitch).hash_code(),
        typeid(VisualShaderNodeSwitch).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeScalarUniform",
        typeid(VisualShaderNodeScalarUniform).hash_code(),
        typeid(VisualShaderNodeUniform).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeSwitch",
        typeid(VisualShaderNodeSwitch).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeTexture",
        typeid(VisualShaderNodeTexture).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeTextureUniform",
        typeid(VisualShaderNodeTextureUniform).hash_code(),
        typeid(VisualShaderNodeUniform).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeTextureUniformTriplanar",
        typeid(VisualShaderNodeTextureUniformTriplanar).hash_code(),
        typeid(VisualShaderNodeTextureUniform).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeTransformCompose",
        typeid(VisualShaderNodeTransformCompose).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeTransformConstant",
        typeid(VisualShaderNodeTransformConstant).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeTransformDecompose",
        typeid(VisualShaderNodeTransformDecompose).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeTransformFunc",
        typeid(VisualShaderNodeTransformFunc).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeTransformMult",
        typeid(VisualShaderNodeTransformMult).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeTransformUniform",
        typeid(VisualShaderNodeTransformUniform).hash_code(),
        typeid(VisualShaderNodeUniform).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeTransformVecMult",
        typeid(VisualShaderNodeTransformVecMult).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeUniform",
        typeid(VisualShaderNodeUniform).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeUniformRef",
        typeid(VisualShaderNodeUniformRef).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVec3Constant",
        typeid(VisualShaderNodeVec3Constant).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVec3Uniform",
        typeid(VisualShaderNodeVec3Uniform).hash_code(),
        typeid(VisualShaderNodeUniform).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorClamp",
        typeid(VisualShaderNodeVectorClamp).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorCompose",
        typeid(VisualShaderNodeVectorCompose).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorDecompose",
        typeid(VisualShaderNodeVectorDecompose).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorDerivativeFunc",
        typeid(VisualShaderNodeVectorDerivativeFunc).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorDistance",
        typeid(VisualShaderNodeVectorDistance).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorFunc",
        typeid(VisualShaderNodeVectorFunc).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorInterp",
        typeid(VisualShaderNodeVectorInterp).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorLen",
        typeid(VisualShaderNodeVectorLen).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorOp",
        typeid(VisualShaderNodeVectorOp).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorRefract",
        typeid(VisualShaderNodeVectorRefract).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorScalarMix",
        typeid(VisualShaderNodeVectorScalarMix).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorScalarSmoothStep",
        typeid(VisualShaderNodeVectorScalarSmoothStep).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorScalarStep",
        typeid(VisualShaderNodeVectorScalarStep).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "VisualShaderNodeVectorSmoothStep",
        typeid(VisualShaderNodeVectorSmoothStep).hash_code(),
        typeid(VisualShaderNode).hash_code()
    );

    TagDB::register_global_type(
        "WeakRef",
        typeid(WeakRef).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "WebRTCDataChannel",
        typeid(WebRTCDataChannel).hash_code(),
        typeid(PacketPeer).hash_code()
    );

    TagDB::register_global_type(
        "WebRTCDataChannelGDNative",
        typeid(WebRTCDataChannelGDNative).hash_code(),
        typeid(WebRTCDataChannel).hash_code()
    );

    TagDB::register_global_type(
        "WebRTCMultiplayer",
        typeid(WebRTCMultiplayer).hash_code(),
        typeid(NetworkedMultiplayerPeer).hash_code()
    );

    TagDB::register_global_type(
        "WebRTCPeerConnection",
        typeid(WebRTCPeerConnection).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "WebRTCPeerConnectionGDNative",
        typeid(WebRTCPeerConnectionGDNative).hash_code(),
        typeid(WebRTCPeerConnection).hash_code()
    );

    TagDB::register_global_type(
        "WebSocketClient",
        typeid(WebSocketClient).hash_code(),
        typeid(WebSocketMultiplayerPeer).hash_code()
    );

    TagDB::register_global_type(
        "WebSocketMultiplayerPeer",
        typeid(WebSocketMultiplayerPeer).hash_code(),
        typeid(NetworkedMultiplayerPeer).hash_code()
    );

    TagDB::register_global_type(
        "WebSocketPeer",
        typeid(WebSocketPeer).hash_code(),
        typeid(PacketPeer).hash_code()
    );

    TagDB::register_global_type(
        "WebSocketServer",
        typeid(WebSocketServer).hash_code(),
        typeid(WebSocketMultiplayerPeer).hash_code()
    );

    TagDB::register_global_type(
        "WebXRInterface",
        typeid(WebXRInterface).hash_code(),
        typeid(ARVRInterface).hash_code()
    );

    TagDB::register_global_type(
        "WindowDialog",
        typeid(WindowDialog).hash_code(),
        typeid(Popup).hash_code()
    );

    TagDB::register_global_type(
        "World",
        typeid(World).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "World2D",
        typeid(World2D).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "WorldEnvironment",
        typeid(WorldEnvironment).hash_code(),
        typeid(Node).hash_code()
    );

    TagDB::register_global_type(
        "X509Certificate",
        typeid(X509Certificate).hash_code(),
        typeid(Resource).hash_code()
    );

    TagDB::register_global_type(
        "XMLParser",
        typeid(XMLParser).hash_code(),
        typeid(Reference).hash_code()
    );

    TagDB::register_global_type(
        "YSort",
        typeid(YSort).hash_code(),
        typeid(Node2D).hash_code()
    );
}
} // namespace Rebel
