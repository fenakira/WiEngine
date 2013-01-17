/*
 * Copyright (c) 2010 WiYun Inc.
 * Author: luma(stubma@gmail.com)
 *
 * For all entities this program is free software; you can redistribute
 * it and/or modify it under the terms of the 'WiEngine' license with
 * the additional provision that 'WiEngine' must be credited in a manner
 * that can be be observed by end users, for example, in the credits or during
 * start up. (please find WiEngine logo in sdk's logo folder)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __WiEngine_h__
#define __WiEngine_h__

/*
 * Aggregated header file for WiEngine core module
 */

// actions
#include "wyAction.h"
#include "wyAnimate.h"
#include "wyBezier.h"
#include "wyBlink.h"
#include "wyCallFunc.h"
#include "wyCameraAction.h"
#include "wyClipIn.h"
#include "wyClipOut.h"
#include "wyDelayTime.h"
#include "wyFadeIn.h"
#include "wyFadeOut.h"
#include "wyFadeTo.h"
#include "wyFiniteTimeAction.h"
#include "wyFollow.h"
#include "wyHide.h"
#include "wyHypotrochoid.h"
#include "wyInstantAction.h"
#include "wyIntervalAction.h"
#include "wyJumpBy.h"
#include "wyJumpTo.h"
#include "wyLagrange.h"
#include "wyMoveBy.h"
#include "wyMoveByAngle.h"
#include "wyMoveByPath.h"
#include "wyMoveTo.h"
#include "wyOrbitCamera.h"
#include "wyPlace.h"
#include "wyProgressBy.h"
#include "wyProgressTo.h"
#include "wyRepeat.h"
#include "wyRepeatForever.h"
#include "wyReverseTime.h"
#include "wyRotateBy.h"
#include "wyRotateTo.h"
#include "wyScaleBy.h"
#include "wyScaleTo.h"
#include "wySequence.h"
#include "wyShake.h"
#include "wyShow.h"
#include "wySkewBy.h"
#include "wySkewTo.h"
#include "wySpawn.h"
#include "wySpeed.h"
#include "wyTintBy.h"
#include "wyTintTo.h"
#include "wyToggleVisibility.h"

// afc animations
#include "wyAFCAnimation.h"
#include "wyAFCClip.h"
#include "wyAFCClipMapping.h"
#include "wyAFCFileData.h"
#include "wyAFCFrame.h"
#include "wyAFCSprite.h"
#include "wyArcticConstants.h"
#include "wyArcticFileData.h"
#include "wyArcticLoader.h"
#include "wyArcticManager.h"
#include "wyArcticSprite.h"
#include "wyAuroraConstants.h"
#include "wyAuroraFileData.h"
#include "wyAuroraLoader.h"
#include "wyAuroraManager.h"
#include "wyAuroraSprite.h"
#include "wyMWFileData.h"
#include "wyMWLoader.h"
#include "wyMWManager.h"
#include "wyMWSprite.h"
#include "wySPX3Action.h"
#include "wySPX3FileData.h"
#include "wySPX3Frame.h"
#include "wySPX3Loader.h"
#include "wySPX3Manager.h"
#include "wySPX3Sprite.h"
#include "wySPXAction.h"
#include "wySPXFileData.h"
#include "wySPXFrame.h"
#include "wySPXLoader.h"
#include "wySPXManager.h"
#include "wySPXSprite.h"

// astar
#include "wyAStar.h"
#include "wyAStarMap.h"
#include "wyAStarStep.h"
#include "wyAStarTile.h"
#include "wyHexagonAStarMap.h"
#include "wyRectAStarMap.h"

// bitmap font
#include "wyAngelCodeTXTFontLoader.h"
#include "wyAngelCodeXMLFontLoader.h"
#include "wyBitmapFont.h"
#include "wyBitmapFontLabel.h"
#include "wyHGEFontLoader.h"

// common
#include "wyArray.h"
#include "wyAutoReleasePool.h"
#include "wyHashSet.h"
#include "wyObject.h"
#include "wyLoadableObject.h"
#include "wyThread.h"

// dialog
#include "wyDialog.h"
#include "wyDialogPopupTransition.h"
#include "wyDialogTransition.h"

