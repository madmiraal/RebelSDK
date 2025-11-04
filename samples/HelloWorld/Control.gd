extends Control

onready var library = preload("res://libs/hello_world.gdns").new()

func _on_Button_pressed():
	$Label.text = library.get_data()
