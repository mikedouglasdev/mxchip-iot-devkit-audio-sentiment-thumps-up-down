# mxchip-iot-devkit-audio-sentiment-thumps-up-down
MXChip IoT DevKit code for determining sentiment analysis of audio spoken into device

Learning series where we are going to build out the following live on Twitch at https://twitch.tv/mikedouglasdev

![](images/audio-sentiment-design.jpg)

## Tasks

- Set up device

- Create Hello World IoT Project and push to repo

- Send audio message to Azure Function

- Speech to Text of Audio message

- Sentiment Analysis of text message

- Send result to device through IoT Hub

- Add thumbs up/down images to response

## Resources

Getting started
https://docs.microsoft.com/en-us/samples/azure-samples/mxchip-iot-devkit-get-started/sample/

Hello World c code
https://www.hackster.io/makers-ns/microsoft-azure-iot-kit-hello-world-941d2d

IOT Hub (Event Hub) using Azure Function to write to Cosmos DB

Sentiment analysis
https://github.com/dotnet/machinelearning-samples

Speech to Text
https://azure.microsoft.com/en-ca/services/cognitive-services/speech-to-text/

Capture Microphone Speech to Text
https://docs.microsoft.com/en-ca/azure/cognitive-services/speech-service/quickstarts/speech-to-text-from-microphone?tabs=dotnet%2Cx-android%2Clinux%2Cjava-runtime%2Cwindowsinstall&pivots=programming-language-csharp

Translator Example - similar to what we want to do
https://docs.microsoft.com/en-us/samples/azure-samples/mxchip-iot-devkit-translator/sample/
