// rea decompile_all
// name: DG.Tweening.DOTweenModulePhysics2D$$DOJump
// address: 0x4551010
// body: available
// range: 0x4551010-0x4551427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4551424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
DG_Tweening_DOTweenModulePhysics2D__DOJump
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined8 param_5
          ,int param_6,uint param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((DAT_095187a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e28);
    FUN_03f5c2a4(&DAT_09175e78);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbda8);
    FUN_03f5c2a4(&DAT_091dbe08);
    FUN_03f5c2a4(&DAT_091dbec0);
    FUN_03f5c2a4(&DAT_091dbee0);
    FUN_03f5c2a4(&DAT_091dbf48);
    FUN_03f5c2a4(&DAT_091dbf50);
    FUN_03f5c2a4(&DAT_091dbfd8);
    FUN_03f5c2a4(&DAT_091e8598);
    FUN_03f5c2a4(&DAT_091e85a0);
    FUN_03f5c2a4(&DAT_091e85a8);
    FUN_03f5c2a4(&DAT_091e85b0);
    FUN_03f5c2a4(&DAT_091e85b8);
    FUN_03f5c2a4(&DAT_091e85c0);
    FUN_03f5c2a4(&DAT_0918fb00);
    DAT_095187a0 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918fb00);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_5;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),param_5);
    lVar2 = DAT_09183190;
    *(undefined4 *)(lVar3 + 0x30) = param_1;
    *(undefined4 *)(lVar3 + 0x34) = param_2;
    *(undefined4 *)(lVar3 + 0x18) = 0;
    iVar1 = *(int *)(lVar2 + 0xe4);
    *(undefined4 *)(lVar3 + 0x20) = 0xbf800000;
    *(undefined1 *)(lVar3 + 0x1c) = 0;
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    if (param_6 < 2) {
      param_6 = 1;
    }
    uVar4 = DG_Tweening_DOTween__Sequence(0);
    puVar6 = (undefined8 *)(lVar3 + 0x28);
    *puVar6 = uVar4;
    thunk_FUN_03f5d7b8(puVar6,uVar4);
    uVar4 = thunk_FUN_03f9944c(DAT_09175e28);
    FUN_06dfb464(uVar4,lVar3,DAT_091e8598,0);
    uVar5 = thunk_FUN_03f9944c(DAT_09175e78);
    FUN_06dfc608(uVar5,lVar3,DAT_091e85a0,0);
    uVar4 = DG_Tweening_DOTween__To(0,param_3,param_4 / (float)(param_6 << 1),uVar4,uVar5,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetOptions(uVar4,4,param_7 & 1,0);
    uVar4 = FUN_04d95e8c(uVar4,6,DAT_091dbee0);
    uVar4 = FUN_04d9637c(uVar4,DAT_091dbf50);
    uVar4 = FUN_04d962f4(uVar4,param_6 << 1,1,DAT_091dbf48);
    uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar5,lVar3,DAT_091e85a8,0);
    uVar4 = FUN_04d95798(uVar4,uVar5,DAT_091dbda8);
    puVar7 = (undefined8 *)(lVar3 + 0x38);
    *puVar7 = uVar4;
    thunk_FUN_03f5d7b8(puVar7,uVar4);
    uVar8 = *puVar6;
    uVar4 = thunk_FUN_03f9944c(DAT_09175e28);
    FUN_06dfb464(uVar4,lVar3,DAT_091e85b0,0);
    uVar5 = thunk_FUN_03f9944c(DAT_09175e78);
    FUN_06dfc608(uVar5,lVar3,DAT_091e85b8,0);
    uVar4 = DG_Tweening_DOTween__To(*(undefined4 *)(lVar3 + 0x30),0,param_4,uVar4,uVar5,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetOptions(uVar4,2,param_7 & 1,0);
    uVar4 = FUN_04d95e8c(uVar4,1,DAT_091dbee0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Append(uVar8,uVar4,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Join(uVar4,*puVar7,0);
    uVar4 = FUN_04d9642c(uVar4,*(undefined8 *)(lVar3 + 0x10),DAT_091dbfd8);
    FUN_04d95e8c(uVar4,*(undefined4 *)(*(long *)(DAT_09183190 + 0xb8) + 0x54),DAT_091dbec0);
    uVar5 = *puVar7;
    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar4,lVar3,DAT_091e85c0,0);
    FUN_04d957f0(uVar5,uVar4,DAT_091dbe08);
    return *puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

