.PHONY: clean All

All:
	@echo ----------Building project:[ SMSReader - Debug ]----------
	@"$(MAKE)" -f "SMSReader.mk"
clean:
	@echo ----------Cleaning project:[ SMSReader - Debug ]----------
	@"$(MAKE)" -f "SMSReader.mk" clean
