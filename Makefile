.PHONY: clean All

All:
	@echo "----------Building project:[ learn - Debug ]----------"
	@cd "learn" && "$(MAKE)" -f  "learn.mk"
clean:
	@echo "----------Cleaning project:[ learn - Debug ]----------"
	@cd "learn" && "$(MAKE)" -f  "learn.mk" clean
