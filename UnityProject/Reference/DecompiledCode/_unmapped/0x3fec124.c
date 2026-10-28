// rea decompile_all
// name: std::__ndk1::promise<void>::~promise
// address: 0x3fec124
// body: available
// range: 0x3fec124-0x3fec253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::promise<void>::~promise() */

void __thiscall std::__ndk1::promise<void>::~promise(promise<void> *this)

{
  logic_error *this_00;
  __assoc_sub_state *p_Var1;
  long lVar2;
  logic_error alStack_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  exception_ptr aeStack_38 [8];
  undefined8 local_18;
  
  p_Var1 = *(__assoc_sub_state **)this;
  if (p_Var1 != (__assoc_sub_state *)0x0) {
    if (((byte)p_Var1[0x70] & 1) == 0) {
      lVar2 = *(long *)(p_Var1 + 0x10);
      local_18 = 0;
      exception_ptr::~exception_ptr((exception_ptr *)&local_18);
      p_Var1 = *(__assoc_sub_state **)this;
      if ((lVar2 == 0) && (0 < *(long *)(p_Var1 + 8))) {
        FUN_03fec25c(alStack_58,4);
        this_00 = (logic_error *)__cxa_allocate_exception(0x20);
        logic_error::logic_error(this_00,alStack_58);
        *(undefined ***)this_00 = &PTR__future_error_08fa9d20;
        *(undefined8 *)(this_00 + 0x18) = uStack_40;
        *(undefined8 *)(this_00 + 0x10) = local_48;
        __cxa_throw(this_00,&future_error::typeinfo,future_error::~future_error);
        __cxa_begin_catch();
        func_0x089dc950(aeStack_38);
        __cxa_end_catch();
        __assoc_sub_state::set_exception(p_Var1,aeStack_38);
        exception_ptr::~exception_ptr(aeStack_38);
        future_error::~future_error((future_error *)alStack_58);
        p_Var1 = *(__assoc_sub_state **)this;
        lVar2 = FUN_0404c020(0xffffffffffffffff,p_Var1 + 8);
        if (lVar2 != 0) {
          return;
        }
        goto LAB_03fec22c;
      }
    }
    lVar2 = FUN_0404c020(0xffffffffffffffff,p_Var1 + 8);
    if (lVar2 == 0) {
LAB_03fec22c:
      (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
      return;
    }
  }
  return;
}

