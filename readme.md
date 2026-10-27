# Corne Keybaord Config Spanish ZMK

## Inicio

- Se trata de mi configuración del corne keyboard con el nice!nano y una batería de 500 mah, con ZMK para su config.
- Video explicativo de como hacer la instalación
  - https://www.youtube.com/watch?v=YVi7ROevBAI
- [Repositorio]() del anterior video.

## [ZMK] Como cargar la configuración

- creas un repo en github nuevo
- metes todo el codigo de este repositorio en el mismo y haces un push.
- entra en acción en la pesta de github "actions" que tarda un poco y te genera un archivo `firmware.zip` donde se encuentran el fichero de la izquierda y el de la derecha.
- lo descomprimes
- conectas una lado al usb, reseteas un lado pulsando **2** veces el botón de reset, y te aparece el explorador de windows con los archivos que contiene su memoria.
- Copias el fichero conrrespondiente que has descomprimido (`corne_left-nice_nano_v2-zmk.uf2`) y esperas a que se configure (suena el tipico sonido de nuevo dispositivo encontrado).
- Haces lo mismo con el otro, conectar usb c, reset 2 pulsaciones y copiar archivo.

## [ZMK] Emparejar por Bluetooth la primera vez

Si acabas de cargar los ficheros y el teclado no aparece en el Bluetooth del móvil:

1. **Resetea los dos lados antes de nada** (solo hace falta la primera vez, o si algo se queda raro): en cada lado, reset 2 veces y copia [settings_reset-nice_nano_v2-zmk.uf2](settings_reset-nice_nano_v2-zmk.uf2). Después vuelve a copiar el fichero del teclado (`corne_left...uf2` / `corne_right...uf2`). Esto borra emparejamientos viejos que impiden que aparezca.
2. **Enciende los dos lados con la batería** (interruptor de la placa en ON) y desconecta el cable USB. Los dos lados se emparejan entre sí solos al encender; solo el **izquierdo** se empareja con el móvil.
3. **Elige un perfil Bluetooth**: mantén pulsada la tecla de la capa 3 (`LAY_3`, la última tecla del pulgar derecho) y pulsa en la mano derecha `J`, `K`, `L` o `Ñ`, que son los perfiles `BT_0` a `BT_3`. Pulsar un perfil que está libre pone el teclado a anunciarse.
4. **Búscalo en el móvil**: Ajustes → Bluetooth → buscar dispositivos. Debe salir como **Corne**. Pulsa sobre él para emparejar.
5. Para cambiar de dispositivo, repite el paso 3 con otro perfil (cada perfil guarda un dispositivo distinto).

Si sigue sin aparecer:

- Borra el teclado de la lista de Bluetooth del móvil ("olvidar dispositivo").
- En la capa 3 pulsa `BT_CLEAR` (la tecla `G`, a la derecha de la mano izquierda) para borrar el perfil actual y vuelve a probar.
- Si no resulta, repite el paso 1 (settings_reset) en los dos lados.
- Comprueba que la batería está cargada y que el interruptor de cada lado esté en ON.

## [ZMK] Mi configuración

- Por una parte la configuración de teclado en español con todas sus variantes.
- Se trata de 2 ficheros para configurar las teclas:
  - [corne.keymap](config/corne.keymap) donde están la disposición de teclas.
  - [via_spanish.h](config/via_spanish.h) donde se definen las teclas
- Por otra parte el fichero de configuración [corne.conf](config/corne.conf) donde se encuentra las configuraciones
  - Para que duré más la batería al suspenderse el teclado cuando pasa más de 120secs, y se "duerme" al pasar 600secs, muy importante sobre todo si tienes una batería de 100mah.
  - Se activa la posibilidad de encender las luces de debajo del teclado.
  - Se desactiva el que intente forzadamente mostrar la batería en el dispositivo Bluetooth que tengas conectado.

## [ZMK] Pros

- Carencia de cables por medio, sobre todo si tienes niños por casa.
- Puedes conectar con varios dispositivos a la vez, y es instantáneo el seleccionar uno u otro, como el PC, móvil tv etc.

## [ZMK] Contras

- Según el receptor de Bluetooth y la distancia, el teclado derecho a veces da unas milésimas de retraso, he comprobado que cuanto más alejados los teclados (unos 60 cm) se acentúa.
- Si compras la batería de 100mah tendrás que cargar cada semana por lo que dicen.
- Pierdes la posibilidad de pantalla OLED pero sin embargo hay una pantalla E-INK [nice!view](https://nicekeyboards.com/nice-view/) en la que te muestra el nivel de batería y cual de los 5 perfiles Bluetooth tienes seleccionado.

## [ZMK] Más páginas de interés

- [github zmk](https://github.com/zmkfirmware/zmk).
- [listado de teclas](https://zmk.dev/docs/codes/keyboard-keypad).

## [QMK] Corne configuración spanish con cable

- No se puede configurar con QMK a través de la web de VIA si se usa nice!nano inhalambrico con bluetooth, este apartado es si lo tienes con cable.
- Configuración en [VIA](https://usevia.app/#/)
- [Video](https://www.youtube.com/watch?v=YAdTccaOKyw) explicativo de VIA.
- [Listado](https://docs.qmk.fm/#/keycodes) de teclas en QMK.
- Dejo la configuración de QMK en el fichero [crkbd.json](crkbd.json), la cual se puede cargar en VIA y trabajar sobre ella.

## [QMK] Corne rf v4 de aliexpress (Vial)

- [web](https://get.vial.today/download/) descarga de vial programa
  - Puedes usar la sin tener el programa [vial web](https://vial.rocks/), pero no he visto la opción de guardar el fichero de conf.
- mi fichero de configuración [configuración vial](spanish-vial-madamx.vil)
- otros
  - Web que te explica en [inglés](https://zellwk.com/blog/corne-keyboard-setup/).
  - firmware que no he usado descargar
    - [github crkbd](https://github.com/foostan/crkbd/blob/main/docs/firmware/rev4/firmware_en.md)
