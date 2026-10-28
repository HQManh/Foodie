// rea decompile_all
// name: System.Threading.CancellationTokenSource$$InternalRegister
// address: 0x761a80c
// body: available
// range: 0x761a80c-0x761ab07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761ab00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761ab04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_CancellationTokenSource__InternalRegister
               (long *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
               undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long local_78;
  undefined1 auStack_70 [16];
  
  if ((DAT_09522106 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182338);
    FUN_03f5c2a4(&DAT_09182368);
    FUN_03f5c2a4(&DAT_0917fa88);
    FUN_03f5c2a4(&DAT_091bae58);
    FUN_03f5c2a4(&DAT_091bae50);
    FUN_03f5c2a4(&DAT_0917e7f8);
    FUN_03f5c2a4(&DAT_0918eb00);
    DAT_09522106 = 1;
  }
  iVar4 = *(int *)(param_2 + 0x20);
  local_78 = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  thunk_FUN_03f6a5cc();
  if (iVar4 < 2) {
    if (*(char *)(param_2 + 0x28) != '\0') goto LAB_0761a8e4;
    iVar4 = System_Environment__get_CurrentManagedThreadId(0);
    if (*(int *)(DAT_09182368 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182368);
    }
    iVar1 = *(int *)(*(long *)(DAT_09182368 + 0xb8) + 0x10);
    if (param_5 == 0) {
      lVar5 = thunk_FUN_03f9944c(DAT_09182338);
      System_Threading_CancellationCallbackInfo___ctor(lVar5,param_3,param_4,param_6,param_2);
    }
    else {
      lVar5 = thunk_FUN_03f9944c(DAT_0918eb00);
      System_Threading_CancellationCallbackInfo___ctor(lVar5,param_3,param_4,param_6,param_2);
      *(long *)(lVar5 + 0x30) = param_5;
      thunk_FUN_03f5d7b8((long *)(lVar5 + 0x30),param_5);
    }
    lVar11 = *(long *)(param_2 + 0x18);
    thunk_FUN_03f6a5cc();
    if (lVar11 == 0) {
      if (*(int *)(DAT_09182368 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = FUN_03f5c394(DAT_0917fa88,*(undefined4 *)(*(long *)(DAT_09182368 + 0xb8) + 0x10));
      thunk_FUN_03f6a5cc();
      lVar6 = FUN_03f955cc((long *)(param_2 + 0x18),lVar11,0);
      if (lVar6 != 0) {
        lVar11 = lVar6;
      }
      if (lVar11 == 0) goto LAB_0761ab00;
    }
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar4 / iVar1;
    }
    uVar2 = iVar4 - iVar3 * iVar1;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_0761ab04;
    lVar6 = lVar11 + (long)(int)uVar2 * 8;
    plVar9 = (long *)(lVar6 + 0x20);
    lVar10 = *plVar9;
    thunk_FUN_03f6a5cc();
    if (lVar10 == 0) {
      uVar7 = thunk_FUN_03f9944c(DAT_0917e7f8);
      FUN_0619a420(uVar7,4,DAT_091bae50);
      if (*(uint *)(lVar11 + 0x18) <= uVar2) {
LAB_0761ab04:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      FUN_03f955cc(plVar9,uVar7,0);
      if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_0761ab04;
      lVar10 = *(long *)(lVar6 + 0x20);
      if (lVar10 == 0) goto LAB_0761ab00;
    }
    auVar12 = FUN_0619a4c8(lVar10,lVar5,DAT_091bae58);
    local_78 = lVar5;
    thunk_FUN_03f5d7b8(&local_78,lVar5);
    auStack_70 = auVar12;
    thunk_FUN_03f5d7b8(auStack_70,0);
    iVar4 = *(int *)(param_2 + 0x20);
    thunk_FUN_03f6a5cc();
    if (iVar4 < 2) {
LAB_0761aaec:
      param_1[1] = auStack_70._0_8_;
      *param_1 = local_78;
      param_1[2] = auStack_70._8_8_;
      return;
    }
    uVar8 = System_Threading_CancellationTokenRegistration__Unregister(&local_78);
    if ((uVar8 & 1) == 0) goto LAB_0761aaec;
  }
  if (param_3 == 0) {
LAB_0761ab00:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(param_3 + 0x18))
            (*(undefined8 *)(param_3 + 0x40),param_4,*(undefined8 *)(param_3 + 0x28));
LAB_0761a8e4:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

