# Sine Model - STM32N6 AI Application

Actuellement sur ce repos la première partie du chapitre 4 du tuto: 
[GitHub - AIoT-Guidebook ](https://github.com/Mateushga1/AIoT-Guidebook)

## 🔧 Matériel

- **Carte** : STM32N657X0-Q Nucleo-144
- **MCU** : STM32N657XX (Cortex-M55)
- **IDE** : STM32CubeIDE 1.19.0

## Prérequis

### Software Packs requis

Installez via `Help` → `Manage Embedded Software Packages` :

1. **STM32CubeN6 Firmware Package**
2. **X-CUBE-AI** (Middleware AI)

## ⚠️ Problèmes que j'ai rencontré

### 1. Erreur `undefined reference to ai_sine_model_*`

**Cause** : Le dossier `X-CUBE-AI/App` n'est pas inclus dans le build.

**Solution** :
1. Clic droit sur le projet → **Properties**
2. **C/C++ General** → **Paths and Symbols** → **Source Location**
3. **Add Folder...** → Sélectionnez `FSBL/X-CUBE-AI/App`
4. **Clean** puis **Rebuild**

### 2. Warning `discards 'const' qualifier`

Dans `main.c` ligne 174, ajoutez un cast :
```c
ai_buffer_array_item_set_address(&ai_params.map_weights, 0, 
    (ai_handle)s_sine_model_weights_array_u64);
```

Bon courage!


Helene :)