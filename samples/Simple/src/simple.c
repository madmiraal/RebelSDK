// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include <gdnative_api_struct.gen.h>

#include <string.h>

// Pointers to structs that will contain the API function pointers.
const rebel_gdnative_core_api_struct* core_api = NULL;
const rebel_gdnative_ext_nativescript_api_struct* nativescript_api = NULL;

// Declarations

// Library create function.
void* simple_create(
  rebel_object* instance,
  void* method_data
);

// Library destroy function.
void simple_destroy(
  rebel_object* instance,
  void* method_data,
  void* user_data
);

// Library methods.
rebel_variant simple_get_data(
  rebel_object* instance,
  void* method_data,
  void* user_data,
  int num_args,
  rebel_variant** args
);

// Library data structure.
typedef struct simple_data_struct {
    char message[256];
} simple_data_struct;


// Required library init method.
// Called by Rebel Engine when the library is loaded.
// We use it to populate our API function pointers structs.
void GDN_EXPORT rebel_gdnative_init(
  rebel_gdnative_init_options* options
) {
    // Core API functions.
    core_api = options->api_struct;

    // Extensions API functions.
    for (int i = 0; i < core_api->num_extensions; i++) {
        switch (core_api->extensions[i]->type) {
            case GDNATIVE_EXT_NATIVESCRIPT: {
                // NativeScript Extension API functions.
                nativescript_api =
                  (rebel_gdnative_ext_nativescript_api_struct *)
                  core_api->extensions[i];
            }; break;
            default: break;
        }
    }
}

// Required library terminate method.
// Called by Rebel Engine when the library is unloaded.
void GDN_EXPORT rebel_gdnative_terminate(
  rebel_gdnative_terminate_options* options
) {
    core_api = NULL;
    nativescript_api = NULL;
}

// Required library NativeScript init method.
// Called by Rebel Engine when the library is loaded.
// Registers our library's classes and methods with Rebel Engine.
void GDN_EXPORT rebel_nativescript_init(
  void* handle
) {
    // Pointer to our constructor.
    rebel_instance_create_func create = { NULL, NULL, NULL };
    create.create_func = &simple_create;
    // Pointer to our destructor.
    rebel_instance_destroy_func destroy = { NULL, NULL, NULL };
    destroy.destroy_func = &simple_destroy;
    // Register our library's class.
    nativescript_api->rebel_nativescript_register_class(
      handle,
      "Simple",
      "Reference",
      create,
      destroy
    );

    // Pointer to our method.
    rebel_instance_method get_data = { NULL, NULL, NULL };
    get_data.method = &simple_get_data;
    // Our method's attributes.
    rebel_method_attributes attributes = { REBEL_METHOD_RPC_MODE_DISABLED };
    // Register our library's method.
    nativescript_api->rebel_nativescript_register_method(
      handle,
      "Simple",
      "get_data",
      attributes,
      get_data
    );
}


// Definitions

// Required library constructor.
void* simple_create(
  rebel_object* instance,
  void* method_data
) {
    simple_data_struct* simple_data =
      core_api->rebel_alloc(sizeof(simple_data_struct));
    strcpy(simple_data->message, "Hello World from Simple Library!");
    return simple_data;
}


// Required library destructor.
void simple_destroy(
  rebel_object* instance,
  void* method_data,
  void* user_data
) {
  core_api->rebel_free(user_data);
}

// Library methods.
rebel_variant simple_get_data(
  rebel_object* instance,
  void* method_data,
  void* user_data,
  int num_args,
  rebel_variant** args
) {
  rebel_string string;
  rebel_variant variant;
  simple_data_struct* simple_data = (simple_data_struct *)user_data;

  core_api->rebel_string_new(&string);
  core_api->rebel_string_parse_utf8(&string, simple_data->message);
  core_api->rebel_variant_new_string(&variant, &string);
  core_api->rebel_string_destroy(&string);

  return variant;
}
