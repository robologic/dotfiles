.PHONY: install
install: hooks ## Install everything
	@setup/install.sh install-normal

.PHONY: install-ci
install-ci:
	@setup/install.sh install-ci

.PHONY: hooks
hooks: ## Set up git hooks so that things are committed the way we want
	@echo "==> Setting up hooks..."
	find .git/hooks -type l -exec rm {} \;
	find .githooks -type f -exec  ln -sf ../../{} .git/hooks \;
	@echo "==> Done."

.PHONY: symlink
symlink: ## Symlink files
	@zsh -i -c link_all

.PHONY: backup
backup: ## Backup packages, casks, and plugins
	@zsh -i -c backup-now

# ----- Below is for self-documentation ----- #
# https://marmelab.com/blog/2016/02/29/auto-documented-makefile.html
.PHONY: help
.DEFAULT_GOAL := help
help:
	@echo "Makefile targets:"
	@grep -h -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-10s\033[0m %s\n", $$1, $$2}'
