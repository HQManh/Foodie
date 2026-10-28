// rea decompile_all
// name: DG.Tweening.DOTweenModulePhysics$$DOJump
// address: 0x454f818
// body: available
// range: 0x454f818-0x454fcfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x454fcf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
DG_Tweening_DOTweenModulePhysics__DOJump
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5
          ,undefined8 param_6,int param_7,uint param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((DAT_09518795 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e30);
    FUN_03f5c2a4(&DAT_09175e80);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091d8040);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbda8);
    FUN_03f5c2a4(&DAT_091dbe08);
    FUN_03f5c2a4(&DAT_091dbec0);
    FUN_03f5c2a4(&DAT_091dbee0);
    FUN_03f5c2a4(&DAT_091dbf48);
    FUN_03f5c2a4(&DAT_091dbf50);
    FUN_03f5c2a4(&DAT_091dbfd8);
    FUN_03f5c2a4(&DAT_091e8530);
    FUN_03f5c2a4(&DAT_091e8538);
    FUN_03f5c2a4(&DAT_091e8540);
    FUN_03f5c2a4(&DAT_091e8548);
    FUN_03f5c2a4(&DAT_091e8550);
    FUN_03f5c2a4(&DAT_0918fac0);
    DAT_09518795 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918fac0);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),param_6);
    lVar2 = DAT_09183190;
    *(undefined4 *)(lVar3 + 0x30) = param_1;
    *(undefined4 *)(lVar3 + 0x34) = param_2;
    *(undefined4 *)(lVar3 + 0x38) = param_3;
    iVar1 = *(int *)(lVar2 + 0xe4);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(undefined4 *)(lVar3 + 0x20) = 0xbf800000;
    *(undefined1 *)(lVar3 + 0x1c) = 0;
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    if (param_7 < 2) {
      param_7 = 1;
    }
    uVar4 = DG_Tweening_DOTween__Sequence(0);
    puVar9 = (undefined8 *)(lVar3 + 0x28);
    *puVar9 = uVar4;
    thunk_FUN_03f5d7b8(puVar9,uVar4);
    uVar4 = thunk_FUN_03f9944c(DAT_09175e30);
    FUN_06dfb558(uVar4,lVar3,DAT_091e8530,0);
    uVar7 = *(undefined8 *)(lVar3 + 0x10);
    uVar5 = thunk_FUN_03f9944c(DAT_09175e80);
    FUN_06dfc74c(uVar5,uVar7,DAT_091d8040,0);
    uVar4 = DG_Tweening_DOTween__To(0,param_4,0,param_5 / (float)(param_7 << 1),uVar4,uVar5,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetOptions(uVar4,4,param_8 & 1,0);
    uVar4 = FUN_04d95e8c(uVar4,6,DAT_091dbee0);
    uVar4 = FUN_04d9637c(uVar4,DAT_091dbf50);
    uVar4 = FUN_04d962f4(uVar4,param_7 << 1,1,DAT_091dbf48);
    uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar5,lVar3,DAT_091e8538,0);
    uVar4 = FUN_04d95798(uVar4,uVar5,DAT_091dbda8);
    puVar6 = (undefined8 *)(lVar3 + 0x40);
    *puVar6 = uVar4;
    thunk_FUN_03f5d7b8(puVar6,uVar4);
    uVar7 = *puVar9;
    uVar4 = thunk_FUN_03f9944c(DAT_09175e30);
    FUN_06dfb558(uVar4,lVar3,DAT_091e8540,0);
    uVar8 = *(undefined8 *)(lVar3 + 0x10);
    uVar5 = thunk_FUN_03f9944c(DAT_09175e80);
    FUN_06dfc74c(uVar5,uVar8,DAT_091d8040,0);
    uVar4 = DG_Tweening_DOTween__To(*(undefined4 *)(lVar3 + 0x30),0,0,param_5,uVar4,uVar5,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetOptions(uVar4,2,param_8 & 1,0);
    uVar4 = FUN_04d95e8c(uVar4,1,DAT_091dbee0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Append(uVar7,uVar4,0);
    uVar5 = thunk_FUN_03f9944c(DAT_09175e30);
    FUN_06dfb558(uVar5,lVar3,DAT_091e8548,0);
    uVar8 = *(undefined8 *)(lVar3 + 0x10);
    uVar7 = thunk_FUN_03f9944c(DAT_09175e80);
    FUN_06dfc74c(uVar7,uVar8,DAT_091d8040,0);
    uVar5 = DG_Tweening_DOTween__To(0,0,*(undefined4 *)(lVar3 + 0x38),param_5,uVar5,uVar7,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetOptions(uVar5,8,param_8 & 1,0);
    uVar5 = FUN_04d95e8c(uVar5,1,DAT_091dbee0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Join(uVar4,uVar5,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Join(uVar4,*puVar6,0);
    uVar4 = FUN_04d9642c(uVar4,*(undefined8 *)(lVar3 + 0x10),DAT_091dbfd8);
    FUN_04d95e8c(uVar4,*(undefined4 *)(*(long *)(DAT_09183190 + 0xb8) + 0x54),DAT_091dbec0);
    uVar5 = *puVar6;
    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar4,lVar3,DAT_091e8550,0);
    FUN_04d957f0(uVar5,uVar4,DAT_091dbe08);
    return *puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

