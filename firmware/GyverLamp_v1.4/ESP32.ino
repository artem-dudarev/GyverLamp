void ESP_wdtEnable(uint32_t timeout_ms)
{
#if !defined(ESP32)
  ESP.wdtEnable(timeout_ms);
#endif
}

void ESP_wdtFeed()
{
#if !defined(ESP32)
  ESP.wdtFeed();
#endif
}

int WiFi_hostByName(const char* aHostname, IPAddress& aResult, uint32_t timeout_ms)
{
#if defined(ESP32)
  return WiFi.hostByName(aHostname, aResult);
#else
  return WiFi.hostByName(aHostname, aResult, timeout_ms);
#endif
}

size_t Udp_write(const char *str)
{
#if defined(ESP32)
  return Udp.print(str);
#else
  return Udp.write(str);
#endif
}
