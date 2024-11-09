#pragma once
#include "framework.h"
#include <string>
#include <curl/curl.h>

void SendWebhook(const std::string& url, const std::string& message);