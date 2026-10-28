// rea decompile_all
// name: thunk_FUN_03f67ddc
// address: 0x74ee7f4
// body: available
// range: 0x74ee7f4-0x74ee7f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f67ddc(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 auStack_48 [2];
  ulong uStack_38;
  long lStack_28;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if (-1 < *(char *)(*(long *)(lVar8 + 8) + 9)) {
    uVar5 = FUN_03fa6f90(0);
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar5,0);
  }
  lStack_28 = 0;
  uVar5 = thunk_FUN_03faaf40(lVar8,&lStack_28);
  uVar3 = *(uint *)(lStack_28 + 8) >> 0x10;
  uVar4 = uVar3 & 0xff;
  if (uVar4 - 2 < 0xc) {
    FUN_03fbe574(lStack_28,1);
    uVar6 = thunk_FUN_03f9944c();
    uVar9 = **(undefined8 **)(lVar8 + 0x10);
    uVar2 = *(undefined1 *)(lStack_28 + 10);
    uVar7 = FUN_03f99594();
    FUN_03f936b0(uVar9,uVar2,uVar5,uVar7);
    auStack_48[0] = uVar6;
  }
  else {
    if ((0x1d < uVar4) || ((1 << (ulong)(uVar3 & 0x1f) & 0x30244000U) == 0)) {
      FUN_03f92510(auStack_48,"Attempting to get raw constant value for field of type %d",lStack_28)
      ;
      uVar1 = (ulong)auStack_48 | 1;
      if (((byte)auStack_48[0] & 1) != 0) {
        uVar1 = uStack_38;
      }
      uVar5 = FUN_03fa6f90(uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar5,0);
    }
    auStack_48[0] = 0;
    FUN_03f936b0(**(undefined8 **)(lVar8 + 0x10),uVar4,uVar5,auStack_48);
  }
  return auStack_48[0];
}

