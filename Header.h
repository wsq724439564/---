//
//  Header.h
//  进度条练习
//
//  Created by Shouqiang Wei on 14/12/17.
//  Copyright (c) 2014年 ShouqiangWei.com. All rights reserved.
//

#ifndef ______Header_h
#define ______Header_h


#endif
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<document type="com.apple.InterfaceBuilder3.CocoaTouch.Storyboard.XIB" version="3.0" toolsVersion="6245" systemVersion="14A389" targetRuntime="iOS.CocoaTouch" propertyAccessControl="none" useAutolayout="YES" useTraitCollections="YES" initialViewController="nyi-Vr-Xky">
<dependencies>
<plugIn identifier="com.apple.InterfaceBuilder.IBCocoaTouchPlugin" version="6238"/>
</dependencies>
<scenes>
<scene sceneID="ufC-wZ-h7g">
<objects>
<viewController id="vXZ-lx-hvc" sceneMemberID="viewController">
<layoutGuides>
<viewControllerLayoutGuide type="top" id="jyV-Pf-zRb"/>
<viewControllerLayoutGuide type="bottom" id="2fi-mo-0CV"/>
</layoutGuides>
<view key="view" contentMode="scaleToFill" id="kh9-bI-dsS">
<rect key="frame" x="0.0" y="0.0" width="600" height="600"/>
<autoresizingMask key="autoresizingMask" flexibleMaxX="YES" flexibleMaxY="YES"/>
<color key="backgroundColor" white="1" alpha="1" colorSpace="custom" customColorSpace="calibratedWhite"/>
</view>
<navigationItem key="navigationItem" id="wRH-sA-IDW"/>
</viewController>
<placeholder placeholderIdentifier="IBFirstResponder" id="x5A-6p-PRh" sceneMemberID="firstResponder"/>
</objects>
<point key="canvasLocation" x="229" y="185"/>
</scene>
<!--Root View Controller-->
<scene sceneID="LOq-w2-S8V">
<objects>
<tableViewController id="6YT-U6-GbQ" customClass="MyTableViewController" sceneMemberID="viewController">
<tableView key="view" clipsSubviews="YES" contentMode="scaleToFill" alwaysBounceVertical="YES" dataMode="prototypes" style="plain" separatorStyle="default" rowHeight="44" sectionHeaderHeight="22" sectionFooterHeight="22" id="4OI-5P-Uep">
<rect key="frame" x="0.0" y="0.0" width="600" height="600"/>
<autoresizingMask key="autoresizingMask" widthSizable="YES" heightSizable="YES"/>
<color key="backgroundColor" white="1" alpha="1" colorSpace="calibratedWhite"/>
<prototypes>
<tableViewCell contentMode="scaleToFill" selectionStyle="default" accessoryType="disclosureIndicator" indentationWidth="10" id="DGn-Em-fnF">
<autoresizingMask key="autoresizingMask"/>
<tableViewCellContentView key="contentView" opaque="NO" clipsSubviews="YES" multipleTouchEnabled="YES" contentMode="center" tableViewCell="DGn-Em-fnF" id="ig5-Sx-0ID">
<autoresizingMask key="autoresizingMask"/>
</tableViewCellContentView>
<connections>
<segue destination="vXZ-lx-hvc" kind="push" id="7Re-MC-4Vg"/>
</connections>
</tableViewCell>
</prototypes>
<connections>
<outlet property="dataSource" destination="6YT-U6-GbQ" id="gNe-wf-tpB"/>
<outlet property="delegate" destination="6YT-U6-GbQ" id="cTY-kn-m5t"/>
</connections>
</tableView>
<navigationItem key="navigationItem" title="Root View Controller" id="pvV-vd-85X"/>
</tableViewController>
<placeholder placeholderIdentifier="IBFirstResponder" id="M2v-w9-Nli" userLabel="First Responder" sceneMemberID="firstResponder"/>
</objects>
<point key="canvasLocation" x="-488" y="415"/>
</scene>
<!--Navigation Controller-->
<scene sceneID="niZ-Oh-P4f">
<objects>
<navigationController id="nyi-Vr-Xky" sceneMemberID="viewController">
<navigationBar key="navigationBar" contentMode="scaleToFill" id="Oni-TY-kQi">
<rect key="frame" x="0.0" y="0.0" width="320" height="44"/>
<autoresizingMask key="autoresizingMask"/>
</navigationBar>
<connections>
<segue destination="6YT-U6-GbQ" kind="relationship" relationship="rootViewController" id="qtq-bO-hgQ"/>
</connections>
</navigationController>
<placeholder placeholderIdentifier="IBFirstResponder" id="qKd-Tp-fSW" userLabel="First Responder" sceneMemberID="firstResponder"/>
</objects>
<point key="canvasLocation" x="-1200" y="222"/>
</scene>
</scenes>
</document>