// ease actions
#include "wyEaseAction.h"
#include "wyEaseBackIn.h"
#include "wyEaseBackInOut.h"
#include "wyEaseBackOut.h"
#include "wyEaseBounce.h"
#include "wyEaseBounceIn.h"
#include "wyEaseBounceInOut.h"
#include "wyEaseBounceOut.h"
#include "wyEaseElastic.h"
#include "wyEaseElasticIn.h"
#include "wyEaseElasticInOut.h"
#include "wyEaseElasticOut.h"
#include "wyEaseExponentialIn.h"
#include "wyEaseExponentialInOut.h"
#include "wyEaseExponentialOut.h"
#include "wyEaseIn.h"
#include "wyEaseInOut.h"
#include "wyEaseOut.h"
#include "wyEaseRateAction.h"
#include "wyEaseSineIn.h"
#include "wyEaseSineInOut.h"
#include "wyEaseSineOut.h"

// events
#include "wyEventDispatcher.h"
#include "wyEvents.h"

// filters
#include "wyAreaColorFilter.h"
#include "wyBlurColorFilter.h"
#include "wyColorFilter.h"
#include "wyColorMatrix.h"
#include "wyColorMatrixColorFilter.h"
#include "wyCombineColorFilter.h"
#include "wyCustomColorFilter.h"
#include "wyDropShadowColorFilter.h"
#include "wyEmbossColorFilter.h"
#include "wyGlowColorFilter.h"
#include "wyLightingColorFilter.h"
#include "wyMappingColorFilter.h"

// grid
#include "wyGridController.h"

// grid actions
#include "wyBottomLineShrinkOut.h"
#include "wyBottomTilesShrinkOut.h"
#include "wyGrid3DAction.h"
#include "wyGridAction.h"
#include "wyGridFlipX.h"
#include "wyGridFlipY.h"
#include "wyJumpTiles3D.h"
#include "wyLeftBottomTilesShrinkOut.h"
#include "wyLeftLineShrinkOut.h"
#include "wyLens3D.h"
#include "wyLiquid.h"
#include "wyPageTurn3D.h"
#include "wyReuseGrid.h"
#include "wyRightLineShrinkOut.h"
#include "wyRightTopTilesShrinkOut.h"
#include "wyRipple3D.h"
#include "wyShaky3D.h"
#include "wyShakyTiles3D.h"
#include "wyShatteredTiles3D.h"
#include "wyShuffleTiles.h"
#include "wySplitCols.h"
#include "wySplitRows.h"
#include "wyStopGrid.h"
#include "wySuck.h"
#include "wyTiledGrid3DAction.h"
#include "wyTopLineShrinkOut.h"
#include "wyTopTilesShrinkOut.h"
#include "wyTurnOffTiles.h"
#include "wyTwirl.h"
#include "wyWaves.h"
#include "wyWaves3D.h"
#include "wyWavesTiles3D.h"

// material
#include "wyMaterial.h"
#include "wyMaterialParameter.h"
#include "wyMaterialTextureParameter.h"
#include "wyRenderState.h"
#include "wyTechnique.h"

// mesh
#include "wyProgress.h"
#include "wyBaseGrid.h"
#include "wyMesh.h"
#include "wyMeshRef.h"
#include "wyGrid3D.h"
#include "wyQuadList.h"
#include "wyRectangle.h"
#include "wyShape.h"
#include "wyTiledGrid3D.h"

// nodes
#include "wyActionManager.h"
#include "wyAnimation.h"
#include "wyArrayTileMapAtlas.h"
#include "wyAtlasLabel.h"
#include "wyAtlasNode.h"
#include "wyBladeRibbon.h"
#include "wyButton.h"
#include "wyColorLayer.h"
#include "wyCompoundNode.h"
#include "wyDirector.h"
#include "wyDotPageIndicator.h"
#include "wyFrame.h"
#include "wyGradientColorLayer.h"
#include "wyLabel.h"
#include "wyLayer.h"
#include "wyLineRibbon.h"
#include "wyMenu.h"
#include "wyMenuItemAtlasLabel.h"
#include "wyMenuItemLabel.h"
#include "wyMenuItemSprite.h"
#include "wyMenuItemToggle.h"
#include "wyModelNode.h"
#include "wyMotionStreak.h"
#include "wyMultiplexLayer.h"
#include "wyNinePatchSprite.h"
#include "wyNode.h"
#include "wyPageControl.h"
#include "wyPageIndicator.h"
#include "wyParallaxNode.h"
#include "wyParallaxObject.h"
#include "wyProgressTimer.h"
#include "wyRenderTexture.h"
#include "wyRibbon.h"
#include "wyScene.h"
#include "wyScheduler.h"
#include "wyScrollableLayer.h"
#include "wyScrollableLayerListener.h"
#include "wySlider.h"
#include "wySpotRibbon.h"
#include "wySprite.h"
#include "wySpriteBatchNode.h"
#include "wySpriteEx.h"
#include "wySpriteFrame.h"
#include "wyStripRibbon.h"
#include "wyTextBox.h"
#include "wyTextureNode.h"
#include "wyTGATileMapAtlas.h"
#include "wyTiledSprite.h"
#include "wyTileMapAtlas.h"
#include "wyToast.h"
#include "wyVirtualJoystick.h"

