// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$ProcessLog
// address: 0x733bfe8
// body: available
// range: 0x733bfe8-0x733c427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733c420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x733c424 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__ProcessLog
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_58;
  
  if ((DAT_0952065a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183670);
    FUN_03f5c2a4(&DAT_0919c9b8);
    FUN_03f5c2a4(&DAT_0919c9c0);
    FUN_03f5c2a4(&DAT_091a1bb0);
    FUN_03f5c2a4(&DAT_091a1b68);
    FUN_03f5c2a4(&DAT_091a1b88);
    FUN_03f5c2a4(&DAT_091a1b98);
    FUN_03f5c2a4(&DAT_091a1be0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bafb0);
    FUN_03f5c2a4(&DAT_091bafc0);
    DAT_0952065a = 1;
  }
  lVar5 = *(long *)(param_1 + 0x2c0);
  local_58 = 0;
  if (lVar5 == 0) goto LAB_0733c420;
  uVar1 = *(uint *)(param_2 + 2);
  if (*(int *)(lVar5 + 0x18) < 1) {
    lVar5 = thunk_FUN_03f9944c(DAT_09183670);
    System_Object___ctor(lVar5,0);
  }
  else {
    lVar5 = FUN_061a18e8(lVar5,DAT_091bafb0);
  }
  if (lVar5 == 0) goto LAB_0733c420;
  IngameDebugConsole_DebugLogEntry__Initialize(lVar5,*param_2,param_2[1]);
  if (*(long *)(param_1 + 0x220) == 0) goto LAB_0733c420;
  uVar3 = FUN_06fd9fbc(*(long *)(param_1 + 0x220),lVar5,&local_58,DAT_0919c9b8);
  if ((uVar3 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0xa0);
    if (lVar6 == 0) goto LAB_0733c420;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
    thunk_FUN_03f5d7b8();
    uVar9 = DAT_091a1b68;
    lVar6 = *(long *)(param_1 + 0x210);
    if (lVar6 == 0) goto LAB_0733c420;
    *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)(lVar6 + 0x1c);
    FUN_070dd31c(lVar6,lVar5,uVar9);
    if (*(long *)(param_1 + 0x220) == 0) goto LAB_0733c420;
    FUN_06fd8440(*(long *)(param_1 + 0x220),lVar5,lVar5,DAT_0919c9c0);
    if (*(long *)(param_1 + 0x218) != 0) {
      FUN_070dc9e0(*(long *)(param_1 + 0x218),param_3,param_4,DAT_091a1bb0);
    }
  }
  else {
    IngameDebugConsole_DebugLogManager__PoolLogEntry(param_1,lVar5);
    lVar5 = local_58;
    if (local_58 == 0) goto LAB_0733c420;
    lVar6 = *(long *)(param_1 + 0x218);
    *(int *)(local_58 + 0x30) = *(int *)(local_58 + 0x30) + 1;
    if (lVar6 != 0) {
      FUN_070dc7cc(lVar6,*(undefined4 *)(local_58 + 0x34),param_3,param_4,DAT_091a1be0);
    }
  }
  if (*(long *)(param_1 + 0x228) == 0) goto LAB_0733c420;
  FUN_070dd31c(*(long *)(param_1 + 0x228),lVar5,DAT_091a1b68);
  if (*(long *)(param_1 + 0x230) != 0) {
    FUN_070dc9e0(*(long *)(param_1 + 0x230),param_3,param_4,DAT_091a1bb0);
  }
  if (*(char *)(param_1 + 500) == '\0' || ((uVar3 ^ 0xffffffff) & 1) != 0) {
    uVar9 = *(undefined8 *)(lVar5 + 0x28);
    if ((*(char *)(param_1 + 0x208) == '\0') ||
       (uVar7 = IngameDebugConsole_QueuedDebugLogEntry__MatchesSearchTerm
                          (param_2,*(undefined8 *)(param_1 + 0x200)), (uVar7 & 1) != 0)) {
      if (*(int *)(param_1 + 0x1f8) != 7) {
        uVar8 = *(undefined8 *)(param_1 + 0x88);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar9,uVar8,0);
        if (((uVar7 & 1) == 0) || ((*(byte *)(param_1 + 0x1f8) & 1) == 0)) {
          uVar8 = *(undefined8 *)(param_1 + 0x90);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar9,uVar8,0);
          if (((uVar7 & 1) == 0) || ((*(byte *)(param_1 + 0x1f8) >> 1 & 1) == 0)) {
            uVar8 = *(undefined8 *)(param_1 + 0x98);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = UnityEngine_Object__op_Equality(uVar9,uVar8,0);
            if (((uVar7 & 1) == 0) || ((*(byte *)(param_1 + 0x1f8) >> 2 & 1) == 0))
            goto LAB_0733c3e4;
          }
        }
      }
      if (*(long *)(param_1 + 0x238) == 0) {
LAB_0733c420:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_070dd31c(*(long *)(param_1 + 0x238),lVar5,DAT_091a1b68);
      if (*(long *)(param_1 + 0x238) == 0) goto LAB_0733c420;
      iVar4 = *(int *)(*(long *)(param_1 + 0x238) + 0x1c) + -1;
      if (*(long *)(param_1 + 0x240) != 0) {
        FUN_070dc9e0(*(long *)(param_1 + 0x240),param_3,param_4,DAT_091a1bb0);
      }
      *(undefined1 *)(param_1 + 0x24c) = 1;
      goto LAB_0733c3e8;
    }
  }
  else if ((*(char *)(param_1 + 0x1d0) != '\0') || (*(long *)(param_1 + 0x240) != 0)) {
    if ((*(char *)(param_1 + 0x208) == '\0') && (*(int *)(param_1 + 0x1f8) == 7)) {
      iVar4 = *(int *)(lVar5 + 0x34);
    }
    else {
      if (*(long *)(param_1 + 0x238) == 0) goto LAB_0733c420;
      iVar4 = FUN_070dd850(*(long *)(param_1 + 0x238),lVar5,DAT_091a1b88);
    }
    if (-1 < iVar4) {
      if (*(long *)(param_1 + 0x240) != 0) {
        FUN_070dc7cc(*(long *)(param_1 + 0x240),iVar4,param_3,param_4,DAT_091a1be0);
      }
      if (*(char *)(param_1 + 0x1d0) != '\0') {
        if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_0733c420;
        IngameDebugConsole_DebugLogRecycledListView__OnCollapsedLogEntryAtIndexUpdated
                  (*(long *)(param_1 + 0x1c8),iVar4);
      }
    }
    goto LAB_0733c3e8;
  }
LAB_0733c3e4:
  iVar4 = -1;
LAB_0733c3e8:
  iVar2 = *(int *)(param_1 + 0x268) + -1;
  if (((0 < *(int *)(param_1 + 0x268)) && (*(int *)(param_1 + 0x268) = iVar2, iVar2 == 0)) &&
     (-1 < iVar4)) {
    *(int *)(param_1 + 0x248) = iVar4;
  }
  return;
}

