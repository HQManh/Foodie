// rea decompile_all
// name: FUN_03f96960
// address: 0x3f96960
// body: available
// range: 0x3f96960-0x3f96a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f96960(long param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_38;
  undefined4 local_30 [2];
  long local_28;
  
  if (lRam0000000009534fa8 == 0) {
    pvVar1 = operator_new(0x88);
    FUN_03f96a30();
    lVar2 = FUN_0404be00(0,pvVar1,0x9534fa8);
    DataMemoryBarrier(2,3);
    if (lVar2 != 0) {
      FUN_03f96a88(pvVar1);
      operator_delete(pvVar1);
    }
  }
  local_30[0] = *(undefined4 *)(param_1 + 0x10);
  local_28 = param_1 + 0x14;
  local_38 = 0;
  uVar3 = FUN_03f96ac8(lRam0000000009534fa8,local_30,&local_38);
  if ((uVar3 & 1) == 0) {
    local_28 = FUN_03f92aa4(param_1);
    local_38 = FUN_03f96bcc(lRam0000000009534fa8,local_30,param_1);
  }
  return local_38;
}

