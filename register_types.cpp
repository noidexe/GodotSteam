//===========================================================================//
// GodotSteam - register_types.cpp
//===========================================================================//
//
// Copyright (c) 2015-Current | GP Garcia and Contributors (view contributors.md)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//===========================================================================//

#include "register_types.h"
#include "core/class_db.h"
#include "core/engine.h"
#include "core/project_settings.h"
#include "godotsteam.h"


static Steam* SteamPtr = nullptr;


void register_godotsteam_types(){
	ClassDB::register_class<Steam>();
	SteamPtr = memnew(Steam);
	Engine::get_singleton()->add_singleton(Engine::Singleton("Steam",Steam::get_singleton()));

	GLOBAL_DEF("steam/initialization/app_id", 0);
	GLOBAL_DEF("steam/initialization/embed_callbacks", false);
}


void unregister_godotsteam_types(){
	memdelete(SteamPtr);
}
