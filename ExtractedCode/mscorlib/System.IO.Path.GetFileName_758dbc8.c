// rea decompile_all
// name: System.IO.Path$$GetFileName
// address: 0x758dbc8
// body: available
// range: 0x758dbc8-0x758dd2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758dce4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758dd28 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758dd2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_IO_Path__GetFileName(long param_1,ulong param_2)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_09521b4a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521b4a = 1;
  }
  uVar5 = System_String__CreateString(0,param_1,param_2,0);
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188f20);
  }
  lVar6 = System_IO_Path__GetPathRoot(uVar5);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = *(int *)(lVar6 + 0x10);
  uVar3 = (uint)param_2;
  lVar6 = 0;
  lVar4 = param_2 << 0x20;
  do {
    lVar10 = lVar4;
    lVar9 = lVar6;
    uVar8 = (uVar3 - 1) + (int)lVar9;
    if ((int)uVar8 < 0) goto LAB_0758dd04;
    if ((int)uVar8 < iVar1) break;
    if (uVar3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar2 = *(undefined2 *)(param_1 + (((param_2 & 0xffffffff) - 1) + lVar9 & 0xffffffff) * 2);
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = System_IO_Path__IsDirectorySeparator(uVar2);
    lVar6 = lVar9 + -1;
    lVar4 = lVar10 + -0x100000000;
  } while ((uVar7 & 1) == 0);
  if (uVar3 < uVar3 + (int)lVar9) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  param_1 = param_1 + (lVar10 >> 0x1f);
  param_2 = -lVar9;
LAB_0758dd04:
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}

