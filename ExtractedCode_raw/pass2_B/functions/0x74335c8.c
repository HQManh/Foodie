// rea decompile_all
// name: System.String$$SplitOmitEmptyEntries
// address: 0x74335c8
// body: available
// range: 0x74335c8-0x743387f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7433878 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743387c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__SplitOmitEmptyEntries
               (long param_1,long param_2,uint param_3,long param_4,ulong param_5,int param_6,
               uint param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long local_70;
  ulong local_68;
  
  local_70 = param_4;
  local_68 = param_5;
  if ((DAT_09521029 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9888);
    FUN_03f5c2a4(&DAT_091b9890);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_09521029 = 1;
  }
  uVar1 = param_7;
  if ((int)param_3 < (int)param_7) {
    uVar1 = param_3 + 1;
  }
  lVar2 = FUN_03f5c394(DAT_091805f8);
  if ((int)param_3 < 1) {
    iVar8 = 0;
    uVar7 = 0;
  }
  else {
    uVar9 = 0;
    iVar8 = 0;
    uVar7 = 0;
    param_7 = param_7 - 1;
    do {
      if (*(int *)(param_1 + 0x10) <= iVar8) break;
      iVar10 = *(int *)(param_2 + uVar9 * 4);
      if (0 < iVar10 - iVar8) {
        uVar3 = System_String__Substring(param_1,iVar8);
        if (lVar2 == 0) goto LAB_0743387c;
        if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_07433878;
        lVar5 = (long)(int)uVar7;
        lVar6 = (long)(int)uVar7;
        uVar7 = uVar7 + 1;
        *(undefined8 *)(lVar2 + lVar5 * 8 + 0x20) = uVar3;
        thunk_FUN_03f5d7b8(lVar2 + 0x20 + lVar6 * 8);
        iVar10 = *(int *)(param_2 + uVar9 * 4);
      }
      uVar4 = FUN_0600e56c(&local_70,DAT_091b9888);
      iVar8 = param_6;
      if ((uVar4 & 1) == 0) {
        if ((local_68 & 0xffffffff) <= uVar9) goto LAB_07433878;
        iVar8 = *(int *)(local_70 + uVar9 * 4);
      }
      iVar8 = iVar8 + iVar10;
      if (uVar7 == param_7) {
        uVar7 = param_7;
        if ((int)uVar9 < (int)(param_3 - 1)) {
          uVar9 = uVar9 + 1;
          lVar5 = -(ulong)(param_3 - 1);
          goto LAB_0743373c;
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (param_3 != uVar9);
  }
  goto LAB_0743379c;
  while( true ) {
    uVar4 = FUN_0600e56c(&local_70,DAT_091b9888);
    iVar10 = param_6;
    if ((uVar4 & 1) == 0) {
      if ((local_68 & 0xffffffff) <= uVar9) goto LAB_07433878;
      iVar10 = *(int *)(local_70 + uVar9 * 4);
    }
    uVar9 = uVar9 + 1;
    iVar8 = iVar10 + iVar8;
    if (lVar5 + uVar9 == 1) break;
LAB_0743373c:
    if (lVar5 + uVar9 == 1) goto LAB_07433878;
    if (iVar8 != *(int *)(param_2 + uVar9 * 4)) break;
  }
LAB_0743379c:
  iVar10 = *(int *)(param_1 + 0x10) - iVar8;
  if (iVar10 != 0 && iVar8 <= *(int *)(param_1 + 0x10)) {
    uVar3 = System_String__Substring(param_1,iVar8,iVar10);
    if (lVar2 == 0) goto LAB_0743387c;
    if (*(uint *)(lVar2 + 0x18) <= uVar7) {
LAB_07433878:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar5 = (long)(int)uVar7;
    uVar7 = uVar7 + 1;
    *(undefined8 *)(lVar2 + lVar5 * 8 + 0x20) = uVar3;
    thunk_FUN_03f5d7b8();
  }
  lVar5 = lVar2;
  if ((uVar7 != uVar1) && (lVar5 = FUN_03f5c394(DAT_091805f8,uVar7), 0 < (int)uVar7)) {
    if (lVar2 == 0) {
LAB_0743387c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = 0;
    lVar6 = 0x20;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar9) goto LAB_07433878;
      if (lVar5 == 0) goto LAB_0743387c;
      if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_07433878;
      *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
      thunk_FUN_03f5d7b8(lVar5 + lVar6);
      uVar9 = uVar9 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar7 != uVar9);
  }
  return lVar5;
}

