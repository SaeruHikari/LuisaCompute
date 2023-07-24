#include <luisa/ir/ir.h>
namespace luisa::compute::ir_v2 {

 const VectorElementType& VectorType::element() const noexcept { return detail::from_inner_ref(_inner.element); }
 const uint32_t& VectorType::length() const noexcept { return detail::from_inner_ref(_inner.length); }
 const VectorElementType& MatrixType::element() const noexcept { return detail::from_inner_ref(_inner.element); }
 const uint32_t& MatrixType::dimension() const noexcept { return detail::from_inner_ref(_inner.dimension); }
luisa::span<const CArc < Type >> StructType::fields() const noexcept {
    return luisa::span(reinterpret_cast<const CArc < Type >*>(_inner.fields.ptr), _inner.fields.len);
}

 const size_t& StructType::alignment() const noexcept { return detail::from_inner_ref(_inner.alignment); }
 const size_t& StructType::size() const noexcept { return detail::from_inner_ref(_inner.size); }
 const CArc < Type >& ArrayType::element() const noexcept { return detail::from_inner_ref(_inner.element); }
 const size_t& ArrayType::length() const noexcept { return detail::from_inner_ref(_inner.length); }
 const CArc < Type >& Node::type_() const noexcept { return detail::from_inner_ref(_inner.type_); }
 const NodeRef& Node::next() const noexcept { return detail::from_inner_ref(_inner.next); }
 const NodeRef& Node::prev() const noexcept { return detail::from_inner_ref(_inner.prev); }
 const CArc < Instruction >& Node::instruction() const noexcept { return detail::from_inner_ref(_inner.instruction); }
 const NodeRef& PhiIncoming::value() const noexcept { return detail::from_inner_ref(_inner.value); }
 const Pooled < BasicBlock >& PhiIncoming::block() const noexcept { return detail::from_inner_ref(_inner.block); }
 const int32_t& SwitchCase::value() const noexcept { return detail::from_inner_ref(_inner.value); }
 const Pooled < BasicBlock >& SwitchCase::block() const noexcept { return detail::from_inner_ref(_inner.block); }
 const NodeRef& Instruction::Local::init() const noexcept { return detail::from_inner_ref(_inner.init); }
 const bool& Instruction::Argument::by_value() const noexcept { return detail::from_inner_ref(_inner.by_value); }
 const NodeRef& Instruction::Update::var() const noexcept { return detail::from_inner_ref(_inner.var); }
 const NodeRef& Instruction::Update::value() const noexcept { return detail::from_inner_ref(_inner.value); }
 const Pooled < BasicBlock >& Instruction::Loop::body() const noexcept { return detail::from_inner_ref(_inner.body); }
 const NodeRef& Instruction::Loop::cond() const noexcept { return detail::from_inner_ref(_inner.cond); }
 const Pooled < BasicBlock >& Instruction::GenericLoop::prepare() const noexcept { return detail::from_inner_ref(_inner.prepare); }
 const NodeRef& Instruction::GenericLoop::cond() const noexcept { return detail::from_inner_ref(_inner.cond); }
 const Pooled < BasicBlock >& Instruction::GenericLoop::body() const noexcept { return detail::from_inner_ref(_inner.body); }
 const Pooled < BasicBlock >& Instruction::GenericLoop::update() const noexcept { return detail::from_inner_ref(_inner.update); }
 const NodeRef& Instruction::If::cond() const noexcept { return detail::from_inner_ref(_inner.cond); }
 const Pooled < BasicBlock >& Instruction::If::true_branch() const noexcept { return detail::from_inner_ref(_inner.true_branch); }
 const Pooled < BasicBlock >& Instruction::If::false_branch() const noexcept { return detail::from_inner_ref(_inner.false_branch); }
 const NodeRef& Instruction::Switch::value() const noexcept { return detail::from_inner_ref(_inner.value); }
 const Pooled < BasicBlock >& Instruction::Switch::default_() const noexcept { return detail::from_inner_ref(_inner.default_); }
luisa::span<const SwitchCase> Instruction::Switch::cases() const noexcept {
    return luisa::span(reinterpret_cast<const SwitchCase*>(_inner.cases.ptr), _inner.cases.len);
}

