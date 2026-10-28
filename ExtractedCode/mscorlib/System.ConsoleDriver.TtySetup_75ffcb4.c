// rea decompile_all
// name: thunk_FUN_03f7275c
// address: 0x75ffcb4
// body: available
// range: 0x75ffcb4-0x75ffcb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f7275c(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  byte abStack_80 [16];
  void *pvStack_70;
  byte abStack_68 [16];
  void *pvStack_58;
  undefined8 uStack_49;
  undefined8 uStack_41;
  undefined1 uStack_39;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    FUN_03f6321c(abStack_68,&DAT_01a45042);
  }
  else {
    FUN_03f926e8(abStack_68,param_1 + 0x14);
  }
  if (param_2 == 0) {
    FUN_03f6321c(abStack_80,&DAT_01a45042);
  }
  else {
    FUN_03f926e8(abStack_80,param_2 + 0x14);
  }
  uVar2 = FUN_03f8e5c8(abStack_68,abStack_80,&uStack_49,param_4);
  uVar3 = FUN_03f984c8(DAT_095353f0,0x11);
  FUN_03f5ef9c(param_3,uVar3);
  if ((uVar2 & 1) != 0) {
    lVar4 = *param_3;
    *(undefined1 *)(lVar4 + 0x30) = uStack_39;
    *(undefined8 *)(lVar4 + 0x28) = uStack_41;
    *(undefined8 *)(lVar4 + 0x20) = uStack_49;
  }
  if ((abStack_80[0] & 1) != 0) {
    operator_delete(pvStack_70);
  }
  if ((abStack_68[0] & 1) != 0) {
    operator_delete(pvStack_58);
  }
  if (*(long *)(lVar1 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

