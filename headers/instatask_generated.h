// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_INSTATASK_IGDATA_H_
#define FLATBUFFERS_GENERATED_INSTATASK_IGDATA_H_

#include "flatbuffers/flatbuffers.h"

namespace IGData {

struct IGTask;

struct IGTask FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_FILE_INFO = 6,
    VT_TIME = 8,
    VT_DESCRIPTION = 10,
    VT_HASHTAGS = 12,
    VT_REQUESTED_BY = 14,
    VT_REQUESTED_BY_PHRASE = 16,
    VT_PROMOTE_SHARE = 18,
    VT_LINK_BIO = 20,
    VT_IS_VIDEO = 22,
    VT_MASK = 24,
    VT_HEADER = 26
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const flatbuffers::String *file_info() const {
    return GetPointer<const flatbuffers::String *>(VT_FILE_INFO);
  }
  const flatbuffers::String *time() const {
    return GetPointer<const flatbuffers::String *>(VT_TIME);
  }
  const flatbuffers::String *description() const {
    return GetPointer<const flatbuffers::String *>(VT_DESCRIPTION);
  }
  const flatbuffers::String *hashtags() const {
    return GetPointer<const flatbuffers::String *>(VT_HASHTAGS);
  }
  const flatbuffers::String *requested_by() const {
    return GetPointer<const flatbuffers::String *>(VT_REQUESTED_BY);
  }
  const flatbuffers::String *requested_by_phrase() const {
    return GetPointer<const flatbuffers::String *>(VT_REQUESTED_BY_PHRASE);
  }
  const flatbuffers::String *promote_share() const {
    return GetPointer<const flatbuffers::String *>(VT_PROMOTE_SHARE);
  }
  const flatbuffers::String *link_bio() const {
    return GetPointer<const flatbuffers::String *>(VT_LINK_BIO);
  }
  bool is_video() const {
    return GetField<uint8_t>(VT_IS_VIDEO, 0) != 0;
  }
  int32_t mask() const {
    return GetField<int32_t>(VT_MASK, 0);
  }
  const flatbuffers::String *header() const {
    return GetPointer<const flatbuffers::String *>(VT_HEADER);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_FILE_INFO) &&
           verifier.VerifyString(file_info()) &&
           VerifyOffset(verifier, VT_TIME) &&
           verifier.VerifyString(time()) &&
           VerifyOffset(verifier, VT_DESCRIPTION) &&
           verifier.VerifyString(description()) &&
           VerifyOffset(verifier, VT_HASHTAGS) &&
           verifier.VerifyString(hashtags()) &&
           VerifyOffset(verifier, VT_REQUESTED_BY) &&
           verifier.VerifyString(requested_by()) &&
           VerifyOffset(verifier, VT_REQUESTED_BY_PHRASE) &&
           verifier.VerifyString(requested_by_phrase()) &&
           VerifyOffset(verifier, VT_PROMOTE_SHARE) &&
           verifier.VerifyString(promote_share()) &&
           VerifyOffset(verifier, VT_LINK_BIO) &&
           verifier.VerifyString(link_bio()) &&
           VerifyField<uint8_t>(verifier, VT_IS_VIDEO) &&
           VerifyField<int32_t>(verifier, VT_MASK) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyString(header()) &&
           verifier.EndTable();
  }
};

struct IGTaskBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(IGTask::VT_ID, id, 0);
  }
  void add_file_info(flatbuffers::Offset<flatbuffers::String> file_info) {
    fbb_.AddOffset(IGTask::VT_FILE_INFO, file_info);
  }
  void add_time(flatbuffers::Offset<flatbuffers::String> time) {
    fbb_.AddOffset(IGTask::VT_TIME, time);
  }
  void add_description(flatbuffers::Offset<flatbuffers::String> description) {
    fbb_.AddOffset(IGTask::VT_DESCRIPTION, description);
  }
  void add_hashtags(flatbuffers::Offset<flatbuffers::String> hashtags) {
    fbb_.AddOffset(IGTask::VT_HASHTAGS, hashtags);
  }
  void add_requested_by(flatbuffers::Offset<flatbuffers::String> requested_by) {
    fbb_.AddOffset(IGTask::VT_REQUESTED_BY, requested_by);
  }
  void add_requested_by_phrase(flatbuffers::Offset<flatbuffers::String> requested_by_phrase) {
    fbb_.AddOffset(IGTask::VT_REQUESTED_BY_PHRASE, requested_by_phrase);
  }
  void add_promote_share(flatbuffers::Offset<flatbuffers::String> promote_share) {
    fbb_.AddOffset(IGTask::VT_PROMOTE_SHARE, promote_share);
  }
  void add_link_bio(flatbuffers::Offset<flatbuffers::String> link_bio) {
    fbb_.AddOffset(IGTask::VT_LINK_BIO, link_bio);
  }
  void add_is_video(bool is_video) {
    fbb_.AddElement<uint8_t>(IGTask::VT_IS_VIDEO, static_cast<uint8_t>(is_video), 0);
  }
  void add_mask(int32_t mask) {
    fbb_.AddElement<int32_t>(IGTask::VT_MASK, mask, 0);
  }
  void add_header(flatbuffers::Offset<flatbuffers::String> header) {
    fbb_.AddOffset(IGTask::VT_HEADER, header);
  }
  explicit IGTaskBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  IGTaskBuilder &operator=(const IGTaskBuilder &);
  flatbuffers::Offset<IGTask> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<IGTask>(end);
    return o;
  }
};

