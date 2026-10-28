// rea decompile_all
// name: std::__ndk1::__assoc_sub_state::wait
// address: 0x3febecc
// body: available
// range: 0x3febecc-0x3febf6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__assoc_sub_state::wait() */

void __thiscall std::__ndk1::__assoc_sub_state::wait(__assoc_sub_state *this)

{
  mutex *this_00;
  uint uVar1;
  mutex *local_30;
  char local_28;
  
  this_00 = (mutex *)(this + 0x18);
  local_28 = '\x01';
  local_30 = this_00;
  mutex::lock(this_00);
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) != 0) {
      *(uint *)(this + 0x70) = uVar1 & 0xfffffff3;
      mutex::unlock(this_00);
                    /* WARNING: Could not recover jumptable at 0x03febf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x18))(this);
      return;
    }
    do {
      condition_variable::wait((condition_variable *)(this + 0x40),(unique_lock *)&local_30);
    } while (((byte)this[0x70] >> 2 & 1) == 0);
    if (local_28 == '\0') {
      return;
    }
  }
  mutex::unlock(local_30);
  return;
}

