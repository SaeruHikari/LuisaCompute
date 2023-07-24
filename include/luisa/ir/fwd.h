#pragma once
#include <luisa/core/dll_export.h>
#include <luisa/rust/ir.hpp>
namespace luisa::compute::ir_v2 {
namespace raw = luisa::compute::ir;
using raw::CArc;
using raw::CBoxedSlice;
using raw::Pooled;
using raw::ModulePools;
using raw::NodeRef;
using raw::CallableModuleRef;
using raw::CpuCustomOp;
namespace detail {
template<class T>
struct FromInnerRef {
    using Output = T;
    static const FromInnerRef::Output & from(const T & _inner) noexcept {
        return reinterpret_cast<const T &>(_inner);
    }
};
template<class T, size_t N>
struct FromInnerRef<T[N]> {
    using E = std::remove_extent_t<T>;
    using Output = std::array<E, N>;
    using A = T[N];
    static const Output & from(const A&_inner) noexcept {
        return reinterpret_cast<const Output &>(_inner);
    }
};
template<class T>
const typename FromInnerRef<T>::Output& from_inner_ref(const T & _inner) noexcept {
    return FromInnerRef<T>::from(_inner);
}
}

class VectorElementType;
class VectorType;
class MatrixType;
class StructType;
class ArrayType;
class Type;
class Node;
class Func;
class Const;
class PhiIncoming;
class SwitchCase;
class Instruction;
class BasicBlock;
class Module;
class CallableModule;
class BufferBinding;
class TextureBinding;
class BindlessArrayBinding;
class AccelBinding;
class Binding;
class Capture;
class KernelModule;
class BlockModule;
class IrBuilder;
}