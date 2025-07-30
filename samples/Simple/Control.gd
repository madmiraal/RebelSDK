extends Control

onready var simple = preload("res://libs/simple_nativescript.gdns").new()

func _on_Button_pressed():
	$Label.text = simple.get_data()
