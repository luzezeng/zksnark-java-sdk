//
// Created by ruipeng on 6/5/19.
//

#include "org_tron_common_zksnark_Librustzcash_LibrustzcashJNI.h"
#include "librustzcash.h"

jboolean bool2jboolean(bool b) {
    if (b) {
        return JNI_TRUE;
    } else {
        return JNI_FALSE;
    }
}

/*
 * Matt
 */

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashInitZksnarkParams
 * Signature: ([BILjava/lang/String;[BILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashInitZksnarkParams
    (JNIEnv * env, jobject, jstring spend_path, jstring spend_hash, jstring output_path, jstring output_hash) {
    librustzcash_init_zksnark_params(
        (const codeunit*) env->GetStringUTFChars(spend_path, nullptr),
        (size_t) env->GetStringLength(spend_path),
        (const char*) env->GetStringUTFChars(spend_hash, nullptr),
        (const codeunit*)  env->GetStringUTFChars(output_path, nullptr),
        (size_t) env->GetStringLength(output_path),
        (const char*) env->GetStringUTFChars(output_hash, nullptr)
    );
}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashZip32XskMaster
 * Signature: ([BI[B)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashZip32XskMaster
  (JNIEnv * env, jobject, jbyteArray data, jint size, jbyteArray m_bytes) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashZip32XskDerive
 * Signature: ([BI[B)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashZip32XskDerive
  (JNIEnv *, jobject, jbyteArray, jint, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashZip32XfvkAddress
 * Signature: ([B[B[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashZip32XfvkAddress
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashAskToAk
 * Signature: ([B[B)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashAskToAk
  (JNIEnv *, jobject, jbyteArray, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingComputeNf
 * Signature: ([B[BJ[B[B[BJ[B)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingComputeNf
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jlong, jbyteArray, jbyteArray, jbyteArray, jlong, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashNskToNk
 * Signature: ([B[B)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashNskToNk
  (JNIEnv *, jobject, jbyteArray, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingGenerateR
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingGenerateR
  (JNIEnv *, jobject, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingKaDerivepublic
 * Signature: ([B[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingKaDerivepublic
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashCrhIvk
 * Signature: ([B[B[B)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashCrhIvk
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray) {

}

/*
 * Kiven
 */

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingKaAgree
 * Signature: ([B[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingKaAgree
  (JNIEnv *, jobject, jbyteArray p, jbyteArray sk, jbyteArray result) {
  return bool2jboolean(librustzcash_sapling_ka_agree(
    reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(p, nullptr)),
    reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(sk, nullptr)),
    reinterpret_cast<unsigned char *>(env->GetByteArrayElements(result, nullptr))
  ));
}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashCheckDiversifier
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashCheckDiversifier
  (JNIEnv * env, jobject, jbyteArray diversifier) {
    return bool2jboolean(
        librustzcash_check_diversifier(
            reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(diversifier, nullptr))));
}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashIvkToPkd
 * Signature: ([B[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashIvkToPkd
  (JNIEnv *, jobject, jbyteArray ivk, jbyteArray diversifier, jbyteArray result) {
  return bool2jboolean(
    librustzcash_ivk_to_pkd(
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(ivk, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(diversifier, nullptr)),
      reinterpret_cast<unsigned char *>(env->GetByteArrayElements(result, nullptr))
    )
  );
}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingComputeCm
 * Signature: ([B[BJ[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingComputeCm
  (JNIEnv *, jobject, jbyteArray diversifier, jbyteArray pk_d, jlong value, jbyteArray r, jbyteArray result) {
  return bool2jboolean(
    librustzcash_sapling_compute_cm(
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(diversifier, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(pk_d, nullptr)),
      reinterpret_cast<const uint64_t>(value),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(r, nullptr)),
      reinterpret_cast<unsigned char *>(env->GetByteArrayElements(result, nullptr))
    )
  );
}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingProvingCtxInit
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingProvingCtxInit
  (JNIEnv *, jobject) {
  return librustzcash_sapling_proving_ctx_init();
}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingSpendProof
 * Signature: (J[B[B[B[B[BJ[B[B[B[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingSpendProof
  (JNIEnv *, jobject, jlong ctx, jbyteArray ak, jbyteArray nsk, jbyteArray diversifier, jbyteArray rcm,jbyteArray ar,
  jlong value, jbyteArray anchor, jbyteArray witness, jbyteArray cv, jbyteArray rk, jbyteArray zkproof) {
  return bool2jboolean(
    librustzcash_sapling_spend_proof(
      &ctx,
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(ak, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(nsk, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(diversifier, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(rcm, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(ar, nullptr)),
      reinterpret_cast<const uint64_t>(value),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(anchor, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(witness, nullptr)),
      reinterpret_cast<unsigned char *>(env->GetByteArrayElements(cv, nullptr)),
      reinterpret_cast<unsigned char *>(env->GetByteArrayElements(rk, nullptr)),
      reinterpret_cast<unsigned char *>(env->GetByteArrayElements(zkproof, nullptr)),
    )
  );
}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingOutputProof
 * Signature: (J[B[B[B[BJ[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingOutputProof
  (JNIEnv *, jobject, jlong ctx, jbyteArray esk, jbyteArray diversifier, jbyteArray pk_d, jbyteArray rcm, jlong value, jbyteArray cv, jbyteArray zkproof) {
  return bool2jboolean(
    librustzcash_sapling_output_proof(
      &ctx,
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(esk, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(diversifier, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(pk_d, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(rcm, nullptr)),
      reinterpret_cast<const uint64_t>(value),
      reinterpret_cast<unsigned char *>(env->GetByteArrayElements(cv, nullptr)),
      reinterpret_cast<unsigned char *>(env->GetByteArrayElements(zkproof, nullptr)),
    )
  );
}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingSpendSig
 * Signature: ([B[B[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingSpendSig
  (JNIEnv *, jobject, jbyteArray ask, jbyteArray ar, jbyteArray sighash, jbyteArray result) {
  return bool2jboolean(
    librustzcash_sapling_spend_sig(
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(ask, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(ar, nullptr)),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(sighash, nullptr)),
      reinterpret_cast<unsigned char *>(env->GetByteArrayElements(result, nullptr)),
    )
  );
}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingBindingSig
 * Signature: (JJ[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingBindingSig
  (JNIEnv *, jobject, jlong ctx, jlong valueBalance, jbyteArray sighash, jbyteArray result) {
  return bool2jboolean(
    librustzcash_sapling_binding_sig(
      &ctx,
      reinterpret_cast<int64_t>(value),
      reinterpret_cast<const unsigned char *>(env->GetByteArrayElements(sighash, nullptr)),
      reinterpret_cast<unsigned char *>(env->GetByteArrayElements(result, nullptr)),
    )
  );
}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingProvingCtxFree
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingProvingCtxFree
  (JNIEnv *, jobject, jlong ctx) {
  librustzcash_sapling_proving_ctx_free(&ctx);
}

/*
 * Olenheim
 */

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingVerificationCtxInit
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingVerificationCtxInit
  (JNIEnv *, jobject) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingCheckSpend
 * Signature: (J[B[B[B[B[B[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingCheckSpend
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingCheckOutput
 * Signature: (J[B[B[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingCheckOutput
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jbyteArray, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingFinalCheck
 * Signature: (JJ[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingFinalCheck
  (JNIEnv *, jobject, jlong, jlong, jbyteArray, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashSaplingVerificationCtxFree
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashSaplingVerificationCtxFree
  (JNIEnv *, jobject, jlong) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashMerkleHash
 * Signature: (I[B[B[B)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashMerkleHash
  (JNIEnv *, jobject, jint, jbyteArray, jbyteArray, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashTreeUncommitted
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashTreeUncommitted
  (JNIEnv *, jobject, jbyteArray) {

}

/*
 * Class:     org_tron_common_zksnark_Librustzcash_LibrustzcashJNI
 * Method:    librustzcashToScalar
 * Signature: ([B[B)V
 */
JNIEXPORT void JNICALL Java_org_tron_common_zksnark_Librustzcash_00024LibrustzcashJNI_librustzcashToScalar
  (JNIEnv *, jobject, jbyteArray, jbyteArray) {

}
