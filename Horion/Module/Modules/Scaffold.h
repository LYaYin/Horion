#pragma once
#include "Module.h"
class Scaffold : public IModule {
private:
	bool autoselect = false;
	bool tryScaffold(vec3_t blockBelow);
	bool findBlock();

public:
	Scaffold();
	~Scaffold();

	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
};
