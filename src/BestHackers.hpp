// List with context menu project template
#ifndef BestHackers_HPP_
#define BestHackers_HPP_

#include <QObject>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class BestHackers : public QObject
{
    Q_OBJECT
public:
    BestHackers(bb::cascades::Application *app);
    virtual ~BestHackers() {}
};

#endif /* BestHackers_HPP_ */