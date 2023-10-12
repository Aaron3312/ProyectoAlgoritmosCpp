import cv2
import numpy as np
import os
import pathlib




# Cargar el modelo de detección de objetos pre-entrenado MobileNet SSD
net = cv2.dnn.readNetFromTensorflow('ssd_mobilenet_v2_coco/frozen_inference_graph.pb',
                                    'ssd_mobilenet_v2_coco/ssd_mobilenet_v2_coco_2018_03_29.pbtxt')

# Cargar la imagen en la que deseas realizar la detección
image = cv2.imread('target_image.jpg')

# Obtener las dimensiones de la imagen
height, width = image.shape[:2]

# Crear un blob de la imagen para pasarla al modelo
blob = cv2.dnn.blobFromImage(image, 0.007843, (300, 300), 127.5)

# Establecer la entrada del modelo
net.setInput(blob)

# Realizar la detección de objetos
detections = net.forward()

# Iterar sobre las detecciones y dibujar rectángulos en la imagen
for i in range(detections.shape[2]):
    confidence = detections[0, 0, i, 2]
    if confidence > 0.2:  # Filtrar detecciones débiles
        class_id = int(detections[0, 0, i, 1])
        box = detections[0, 0, i, 3:7] * np.array([width, height, width, height])
        (startX, startY, endX, endY) = box.astype("int")

        label = f"Clase: {class_id}, Confianza: {confidence:.2f}"
        cv2.rectangle(image, (startX, startY), (endX, endY), (0, 255, 0), 2)
        y = startY - 15 if startY - 15 > 15 else startY + 15
        cv2.putText(image, label, (startX, y), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

# Mostrar la imagen con las detecciones
cv2.imshow("Detección de Objetos", image)
cv2.waitKey(0)
cv2.destroyAllWindows()
