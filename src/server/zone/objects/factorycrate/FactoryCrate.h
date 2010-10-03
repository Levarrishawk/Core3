/*
 *	server/zone/objects/factorycrate/FactoryCrate.h generated by engine3 IDL compiler 0.60
 */

#ifndef FACTORYCRATE_H_
#define FACTORYCRATE_H_

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
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

#include "server/zone/templates/SharedObjectTemplate.h"

#include "system/util/VectorMap.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace factorycrate {

class FactoryCrate : public TangibleObject {
public:
	static const int MAXCAPACITY = 100;

	FactoryCrate();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void sendTo(SceneObject* player, bool doClose);

	bool isFactoryCrate();

	void setUseCount(unsigned int newUseCount, bool notifyClient = true);

	TangibleObject* getPrototype();

	String getCraftersName();

	String getCraftersSerial();

	bool extractObjectToParent(int count = 1);

	TangibleObject* extractObject(int count = 1);

	void split(int newStackSize);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FactoryCrate(DummyConstructorParameter* param);

	virtual ~FactoryCrate();

	String _return_getCraftersName;
	String _return_getCraftersSerial;

	friend class FactoryCrateHelper;
};

} // namespace factorycrate
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::factorycrate;

namespace server {
namespace zone {
namespace objects {
namespace factorycrate {

class FactoryCrateImplementation : public TangibleObjectImplementation {
public:
	static const int MAXCAPACITY = 100;

	FactoryCrateImplementation();

	FactoryCrateImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	virtual void sendTo(SceneObject* player, bool doClose);

	virtual bool isFactoryCrate();

	void setUseCount(unsigned int newUseCount, bool notifyClient = true);

	TangibleObject* getPrototype();

	String getCraftersName();

	String getCraftersSerial();

	bool extractObjectToParent(int count = 1);

	TangibleObject* extractObject(int count = 1);

	void split(int newStackSize);

	FactoryCrate* _this;

	operator const FactoryCrate*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~FactoryCrateImplementation();

	TransactionalObject* clone();

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

	friend class FactoryCrate;
	friend class TransactionalObjectHandle<FactoryCrateImplementation*>;
};

class FactoryCrateAdapter : public TangibleObjectAdapter {
public:
	FactoryCrateAdapter(FactoryCrateImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void sendTo(SceneObject* player, bool doClose);

	bool isFactoryCrate();

	void setUseCount(unsigned int newUseCount, bool notifyClient);

	TangibleObject* getPrototype();

	String getCraftersName();

	String getCraftersSerial();

	bool extractObjectToParent(int count);

	TangibleObject* extractObject(int count);

	void split(int newStackSize);

};

class FactoryCrateHelper : public DistributedObjectClassHelper, public Singleton<FactoryCrateHelper> {
	static FactoryCrateHelper* staticInitializer;

public:
	FactoryCrateHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FactoryCrateHelper>;
};

} // namespace factorycrate
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::factorycrate;

#endif /*FACTORYCRATE_H_*/
