// rea decompile_all
// name: std::__ndk1::__assoc_sub_state::copy
// address: 0x3febd54
// body: available
// range: 0x3febd54-0x3febe3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3febe38 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__assoc_sub_state::copy() */

void __thiscall std::__ndk1::__assoc_sub_state::copy(__assoc_sub_state *this)

{
  mutex *this_00;
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  exception_ptr aeStack_40 [8];
  undefined8 local_38;
  mutex *local_30;
  char local_28;
  
  this_00 = (mutex *)(this + 0x18);
  local_28 = '\x01';
  local_30 = this_00;
  mutex::lock(this_00);
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      do {
        condition_variable::wait((condition_variable *)(this + 0x40),(unique_lock *)&local_30);
      } while (((byte)this[0x70] >> 2 & 1) == 0);
    }
    else {
      *(uint *)(this + 0x70) = uVar1 & 0xfffffff3;
      mutex::unlock(this_00);
      local_28 = '\0';
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  lVar3 = *(long *)(this + 0x10);
  local_38 = 0;
  exception_ptr::~exception_ptr((exception_ptr *)&local_38);
  if (lVar3 != 0) {
    exception_ptr::exception_ptr(aeStack_40,(exception_ptr *)(this + 0x10));
    uVar2 = rethrow_exception(aeStack_40);
    exception_ptr::~exception_ptr(aeStack_40);
    if (local_28 != '\0') {
      mutex::unlock(local_30);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar2);
  }
  if (local_28 != '\0') {
    mutex::unlock(local_30);
  }
  return;
}

