# Projeto Led

Projeto com ESP32 que controla 7 LEDs para simular as luzes de um carro: seta para a esquerda, seta para a direita e pisca-alerta.

Feito em C++ com o framework Arduino, usando PlatformIO no VS Code.

## Funcionalidades

- **Seta esquerda:** acende os LEDs do lado esquerdo em sequência, repetindo 3 vezes.
- **Seta direita:** acende os LEDs do lado direito em sequência, repetindo 3 vezes.
- **Pisca-alerta:** acende e apaga todos os LEDs em sequência, repetindo 5 vezes.

## Hardware

- 1 placa ESP32 (`esp32dev`)
- 4 LEDs vermelhos
- 2 LEDs amarelos
- 1 LED verde
- Resistores e protoboard

## Ligação dos pinos

| LED | Cor | GPIO | Posição |
|-----|-----|------|---------|
| `pinLedVM25` | Vermelho | 25 | Superior direito |
| `pinLedVM26` | Vermelho | 26 | Inferior direito |
| `pinLedVM32` | Vermelho | 32 | Superior esquerdo |
| `pinLedVM14` | Vermelho | 14 | Inferior esquerdo |
| `pinLedVD13` | Verde | 13 | Central |
| `pinLedAM33` | Amarelo | 33 | Topo |
| `pinLedAM27` | Amarelo | 27 | Base |

## Como rodar

1. Instale o [VS Code](https://code.visualstudio.com/) e a extensão **PlatformIO IDE**.
2. Clone o repositório:
   ```bash
   git clone https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git
   ```
3. Abra a pasta do projeto no VS Code.
4. Conecte o ESP32 ao computador pelo cabo USB.
5. Compile e envie o código para a placa:
   ```bash
   pio run --target upload
   ```

## Estrutura

```
Projeto Led/
├── src/
│   └── main.cpp        # código principal
├── include/
├── lib/
├── test/
└── platformio.ini      # configuração da placa e do framework
```

## Tecnologias

- C++ (Arduino)
- ESP32
- PlatformIO
