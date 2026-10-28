// rea decompile_all
// name: DG.Tweening.ShortcutExtensions$$DOLocalJump
// address: 0x45479b0
// body: available
// range: 0x45479b0-0x4547e9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4547e9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
DG_Tweening_ShortcutExtensions__DOLocalJump
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5
          ,long param_6,int param_7,byte param_8)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  
  uVar8 = param_2;
  if ((DAT_09518743 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e30);
    FUN_03f5c2a4(&DAT_09175e80);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbda8);
    FUN_03f5c2a4(&DAT_091dbe08);
    FUN_03f5c2a4(&DAT_091dbec0);
    FUN_03f5c2a4(&DAT_091dbee0);
    FUN_03f5c2a4(&DAT_091dbf48);
    FUN_03f5c2a4(&DAT_091dbf50);
    FUN_03f5c2a4(&DAT_091dbfd8);
    FUN_03f5c2a4(&DAT_091efe78);
    FUN_03f5c2a4(&DAT_091efe80);
    FUN_03f5c2a4(&DAT_091efe88);
    FUN_03f5c2a4(&DAT_091efe90);
    FUN_03f5c2a4(&DAT_091efe98);
    FUN_03f5c2a4(&DAT_091efea0);
    FUN_03f5c2a4(&DAT_091efea8);
    FUN_03f5c2a4(&DAT_091efeb0);
    FUN_03f5c2a4(&DAT_09194708);
    DAT_09518743 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09194708);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar7 = (long *)(lVar2 + 0x10);
    *plVar7 = param_6;
    thunk_FUN_03f5d7b8(plVar7,param_6);
    *(undefined4 *)(lVar2 + 0x30) = param_1;
    *(undefined4 *)(lVar2 + 0x34) = param_2;
    if (param_7 < 2) {
      param_7 = 1;
    }
    *(undefined4 *)(lVar2 + 0x38) = param_3;
    if (*plVar7 != 0) {
      UnityEngine_Transform__get_localPosition(*plVar7,0);
      lVar5 = DAT_09183190;
      *(undefined4 *)(lVar2 + 0x18) = uVar8;
      *(undefined4 *)(lVar2 + 0x20) = 0xbf800000;
      iVar1 = *(int *)(lVar5 + 0xe4);
      *(undefined1 *)(lVar2 + 0x1c) = 0;
      if (iVar1 == 0) {
        FUN_03f5c424();
      }
      uVar3 = DG_Tweening_DOTween__Sequence();
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar3 = thunk_FUN_03f9944c(DAT_09175e30);
      FUN_06dfb558(uVar3,lVar2,DAT_091efe78,0);
      uVar4 = thunk_FUN_03f9944c(DAT_09175e80);
      FUN_06dfc74c(uVar4,lVar2,DAT_091efe80,0);
      lVar5 = DG_Tweening_DOTween__To(0,param_4,0,param_5 / (float)(param_7 << 1),uVar3,uVar4);
      param_8 = param_8 & 1;
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
        *(byte *)(lVar5 + 0x14c) = param_8;
        *(undefined4 *)(lVar5 + 0x148) = 4;
      }
      uVar3 = FUN_04d95e8c(lVar5,6,DAT_091dbee0);
      uVar3 = FUN_04d9637c(uVar3,DAT_091dbf50);
      uVar3 = FUN_04d962f4(uVar3,param_7 << 1,1,DAT_091dbf48);
      uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar4,lVar2,DAT_091efe88);
      uVar3 = FUN_04d95798(uVar3,uVar4,DAT_091dbda8);
      *(undefined8 *)(lVar2 + 0x40) = uVar3;
      thunk_FUN_03f5d7b8();
      uVar6 = *(undefined8 *)(lVar2 + 0x28);
      uVar3 = thunk_FUN_03f9944c(DAT_09175e30);
      FUN_06dfb558(uVar3,lVar2,DAT_091efe90,0);
      uVar4 = thunk_FUN_03f9944c(DAT_09175e80);
      FUN_06dfc74c(uVar4,lVar2,DAT_091efe98,0);
      lVar5 = DG_Tweening_DOTween__To(*(undefined4 *)(lVar2 + 0x30),0,0,param_5,uVar3,uVar4);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
        *(byte *)(lVar5 + 0x14c) = param_8;
        *(undefined4 *)(lVar5 + 0x148) = 2;
      }
      uVar3 = FUN_04d95e8c(lVar5,1,DAT_091dbee0);
      DG_Tweening_TweenSettingsExtensions__Append(uVar6,uVar3);
      uVar3 = thunk_FUN_03f9944c(DAT_09175e30);
      FUN_06dfb558(uVar3,lVar2,DAT_091efea0,0);
      uVar4 = thunk_FUN_03f9944c(DAT_09175e80);
      FUN_06dfc74c(uVar4,lVar2,DAT_091efea8,0);
      lVar5 = DG_Tweening_DOTween__To(0,0,*(undefined4 *)(lVar2 + 0x38),param_5,uVar3,uVar4);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
        *(byte *)(lVar5 + 0x14c) = param_8;
        *(undefined4 *)(lVar5 + 0x148) = 8;
      }
      uVar3 = FUN_04d95e8c(lVar5,1,DAT_091dbee0);
      uVar3 = DG_Tweening_TweenSettingsExtensions__Join(uVar6,uVar3);
      uVar3 = DG_Tweening_TweenSettingsExtensions__Join(uVar3,*(undefined8 *)(lVar2 + 0x40));
      uVar3 = FUN_04d9642c(uVar3,*(undefined8 *)(lVar2 + 0x10),DAT_091dbfd8);
      FUN_04d95e8c(uVar3,*(undefined4 *)(*(long *)(DAT_09183190 + 0xb8) + 0x54),DAT_091dbec0);
      uVar4 = *(undefined8 *)(lVar2 + 0x40);
      uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar3,lVar2,DAT_091efeb0);
      FUN_04d957f0(uVar4,uVar3,DAT_091dbe08);
      return *(undefined8 *)(lVar2 + 0x28);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

