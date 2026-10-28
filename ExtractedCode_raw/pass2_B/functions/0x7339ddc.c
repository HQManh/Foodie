// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$ReceivedLog
// address: 0x7339ddc
// body: available
// range: 0x7339ddc-0x733a1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733a1e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x733a1ec to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x733a1f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x733a1f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0733a1e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void IngameDebugConsole_DebugLogManager__ReceivedLog
               (long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char local_74 [4];
  undefined8 local_70;
  long local_68;
  long lStack_60;
  undefined8 local_58;
  long local_50;
  long lStack_48;
  undefined8 local_40;
  
  if ((DAT_09520658 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091a1c30);
    FUN_03f5c2a4(&DAT_091a1bb0);
    FUN_03f5c2a4(&DAT_091a1bc8);
    FUN_03f5c2a4(&DAT_091a1c38);
    FUN_03f5c2a4(&DAT_091a1c48);
    FUN_03f5c2a4(&DAT_091fac78);
    FUN_03f5c2a4(&DAT_091fac80);
    DAT_09520658 = 1;
  }
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_74[0] = '\0';
  if (param_4 < 2) {
    if (param_4 == 0) {
      cVar7 = *(char *)(param_1 + 0x4b);
      goto joined_r0x07339ed4;
    }
    if (param_4 == 1) goto LAB_07339eb8;
  }
  else {
    if (param_4 == 2) {
      cVar7 = *(char *)(param_1 + 0x4a);
    }
    else if (param_4 == 4) {
LAB_07339eb8:
      cVar7 = *(char *)(param_1 + 0x4c);
    }
    else {
      if (param_4 != 3) goto LAB_07339ed8;
      cVar7 = *(char *)(param_1 + 0x49);
    }
joined_r0x07339ed4:
    if (cVar7 == '\0') {
      return;
    }
  }
LAB_07339ed8:
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x74) < iVar2) {
      uVar8 = System_String__Substring(param_2,0,*(int *)(param_1 + 0x74) + -0xb,0);
      param_2 = System_String__Concat(uVar8,DAT_091fac78,0);
    }
    param_3 = 0;
  }
  else {
    iVar3 = *(int *)(param_3 + 0x10);
    iVar4 = *(int *)(param_1 + 0x74);
    if (iVar4 < iVar3 + iVar2) {
      iVar1 = iVar4;
      if (iVar4 < 0) {
        iVar1 = iVar4 + 1;
      }
      iVar1 = iVar1 >> 1;
      if (iVar2 < iVar1) {
        iVar1 = iVar4 - iVar2;
      }
      else {
        if (iVar3 < iVar1) {
          uVar8 = System_String__Substring(param_2,0,(iVar4 - iVar3) + -0xb,0);
          param_2 = System_String__Concat(uVar8,DAT_091fac78,0);
          goto LAB_07339fec;
        }
        uVar8 = System_String__Substring(param_2,0,iVar1 + -0xb,0);
        param_2 = System_String__Concat(uVar8,DAT_091fac78,0);
      }
      uVar8 = System_String__Substring(param_3,0,iVar1 + -0xc,0);
      param_3 = System_String__Concat(uVar8,DAT_091fac80,0);
    }
  }
LAB_07339fec:
  local_68 = param_2;
  thunk_FUN_03f5d7b8(&local_68,param_2);
  lStack_60 = param_3;
  thunk_FUN_03f5d7b8(&lStack_60,param_3);
  local_58 = CONCAT44(local_58._4_4_,param_4);
  if (*(long *)(param_1 + 600) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x308);
    puVar11 = (undefined4 *)(param_1 + 0x310);
    puVar10 = (undefined4 *)(param_1 + 0x314);
  }
  else {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_DateTime__get_UtcNow(0);
    uVar8 = System_DateTime__op_Addition(uVar8,*(undefined8 *)(param_1 + 0x2f8),0);
    puVar11 = (undefined4 *)(param_1 + 0x300);
    puVar10 = (undefined4 *)(param_1 + 0x304);
  }
  local_70 = *(undefined8 *)(param_1 + 0x260);
  uVar5 = *puVar11;
  uVar6 = *puVar10;
  local_74[0] = '\0';
  System_Threading_Monitor__Enter(local_70,local_74,0);
  lVar9 = *(long *)(param_1 + 0x250);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(param_1 + 0x50) <= *(int *)(lVar9 + 0x1c) + 1) {
    FUN_070ddeb4(&local_50,lVar9,DAT_091a1c38);
    if ((int)local_40 == 2) {
      *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + -1;
    }
    else if ((int)local_40 == 3) {
      *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + -1;
    }
    else {
      *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + -1;
    }
    if (*(long *)(param_1 + 600) != 0) {
      FUN_070dcbbc(*(long *)(param_1 + 600),DAT_091a1bc8);
    }
  }
  if (*(long *)(param_1 + 0x250) != 0) {
    lStack_48 = lStack_60;
    local_50 = local_68;
    local_40 = local_58;
    FUN_070ddcc4(*(long *)(param_1 + 0x250),&local_50,DAT_091a1c30);
    if (*(long *)(param_1 + 600) != 0) {
      FUN_070dc9e0(*(long *)(param_1 + 600),uVar8,CONCAT44(uVar6,uVar5),DAT_091a1bb0);
    }
    if (param_4 == 2) {
      *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
    }
    else if (param_4 == 3) {
      *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
    }
    else {
      *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
    }
    if (local_74[0] != '\0') {
      System_Threading_Monitor__Exit(local_70,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

