// rea decompile_all
// name: System.String$$SplitKeepEmptyEntries
// address: 0x74333e4
// body: available
// range: 0x74333e4-0x74335c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74335c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74335c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__SplitKeepEmptyEntries
               (long param_1,long param_2,uint param_3,long param_4,ulong param_5,int param_6,
               int param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long local_70;
  ulong local_68;
  
  local_70 = param_4;
  local_68 = param_5;
  if ((DAT_09521028 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9888);
    FUN_03f5c2a4(&DAT_091b9890);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_09521028 = 1;
  }
  uVar1 = param_7 - 1U;
  if ((int)param_3 <= (int)(param_7 - 1U)) {
    uVar1 = param_3;
  }
  lVar3 = FUN_03f5c394(DAT_091805f8,uVar1 + 1);
  if ((int)uVar1 < 1) {
    uVar7 = 0;
    iVar6 = 0;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    iVar6 = 0;
    do {
      if (*(int *)(param_1 + 0x10) <= iVar6) goto LAB_07433520;
      if (param_3 == uVar8) goto LAB_074335c0;
      uVar4 = System_String__Substring(param_1,iVar6,*(int *)(param_2 + uVar8 * 4) - iVar6);
      if (lVar3 == 0) goto LAB_074335c4;
      if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_074335c0;
      *(undefined8 *)(lVar3 + 0x20 + uVar8 * 8) = uVar4;
      thunk_FUN_03f5d7b8(lVar3 + 0x20 + lVar9,uVar4);
      iVar2 = *(int *)(param_2 + uVar8 * 4);
      uVar5 = FUN_0600e56c(&local_70,DAT_091b9888);
      iVar6 = param_6;
      if ((uVar5 & 1) == 0) {
        if ((local_68 & 0xffffffff) <= uVar8) goto LAB_074335c0;
        iVar6 = *(int *)(local_70 + uVar8 * 4);
      }
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + iVar2;
      lVar9 = lVar9 + 8;
    } while (uVar1 != uVar8);
    uVar8 = (ulong)uVar1;
LAB_07433520:
    uVar7 = (uint)uVar8;
  }
  if (((int)uVar1 < 0) ||
     (iVar2 = *(int *)(param_1 + 0x10) - iVar6, iVar2 == 0 || *(int *)(param_1 + 0x10) < iVar6)) {
    if (uVar7 != uVar1) {
      return lVar3;
    }
    if (lVar3 == 0) {
LAB_074335c4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_074335c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar4 = **(undefined8 **)(DAT_09535468 + 0xb8);
    uVar7 = uVar1;
  }
  else {
    uVar4 = System_String__Substring(param_1,iVar6,iVar2);
    if (lVar3 == 0) goto LAB_074335c4;
    if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_074335c0;
  }
  *(undefined8 *)(lVar3 + (long)(int)uVar7 * 8 + 0x20) = uVar4;
  thunk_FUN_03f5d7b8();
  return lVar3;
}

