// rea decompile_all
// name: thunk_FUN_03f6ac9c
// address: 0x75fba44
// body: available
// range: 0x75fba44-0x75fba47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f6ac9c(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [32];
  byte abStack_128 [16];
  void *pvStack_118;
  undefined1 auStack_110 [48];
  byte bStack_e0;
  undefined1 auStack_df [15];
  undefined1 *puStack_d0;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  FUN_03fb728c(auStack_110);
  FUN_03f926e8(abStack_128,param_2 + 0x14);
  FUN_03fb5cac(auStack_148,abStack_128,auStack_110,0);
  uVar3 = FUN_03fb40a0(auStack_148);
  if ((uVar3 & 1) != 0) {
    puVar1 = auStack_df;
    if ((bStack_e0 & 1) != 0) {
      puVar1 = puStack_d0;
    }
    lVar4 = FUN_03f986a4(puVar1);
    if (lVar4 != 0) {
      uVar5 = FUN_03f9a678();
      goto LAB_03f6ad1c;
    }
  }
  uVar5 = 0;
LAB_03f6ad1c:
  if ((abStack_128[0] & 1) != 0) {
    operator_delete(pvStack_118);
  }
  FUN_03fb72c4(auStack_110);
  if (*(long *)(lVar2 + 0x28) == lStack_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

