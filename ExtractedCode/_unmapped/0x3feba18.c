// rea decompile_all
// name: std::__ndk1::__assoc_sub_state::set_value
// address: 0x3feba18
// body: available
// range: 0x3feba18-0x3febaa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3febaa0 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__assoc_sub_state::set_value() */

void __thiscall std::__ndk1::__assoc_sub_state::set_value(__assoc_sub_state *this)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    lVar2 = *(long *)(this + 0x10);
    local_28 = 0;
    exception_ptr::~exception_ptr((exception_ptr *)&local_28);
    if (lVar2 == 0) {
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 5;
      condition_variable::notify_all((condition_variable *)(this + 0x40));
      mutex::unlock((mutex *)(this + 0x18));
      return;
    }
  }
  uVar1 = FUN_03febaa4(2);
  mutex::unlock((mutex *)(this + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar1);
}