inline flatbuffers::Offset<IGTask> CreateIGTask(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    flatbuffers::Offset<flatbuffers::String> file_info = 0,
    flatbuffers::Offset<flatbuffers::String> time = 0,
    flatbuffers::Offset<flatbuffers::String> description = 0,
    flatbuffers::Offset<flatbuffers::String> hashtags = 0,
    flatbuffers::Offset<flatbuffers::String> requested_by = 0,
    flatbuffers::Offset<flatbuffers::String> requested_by_phrase = 0,
    flatbuffers::Offset<flatbuffers::String> promote_share = 0,
    flatbuffers::Offset<flatbuffers::String> link_bio = 0,
    bool is_video = false,
    int32_t mask = 0,
    flatbuffers::Offset<flatbuffers::String> header = 0) {
  IGTaskBuilder builder_(_fbb);
  builder_.add_header(header);
  builder_.add_mask(mask);
  builder_.add_link_bio(link_bio);
  builder_.add_promote_share(promote_share);
  builder_.add_requested_by_phrase(requested_by_phrase);
  builder_.add_requested_by(requested_by);
  builder_.add_hashtags(hashtags);
  builder_.add_description(description);
  builder_.add_time(time);
  builder_.add_file_info(file_info);
  builder_.add_id(id);
  builder_.add_is_video(is_video);
  return builder_.Finish();
}

inline flatbuffers::Offset<IGTask> CreateIGTaskDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    const char *file_info = nullptr,
    const char *time = nullptr,
    const char *description = nullptr,
    const char *hashtags = nullptr,
    const char *requested_by = nullptr,
    const char *requested_by_phrase = nullptr,
    const char *promote_share = nullptr,
    const char *link_bio = nullptr,
    bool is_video = false,
    int32_t mask = 0,
    const char *header = nullptr) {
  auto file_info__ = file_info ? _fbb.CreateString(file_info) : 0;
  auto time__ = time ? _fbb.CreateString(time) : 0;
  auto description__ = description ? _fbb.CreateString(description) : 0;
  auto hashtags__ = hashtags ? _fbb.CreateString(hashtags) : 0;
  auto requested_by__ = requested_by ? _fbb.CreateString(requested_by) : 0;
  auto requested_by_phrase__ = requested_by_phrase ? _fbb.CreateString(requested_by_phrase) : 0;
  auto promote_share__ = promote_share ? _fbb.CreateString(promote_share) : 0;
  auto link_bio__ = link_bio ? _fbb.CreateString(link_bio) : 0;
  auto header__ = header ? _fbb.CreateString(header) : 0;
  return IGData::CreateIGTask(
      _fbb,
      id,
      file_info__,
      time__,
      description__,
      hashtags__,
      requested_by__,
      requested_by_phrase__,
      promote_share__,
      link_bio__,
      is_video,
      mask,
      header__);
}

inline const IGData::IGTask *GetIGTask(const void *buf) {
  return flatbuffers::GetRoot<IGData::IGTask>(buf);
}

inline const IGData::IGTask *GetSizePrefixedIGTask(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<IGData::IGTask>(buf);
}

inline bool VerifyIGTaskBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<IGData::IGTask>(nullptr);
}

inline bool VerifySizePrefixedIGTaskBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<IGData::IGTask>(nullptr);
}

inline void FinishIGTaskBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<IGData::IGTask> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedIGTaskBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<IGData::IGTask> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace IGData

#endif  // FLATBUFFERS_GENERATED_INSTATASK_IGDATA_H_
