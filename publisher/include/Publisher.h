#pragma once

#include <memory>
#include <string>

namespace net {

class Publisher
{
public:
  virtual ~Publisher() noexcept = default;

  /**
   @brief Sends out data to the clients that were subscribed to the specified topic.
   */
  virtual void sendOut(const std::string& topic, const std::string& data) = 0;
  /**
   @brief Sends out data to all connected clients.
   */
  virtual void broadcast(const std::string& data) = 0;
};

using PublisherUnPtr = std::unique_ptr<Publisher>;

} // namespace net
