// rea decompile_all
// name: System.DateTime$$GetDatePart
// address: 0x7594c90
// body: available
// range: 0x7594c90-0x7594e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7594e8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7594e90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTime__GetDatePart(ulong *param_1,int *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  
  if ((DAT_09521b95 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09521b95 = 1;
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar9 = (int)((*param_1 & 0x3fffffffffffc000) / 0x1c07385c89dc000);
  iVar5 = (int)((*param_1 & 0x3fffffffffffc000) / 864000000000) + iVar9 * -0x23ab1;
  iVar2 = 3;
  if (0x8eab < iVar5 - 0x23ab0U) {
    iVar2 = iVar5 / 0x8eac;
  }
  iVar5 = iVar5 + iVar2 * -0x8eac;
  iVar6 = iVar5 % 0x5b5;
  iVar3 = 3;
  if (0x16c < iVar6 - 0x5b4U) {
    iVar3 = iVar6 / 0x16d;
  }
  *param_2 = iVar3 + iVar9 * 400 + iVar2 * 100 + (iVar5 / 0x5b5) * 4 + 1;
  if ((iVar3 == 3) && ((iVar2 == 3 || (0x5b4 < iVar5 - 0x88f8U)))) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = (long *)(*(long *)(DAT_09183548 + 0xb8) + 8);
  }
  else {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = *(long **)(DAT_09183548 + 0xb8);
  }
  lVar8 = *plVar7;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = *(uint *)(lVar8 + 0x18);
  iVar6 = iVar6 + iVar3 * -0x16d;
  uVar1 = iVar6 >> 5;
  do {
    uVar10 = uVar1;
    uVar1 = uVar10 + 1;
    if (uVar4 <= uVar1) goto LAB_07594e8c;
  } while (*(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) <= iVar6);
  *param_3 = uVar1;
  if (uVar10 < uVar4) {
    *param_4 = (iVar6 - *(int *)(lVar8 + (long)(int)uVar10 * 4 + 0x20)) + 1;
    return;
  }
LAB_07594e8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

