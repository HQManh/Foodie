// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl.<StartPlayNextLevel>d__95$$MoveNext
// address: 0x42862e8
// body: available
// range: 0x42862e8-0x428659f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4286588 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428658c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4286590 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4286594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4286598 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x428659c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl_<StartPlayNextLevel>d__95__MoveNext(int *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09517142 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2b20);
    FUN_03f5c2a4(&DAT_0919a7c0);
    FUN_03f5c2a4(&DAT_0919a7c8);
    FUN_03f5c2a4(&DAT_091923f0);
    FUN_03f5c2a4(&DAT_091bdf78);
    DAT_09517142 = 1;
  }
  lVar10 = *(long *)(param_1 + 10);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = ZEXT816(0);
    if (*(long *)(lVar10 + 0x48) == 0) goto LAB_04286560;
    auVar11 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LoadNextLevelWeather(lVar10,0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bdf78 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar11;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar4 = FUN_0429cb44(local_50,DAT_0919a7c8);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049bc8ec(param_1 + 2,local_50,param_1,DAT_091c2b20);
      return;
    }
  }
  uVar7 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    uVar3 = local_50._8_4_;
  }
  else {
    uVar2 = local_50._12_2_;
    lVar5 = *(long *)(DAT_0919a7c0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar8 = *(long *)uVar7;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_042864b8;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar7,lVar5,0);
LAB_042864b8:
    uVar3 = (*(code *)*puVar6)(uVar7,uVar2,puVar6[1]);
  }
  lVar5 = thunk_FUN_03f9944c(DAT_091923f0);
  CakeOrder_InGame_LevelPlayLoadAndSetupControl_MainLevelPlayConfig___ctor(lVar5,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(undefined4 *)(*(long *)(lVar10 + 0x30) + 0x20);
  *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar10 + 0x48);
  *(undefined4 *)(lVar5 + 0x10) = uVar1;
  thunk_FUN_03f5d7b8();
  lVar8 = *(long *)(lVar10 + 0x30);
  *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar10 + 0x50);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *(long *)(lVar8 + 0x28);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = CakeOrder_SceneTransitionBehaviourWeather__CreateCustomDataChangeNight
                    (*(undefined4 *)(lVar8 + 0x10),uVar3,0);
  *(undefined8 *)(lVar5 + 0x28) = uVar7;
  thunk_FUN_03f5d7b8();
  auVar11 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__PlayLevel(lVar10,lVar5,0);
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar11._0_8_,auVar11._8_8_,0);
  auVar11 = local_50;
LAB_04286560:
  *param_1 = -2;
  local_50 = auVar11;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