 const Pooled < BasicBlock >& Instruction::AdScope::body() const noexcept { return detail::from_inner_ref(_inner.body); }
 const NodeRef& Instruction::RayQuery::ray_query() const noexcept { return detail::from_inner_ref(_inner.ray_query); }
 const Pooled < BasicBlock >& Instruction::RayQuery::on_triangle_hit() const noexcept { return detail::from_inner_ref(_inner.on_triangle_hit); }
 const Pooled < BasicBlock >& Instruction::RayQuery::on_procedural_hit() const noexcept { return detail::from_inner_ref(_inner.on_procedural_hit); }
 const NodeRef& BasicBlock::first() const noexcept { return detail::from_inner_ref(_inner.first); }
 const NodeRef& BasicBlock::last() const noexcept { return detail::from_inner_ref(_inner.last); }
 const ModuleKind& Module::kind() const noexcept { return detail::from_inner_ref(_inner.kind); }
 const Pooled < BasicBlock >& Module::entry() const noexcept { return detail::from_inner_ref(_inner.entry); }
 const CArc < ModulePools >& Module::pools() const noexcept { return detail::from_inner_ref(_inner.pools); }
 const Module& CallableModule::module() const noexcept { return detail::from_inner_ref(_inner.module); }
 const CArc < Type >& CallableModule::ret_type() const noexcept { return detail::from_inner_ref(_inner.ret_type); }
luisa::span<const NodeRef> CallableModule::args() const noexcept {
    return luisa::span(reinterpret_cast<const NodeRef*>(_inner.args.ptr), _inner.args.len);
}

luisa::span<const Capture> CallableModule::captures() const noexcept {
    return luisa::span(reinterpret_cast<const Capture*>(_inner.captures.ptr), _inner.captures.len);
}

luisa::span<const CallableModuleRef> CallableModule::callables() const noexcept {
    return luisa::span(reinterpret_cast<const CallableModuleRef*>(_inner.callables.ptr), _inner.callables.len);
}

luisa::span<const CArc < CpuCustomOp >> CallableModule::cpu_custom_ops() const noexcept {
    return luisa::span(reinterpret_cast<const CArc < CpuCustomOp >*>(_inner.cpu_custom_ops.ptr), _inner.cpu_custom_ops.len);
}

 const CArc < ModulePools >& CallableModule::pools() const noexcept { return detail::from_inner_ref(_inner.pools); }
 const uint64_t& BufferBinding::handle() const noexcept { return detail::from_inner_ref(_inner.handle); }
 const uint64_t& BufferBinding::offset() const noexcept { return detail::from_inner_ref(_inner.offset); }
 const size_t& BufferBinding::size() const noexcept { return detail::from_inner_ref(_inner.size); }
 const uint64_t& TextureBinding::handle() const noexcept { return detail::from_inner_ref(_inner.handle); }
 const uint32_t& TextureBinding::level() const noexcept { return detail::from_inner_ref(_inner.level); }
 const uint64_t& BindlessArrayBinding::handle() const noexcept { return detail::from_inner_ref(_inner.handle); }
 const uint64_t& AccelBinding::handle() const noexcept { return detail::from_inner_ref(_inner.handle); }
 const NodeRef& Capture::node() const noexcept { return detail::from_inner_ref(_inner.node); }
 const Binding& Capture::binding() const noexcept { return detail::from_inner_ref(_inner.binding); }
 const Module& KernelModule::module() const noexcept { return detail::from_inner_ref(_inner.module); }
luisa::span<const Capture> KernelModule::captures() const noexcept {
    return luisa::span(reinterpret_cast<const Capture*>(_inner.captures.ptr), _inner.captures.len);
}

luisa::span<const NodeRef> KernelModule::args() const noexcept {
    return luisa::span(reinterpret_cast<const NodeRef*>(_inner.args.ptr), _inner.args.len);
}

luisa::span<const NodeRef> KernelModule::shared() const noexcept {
    return luisa::span(reinterpret_cast<const NodeRef*>(_inner.shared.ptr), _inner.shared.len);
}

luisa::span<const CArc < CpuCustomOp >> KernelModule::cpu_custom_ops() const noexcept {
    return luisa::span(reinterpret_cast<const CArc < CpuCustomOp >*>(_inner.cpu_custom_ops.ptr), _inner.cpu_custom_ops.len);
}

luisa::span<const CallableModuleRef> KernelModule::callables() const noexcept {
    return luisa::span(reinterpret_cast<const CallableModuleRef*>(_inner.callables.ptr), _inner.callables.len);
}

 const std::array<uint32_t, 3>& KernelModule::block_size() const noexcept { return detail::from_inner_ref(_inner.block_size); }
 const CArc < ModulePools >& KernelModule::pools() const noexcept { return detail::from_inner_ref(_inner.pools); }
 const Module& BlockModule::module() const noexcept { return detail::from_inner_ref(_inner.module); }
 const Pooled < BasicBlock >& IrBuilder::bb() const noexcept { return detail::from_inner_ref(_inner.bb); }
 const CArc < ModulePools >& IrBuilder::pools() const noexcept { return detail::from_inner_ref(_inner.pools); }
 const NodeRef& IrBuilder::insert_point() const noexcept { return detail::from_inner_ref(_inner.insert_point); }
}