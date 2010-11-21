/*
 *	server/zone/objects/tangible/camp/CampKit.h generated by engine3 IDL compiler 0.60
 */

#ifndef CAMPKIT_H_
#define CAMPKIT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

#include "server/zone/templates/tangible/CampKitTemplate.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace camp {

class CampKit : public TangibleObject {
public:
	CampKit();

	void loadTemplateData(SharedObjectTemplate* templateData);

	bool isCampKitOject();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CampKit(DummyConstructorParameter* param);

	virtual ~CampKit();

	friend class CampKitHelper;
};

} // namespace camp
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::camp;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace camp {

class CampKitImplementation : public TangibleObjectImplementation {
protected:
	unsigned short exp;

	unsigned short duration;

	unsigned short campType;

public:
	CampKitImplementation();

	CampKitImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	bool isCampKitOject();

	CampKit* _this;

	operator const CampKit*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~CampKitImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class CampKit;
};

class CampKitAdapter : public TangibleObjectAdapter {
public:
	CampKitAdapter(CampKitImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool isCampKitOject();

};

class CampKitHelper : public DistributedObjectClassHelper, public Singleton<CampKitHelper> {
	static CampKitHelper* staticInitializer;

public:
	CampKitHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CampKitHelper>;
};

} // namespace camp
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::camp;

#endif /*CAMPKIT_H_*/