// opengl
#include "wyCamera.h"
#include "wyGLTexture2D.h"
#include "wyTexture2D.h"
#include "wyTextureManager.h"

// particle
#include "wyHGEParticleLoader.h"
#include "wyParticle.h"
#include "wyParticleLoader.h"
#include "wyParticleSystem.h"
#include "wyQuadParticleSystem.h"

// persistence
#include "wyDatabase.h"
#include "wyPrefs.h"
#include "wyResultSet.h"
#include "wyStatement.h"

// render
#include "wyFrameBuffer.h"
#include "wyRenderer.h"
#include "wyRenderManager.h"
#include "wyRenderQueue.h"
#include "wyViewport.h"

// shader
#include "wyAttribute.h"
#include "wyBuffer.h"
#include "wyShader.h"
#include "wyShaderLoader.h"
#include "wyShaderManager.h"
#include "wyShaderProgram.h"
#include "wyShaderVariable.h"
#include "wyUniform.h"

// tmx
#include "wyLayerInfo.h"
#include "wyMapInfo.h"
#include "wyTileSetInfo.h"
#include "wyTMXLayer.h"
#include "wyTMXLoader.h"
#include "wyTMXObject.h"
#include "wyTMXObjectGroup.h"
#include "wyTMXTileMap.h"

// transitions
#include "wyBottomPushInTransition.h"
#include "wyBottomSlideInTransition.h"
#include "wyBottomTilesShrinkOutTransition.h"
#include "wyClipInTransition.h"
#include "wyClipOutTransition.h"
#include "wyColorFadeTransition.h"
#include "wyCrossFadeTransition.h"
#include "wyFlipAngularTransition.h"
#include "wyFlipXTransition.h"
#include "wyFlipYTransition.h"
#include "wyJumpZoomTransition.h"
#include "wyLeftBottomTilesShrinkOutTransition.h"
#include "wyLeftPushInTransition.h"
#include "wyLeftSlideInTransition.h"
#include "wyPageTurn3DTransition.h"
#include "wyRadialCCWTransition.h"
#include "wyRadialCWTransition.h"
#include "wyRightPushInTransition.h"
#include "wyRightSlideInTransition.h"
#include "wyRightTopTilesShrinkOutTransition.h"
#include "wyRotateZoomTransition.h"
#include "wyShrinkGrowTransition.h"
#include "wySplitColsTransition.h"
#include "wySplitRowsTransition.h"
#include "wySuckTransition.h"
#include "wyTopPushInTransition.h"
#include "wyTopSlideInTransition.h"
#include "wyTopTilesShrinkOutTransition.h"
#include "wyTransitionScene.h"
#include "wyTurnOffTilesTransition.h"
#include "wyZoomFlipAngularTransition.h"
#include "wyZoomFlipXTransition.h"
#include "wyZoomFlipYTransition.h"

// types
#include "wyAffineTransform.h"
#include "wyBezierConfig.h"
#include "wyBlendFunc.h"
#include "wyColor3B.h"
#include "wyColor4B.h"
#include "wyColor4F.h"
#include "wyColorHSV.h"
#include "wyDimension.h"
#include "wyHypotrochoidConfig.h"
#include "wyLagrangeConfig.h"
#include "wyPoint.h"
#include "wyPointList.h"
#include "wyQuad2D.h"
#include "wyQuad3D.h"
#include "wyRect.h"
#include "wySize.h"
#include "wyVertex3D.h"

// utils
#include "wyAssetInputStream.h"
#include "wyAssetOutputStream.h"
#include "wyCharProvider.h"
#include "wyImagePicker.h"
#include "wyLog.h"
#include "wyMath.h"
#include "wyMD5.h"
#include "wyMemoryInputStream.h"
#include "wyMemoryOutputStream.h"
#include "wyResourceDecoder.h"
#include "wyRunnable.h"
#include "wyPerformance.h"
#include "wyScroller.h"
#include "wyTargetSelector.h"
#include "wyTGALoader.h"
#include "wyUtils.h"
#include "wyVerletRope.h"
#include "wyVerletPoint.h"
#include "wyVerletStick.h"
#include "wyZwoptex.h"
#include "wyZwoptexManager.h"

// model
#include "wyModel.h"
#include "wyPODModel.h"

#endif // __WiEngine_h__
