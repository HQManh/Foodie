// rea decompile_all
// name: CakeOrder.Home.HomeBuildingFadeScale.<ConfettiRoutine>d__37$$MoveNext
// address: 0x4315664
// body: available
// range: 0x4315664-0x431575b inclusive
// range: 0x4315768-0x431584f inclusive
// range: 0x431588c-0x431589f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4315758 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4315848 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431584c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x431589c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Home_HomeBuildingFadeScale_<ConfettiRoutine>d__37__MoveNext(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long *plStack_40;
  long local_38;
  
  local_38 = param_1;
  if ((DAT_095175e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a54e8);
    FUN_03f5c2a4(&DAT_091a54f0);
    FUN_03f5c2a4(&DAT_091b2f20);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_095175e5 = 1;
  }
  plStack_40 = &local_38;
  lVar3 = *(long *)(param_1 + 0x28);
  local_48 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar4 = *(float *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_0431578c;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_0594c038(&local_98,*(long *)(param_1 + 0x20),DAT_091b2f20);
    uStack_68 = uStack_90;
    local_70 = local_98;
    uStack_58 = uStack_80;
    uStack_60 = local_88;
    local_50 = local_78;
    *(undefined8 *)(local_38 + 0x38) = uStack_90;
    *(undefined8 *)(local_38 + 0x30) = local_98;
    *(undefined8 *)(local_38 + 0x48) = uStack_80;
    *(undefined8 *)(local_38 + 0x40) = local_88;
    *(undefined8 *)(local_38 + 0x50) = local_78;
    thunk_FUN_03f5d7b8(local_38 + 0x30,0);
    fVar4 = 0.0;
    *(undefined4 *)(local_38 + 0x10) = 0xfffffffd;
    while (uVar2 = FUN_07225b78(local_38 + 0x30,DAT_091a54e8), (uVar2 & 1) != 0) {
      *(undefined8 *)(local_38 + 0x60) = *(undefined8 *)(local_38 + 0x48);
      *(undefined8 *)(local_38 + 0x58) = *(undefined8 *)(local_38 + 0x40);
      fVar5 = *(float *)(local_38 + 0x58);
      *(undefined4 *)(local_38 + 0x68) = *(undefined4 *)(local_38 + 0x50);
      param_1 = local_38;
      if (fVar4 < fVar5) {
        uVar1 = thunk_FUN_03f9944c(DAT_0918ce90);
        UnityEngine_WaitForSeconds___ctor(fVar5 - fVar4,uVar1,0);
        *(undefined8 *)(local_38 + 0x18) = uVar1;
        thunk_FUN_03f5d7b8((undefined8 *)(local_38 + 0x18),uVar1);
        uVar1 = 1;
        *(undefined4 *)(local_38 + 0x10) = 1;
        goto LAB_0431582c;
      }
LAB_0431578c:
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_Home_HomeBuildingFadeScalePart__PlayPooled
                (*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),
                 *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                 *(undefined8 *)(lVar3 + 0x90));
      *(undefined8 *)(local_38 + 0x58) = 0;
      *(undefined8 *)(local_38 + 0x60) = 0;
      *(undefined4 *)(local_38 + 0x68) = 0;
    }
    CakeOrder_Home_HomeBuildingFadeScale_<ConfettiRoutine>d__37__<>m__Finally1(local_38);
    *(undefined8 *)(local_38 + 0x50) = 0;
    *(undefined8 *)(local_38 + 0x38) = 0;
    *(undefined8 *)(local_38 + 0x30) = 0;
    *(undefined8 *)(local_38 + 0x48) = 0;
    *(undefined8 *)(local_38 + 0x40) = 0;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar3 + 0xd0) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0xd0),0);
  }
  uVar1 = 0;
LAB_0431582c:
  lVar3 = local_48;
  if (local_48 == 0) {
    return uVar1;
  }
  FUN_039b6a6c(&plStack_40);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar3);
}

