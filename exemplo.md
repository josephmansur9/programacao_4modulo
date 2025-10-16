Parte 1:
[Vídeo da parte 1](assets/IMG_0780.mp4)

Parte 2:
[Vídeo da parte 2](assets/IMG_0779.mp4)
[Vídeo da parte 1](assets/video3)



código do arduino para ele piscar:

void setup() {
  pinMode(13,OUTPUT);

}

void loop() {
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
}
