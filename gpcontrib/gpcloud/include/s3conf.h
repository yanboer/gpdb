#ifndef __S3_CONF_H__
#define __S3_CONF_H__

#include "s3common_headers.h"
#include "gpcommon.h"

// segment id
extern int32_t s3ext_segid;

// total segment number
extern int32_t s3ext_segnum;

// UDP socket to send log
extern int32_t s3ext_logsock_udp;

// default log level
extern int32_t s3ext_loglevel;

// log type
extern int32_t s3ext_logtype;

// remote server port if use external log server
extern int32_t s3ext_logserverport;

// remote server address if use external log server
extern string s3ext_logserverhost;

// server address where log message is sent to
extern struct sockaddr_in s3ext_logserveraddr;

class S3Params;
void CheckEssentialConfig(const S3Params& params);
void GetAwsProfileInfo(const string configSection, string& accessId, string& secret, string& token, string& metadataUrl);
bool GetAwsMetadataCredentials(const string& metadataUrl, string& accessId, string& secret, string& token);

#endif
