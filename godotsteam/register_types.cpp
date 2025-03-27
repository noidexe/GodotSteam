#include "register_types.h"

#include <gdextension_interface.h>

#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/classes/project_settings.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/godot.hpp>

#include "godotsteam.h"

using namespace godot;

static Steam *SteamPtr;

void initialize_godotsteam(ModuleInitializationLevel level){
	if(level == MODULE_INITIALIZATION_LEVEL_SERVERS){
		ClassDB::register_class<Steam>();
		SteamPtr = memnew(Steam);
		Engine::get_singleton()->register_singleton("Steam", Steam::get_singleton());

		// Setup Project Settings
		// GDExtension does not have GLOBAL_DEF or GLOBAL_GET, so we gotta do this manually here
		const String app_id_setting = "godot_steam/steam/app_id";
		const Variant initial_app_id = 0;
		if (!ProjectSettings::get_singleton()->has_setting(app_id_setting)) {
			ProjectSettings::get_singleton()->set(app_id_setting, initial_app_id);
		}
		// Fetching the value right away seems required, otherwise set_initial_value and set_as_basic don't work
		int app_id = ProjectSettings::get_singleton()->get_setting_with_override(app_id_setting);
		ProjectSettings::get_singleton()->set_initial_value(app_id_setting, initial_app_id);
		ProjectSettings::get_singleton()->set_as_basic(app_id_setting, true);


		const String auto_init_setting = "godot_steam/steam/auto_init_steam_on_startup";
		const Variant initial_auto_init = false;
		if (!ProjectSettings::get_singleton()->has_setting(auto_init_setting)) {
			ProjectSettings::get_singleton()->set(auto_init_setting, initial_auto_init);
		}
		// Fetching the value right away seems required, otherwise set_initial_value and set_as_basic don't work
		bool auto_init = ProjectSettings::get_singleton()->get_setting_with_override(auto_init_setting);
		ProjectSettings::get_singleton()->set_initial_value(auto_init_setting, initial_auto_init);
		ProjectSettings::get_singleton()->set_as_basic(auto_init_setting, true);
		

		// Prevent auto steamInit from the editor itself
		if (Engine::get_singleton()->is_editor_hint()) {
			return;
		}

		if (!auto_init) {
			return;
		}

		Steam::get_singleton()->steamInitEx(false, app_id);
	}
}

void uninitialize_godotsteam(ModuleInitializationLevel level){
	if(level == MODULE_INITIALIZATION_LEVEL_SERVERS){
		Engine::get_singleton()->unregister_singleton("Steam");
		memdelete(SteamPtr);
	}
}

extern "C" {
	GDExtensionBool GDE_EXPORT godotsteam_init(GDExtensionInterfaceGetProcAddress p_interface, const GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization){
		godot::GDExtensionBinding::InitObject init_obj(p_interface, p_library, r_initialization);

		init_obj.register_initializer(initialize_godotsteam);
		init_obj.register_terminator(uninitialize_godotsteam);
		init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SERVERS);

		return init_obj.init();
	}
}
