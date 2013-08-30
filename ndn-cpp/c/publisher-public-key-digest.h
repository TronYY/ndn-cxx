/**
 * @author: Jeff Thompson
 * See COPYING for copyright and distribution information.
 */

#ifndef NDN_PUBLISHERPUBLICKEYDIGEST_H
#define NDN_PUBLISHERPUBLICKEYDIGEST_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * A PublisherPublicKeyDigest holds a pointer to the publisher public key digest value, if any.
 * We make a separate struct since this is used by multiple other structs.
 */
struct ndn_PublisherPublicKeyDigest {
  unsigned char *publisherPublicKeyDigest;      /**< pointer to pre-allocated buffer.  0 for none */
  unsigned int publisherPublicKeyDigestLength;  /**< length of publisherPublicKeyDigest.  0 for none */  
};

/**
 * Initialize an ndn_PublisherPublicKeyDigest struct with 0 for none.
 */
static inline void ndn_PublisherPublicKeyDigest_initialize(struct ndn_PublisherPublicKeyDigest *self)
{
  self->publisherPublicKeyDigest = 0;
  self->publisherPublicKeyDigestLength = 0;
}

#ifdef __cplusplus
}
#endif

#endif
