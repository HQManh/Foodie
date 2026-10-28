// rea decompile_all
// name: AnhPD.Cook.AppearEffect$$PlayEffect
// address: 0x41cb360
// body: available
// range: 0x41cb360-0x41cb673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cb3fc to 0x4552360 DG.Tweening.DOTweenModuleSprite$$DOFade (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41cb4b0 to 0x4d95e8c FUN_04d95e8c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41cb4dc to 0x41c93bc AnhPD.APDUtilities$$Appear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41cb51c to 0x41c97a4 AnhPD.APDUtilities$$FallAppearLocal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41cb570 to 0x41c9474 AnhPD.APDUtilities$$FallAppear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41cb66c to 0x41c9054 AnhPD.APDUtilities$$MoveY (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41cb670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_Cook_AppearEffect__PlayEffect
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  if ((DAT_09516a06 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091bff50);
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_09516a06 = 1;
  }
  iVar1 = *(int *)(param_4 + 0x30);
  if (iVar1 < 7) {
    if (iVar1 == 0) {
      uVar3 = UnityEngine_Component__get_transform(param_4,0);
      AnhPD_APDUtilities__Appear(0x3dcccccd,uVar3,0);
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 != 5) {
        return;
      }
      AnhPD_APDUtilities__SetAlpha(0,*(undefined8 *)(param_4 + 0x28),0);
      DG_Tweening_DOTweenModuleSprite__DOFade
                (0x3f800000,0x3f800000,*(undefined8 *)(param_4 + 0x28),0);
      return;
    }
    uVar3 = UnityEngine_Component__get_transform(param_4,0);
    AnhPD_APDUtilities__FallAppear(0x3dcccccd,0x3f000000,0x3e4ccccd,0,uVar3,0,0);
    return;
  }
  if (iVar1 == 7) {
    uVar3 = UnityEngine_Component__get_transform(param_4,0);
    AnhPD_APDUtilities__FallAppearLocal(0x3dcccccd,0x3f800000,0x3e4ccccd,0,uVar3,0,0);
    return;
  }
  if (iVar1 == 8) {
    lVar2 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar2 != 0) {
      fVar7 = (float)UnityEngine_Transform__get_localPosition(lVar2,0);
      if (DAT_09515faa == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515faa = '\x01';
      }
      fVar8 = *(float *)(param_4 + 0x20);
      lVar6 = *(long *)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localPosition
                (fVar7 + *(float *)(lVar6 + 0x18) * fVar8,param_2 + *(float *)(lVar6 + 0x1c) * fVar8
                 ,param_3 + *(float *)(lVar6 + 0x20) * fVar8,lVar2,0);
      uVar3 = UnityEngine_Component__get_transform(param_4,0);
      fVar7 = *(float *)(param_4 + 0x20);
      uVar9 = *(undefined4 *)(param_4 + 0x24);
      uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar4,param_4,DAT_091bff50,0);
      AnhPD_APDUtilities__MoveY(-fVar7,0x3f800000,uVar9,uVar3,0,uVar4,0);
      return;
    }
  }
  else {
    if (iVar1 != 9) {
      return;
    }
    lVar2 = UnityEngine_Component__get_transform(param_4,0);
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    if (lVar2 != 0) {
      puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale(*puVar5,puVar5[1],puVar5[2],lVar2,0);
      uVar3 = UnityEngine_Component__get_transform(param_4,0);
      uVar3 = DG_Tweening_ShortcutExtensions__DOScale(0x3f800000,0x3e99999a,uVar3,0);
      FUN_04d95e8c(uVar3,0x1b,DAT_091dbeb0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

