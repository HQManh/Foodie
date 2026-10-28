// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl.<GoHomeOnEndGame>d__99$$MoveNext
// address: 0x43994b8
// body: available
// range: 0x43994b8-0x43997a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4399794 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4399798 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x439979c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43997a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl_<GoHomeOnEndGame>d__99__MoveNext(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09517a81 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c2b18);
    FUN_03f5c2a4(&DAT_0919a7c0);
    FUN_03f5c2a4(&DAT_0919a7c8);
    FUN_03f5c2a4(&DAT_091ecb00);
    FUN_03f5c2a4(&DAT_091923e0);
    FUN_03f5c2a4(&DAT_091bdf78);
    DAT_09517a81 = 1;
  }
  lVar9 = *(long *)(param_1 + 10);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar3 = thunk_FUN_03f9944c(DAT_091923e0);
    System_Object___ctor(lVar3,0);
    plVar10 = (long *)(param_1 + 0xc);
    *plVar10 = lVar3;
    thunk_FUN_03f5d7b8(plVar10,lVar3);
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar10 + 0x10) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar9 + 0x20) != '\0') goto LAB_04399758;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined1 *)(lVar9 + 0x20) = 1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x28),0);
    auVar11 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LoadNextLevelWeather(lVar9);
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
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049bc67c(param_1 + 2,local_50,param_1,DAT_091c2b18);
      return;
    }
  }
  uVar6 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    uVar2 = local_50._8_4_;
  }
  else {
    uVar1 = local_50._12_2_;
    lVar3 = *(long *)(DAT_0919a7c0 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar7 = *(long *)uVar6;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_043996f8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar6,lVar3,0);
LAB_043996f8:
    uVar2 = (*(code *)*puVar5)(uVar6,uVar1,puVar5[1]);
  }
  lVar3 = *(long *)(param_1 + 0xc);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined4 *)(lVar3 + 0x18) = uVar2;
  uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar6,lVar3,DAT_091ecb00,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_InGame_LevelPlayLoadAndSetupControl__ShowInterOnLeaveEndGame(lVar9,3,uVar6);
LAB_04399758:
  piVar8 = param_1 + 0xc;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(piVar8,0);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

