/*
	Generated by KBEngine!
	Please do not modify this file!
	Please inherit this module, such as: (class Space : public SpaceBase)
	tools = kbcmd
*/

#pragma once
#include "KBECommon.h"
#include "Entity.h"
#include "KBETypes.h"
#include "ServerErrorDescrs.h"
#include "EntityCallSpaceBase.h"

namespace KBEngine
{

class Method;
class Property;
class MemoryStream;

// defined in */scripts/entity_defs/Space.def
class KBENGINEPLUGINS_API SpaceBase : public Entity
{
public:
	EntityBaseEntityCall_SpaceBase* pBaseEntityCall;
	EntityCellEntityCall_SpaceBase* pCellEntityCall;

	uint32 modelID;
	virtual void onModelIDChanged(uint32 oldValue) {}
	uint8 modelScale;
	virtual void onModelScaleChanged(uint8 oldValue) {}
	FString name;
	virtual void onNameChanged(const FString& oldValue) {}
	uint32 uid;
	virtual void onUidChanged(uint32 oldValue) {}
	uint32 utype;
	virtual void onUtypeChanged(uint32 oldValue) {}


	void onGetBase() override;
	void onGetCell() override;
	void onLoseCell() override;

	EntityCall* getBaseEntityCall() override;
	EntityCall* getCellEntityCall() override;

	void onRemoteMethodCall(Method* pMethod, MemoryStream& stream) override;
	void onUpdatePropertys(Property* pProp, MemoryStream& stream) override;
	void callPropertysSetMethods() override;

	SpaceBase();
	virtual ~SpaceBase();

};

}