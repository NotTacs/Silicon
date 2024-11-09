#include "./discord.h"

void SendWebhook(const std::string& url, const std::string& message) {
	CURL* Curl;
	CURLcode Res;

	curl_global_init(CURL_GLOBAL_DEFAULT);
	Curl = curl_easy_init();
	if (Curl) {

		std::string payload = "{\"content\":\"" + message + "\"}";

		curl_easy_setopt(Curl, CURLOPT_URL, url.c_str());

		curl_easy_setopt(Curl, CURLOPT_POST, 1L);

		curl_easy_setopt(Curl, CURLOPT_POSTFIELDS, payload.c_str());

		curl_easy_setopt(Curl, CURLOPT_HTTPHEADER, curl_slist_append(NULL, "Content-Type: application/json"));

		Res = curl_easy_perform(Curl);

		curl_easy_cleanup(Curl);
	}

	curl_global_cleanup();
}
