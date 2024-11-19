# minishell

diagram of the parser [here](https://drive.google.com/file/d/1MNa3-h2S7PUwt8Nyj_JiAQhYVgbKkaym/view?usp=sharing)

## structure

### parsing
includes:
- init
  -  env variables copy
- env variables expansion
- token list creation

### executing
includes:
- redirections
- signaling
- built-ins implementation
  - chmod
  - echo
  - cd
  - ...
- env variables updates

## references

- [valid functions description](https://42-cursus.gitbook.io/guide/rank-03/minishell/functions)
