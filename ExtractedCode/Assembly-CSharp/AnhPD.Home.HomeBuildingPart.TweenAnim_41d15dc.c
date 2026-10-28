// rea decompile_all
// name: AnhPD.Home.HomeBuildingPart$$TweenAnim
// address: 0x41d15dc
// body: available
// range: 0x41d15dc-0x41d1a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d19a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d1a04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_Home_HomeBuildingPart__TweenAnim
          (float param_1,float param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  
  if ((DAT_09516a39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091ce900);
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcf8);
    FUN_03f5c2a4(&DAT_091dbd68);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dc030);
    FUN_03f5c2a4(&DAT_091eb188);
    FUN_03f5c2a4(&DAT_091eb190);
    FUN_03f5c2a4(&DAT_091eb198);
    FUN_03f5c2a4(&DAT_091eb1a0);
    FUN_03f5c2a4(&DAT_09191300);
    FUN_03f5c2a4(&DAT_092153a0);
    DAT_09516a39 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09191300);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) goto LAB_041d19a0;
  *(long *)(lVar2 + 0x10) = param_3;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_3);
  puVar7 = (undefined8 *)(lVar2 + 0x18);
  *puVar7 = param_5;
  thunk_FUN_03f5d7b8(puVar7,param_5);
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = DG_Tweening_DOTween__Sequence(0);
  if (0.0 < param_1) {
    DG_Tweening_TweenSettingsExtensions__AppendInterval(param_1,uVar3,0);
  }
  uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
  DG_Tweening_TweenCallback___ctor(uVar4,param_3,DAT_091ce900,0);
  DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar3,uVar4,0);
  cVar1 = *(char *)(param_3 + 0x4c);
  if (cVar1 != '\0') {
    lVar5 = thunk_FUN_03f9944c(DAT_09187e28);
    UnityEngine_Material___ctor(lVar5,param_4,0);
    AnhPD_Home_HomeBuildingPart__SetMaterial(param_3,lVar5);
    if (lVar5 == 0) goto LAB_041d19a0;
    UnityEngine_Material__SetFloat(0x3f800000,lVar5,DAT_092153a0,0);
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_041d19a0;
    uVar4 = DG_Tweening_ShortcutExtensions__DOFloat
                      (0,(*(float *)(param_3 + 0x48) /
                         (float)*(int *)(*(long *)(param_3 + 0x20) + 0x18)) / param_2,lVar5,
                       DAT_092153a0,0);
    uVar6 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar6,lVar2,DAT_091eb198,0);
    uVar4 = FUN_04d956bc(uVar4,uVar6,DAT_091dbcf8);
    DG_Tweening_TweenSettingsExtensions__Append(uVar3,uVar4,0);
  }
  if (*(char *)(param_3 + 0x4d) != '\0') {
    lVar5 = UnityEngine_Component__get_transform(param_3,0);
    if (lVar5 == 0) goto LAB_041d19a0;
    fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20) +
            (float)((ulong)*(undefined8 *)(param_3 + 0x3c) >> 0x20);
    UnityEngine_Transform__set_localPosition
              (CONCAT44(fVar9,(float)*(undefined8 *)(param_3 + 0x30) +
                              (float)*(undefined8 *)(param_3 + 0x3c)),fVar9,
               *(float *)(param_3 + 0x38) + *(float *)(param_3 + 0x44),lVar5,0);
    uVar4 = UnityEngine_Component__get_transform(param_3,0);
    uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove
                      (*(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x34),
                       *(undefined4 *)(param_3 + 0x38),*(float *)(param_3 + 0x48) / param_2,uVar4,0,
                       0);
    uVar4 = FUN_04d95e8c(uVar4,0x1a,DAT_091dbeb0);
    if (cVar1 == '\0') {
      DG_Tweening_TweenSettingsExtensions__Append(uVar3,uVar4,0);
    }
    else {
      DG_Tweening_TweenSettingsExtensions__Join();
    }
  }
  if (*(char *)(param_3 + 0x4e) != '\0') {
    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar4,lVar2,DAT_091eb188,0);
    DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar3,uVar4,0);
  }
  lVar5 = *(long *)(param_3 + 0x28);
  if (lVar5 != 0) {
    lVar8 = 0;
    do {
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)(uint)lVar8) {
        FUN_04d9656c(uVar3,1,DAT_091dc030);
        uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar4,lVar2,DAT_091eb190,0);
        FUN_04d95740(uVar3,uVar4,DAT_091dbd68);
        return uVar3;
      }
      if (*(uint *)(lVar5 + 0x18) <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar5 + lVar8 * 8 + 0x20);
      if (lVar5 == 0) break;
      uVar4 = AnhPD_Home_HomeBuildingPart__TweenAnim(param_1,param_2,lVar5,param_4,*puVar7);
      DG_Tweening_TweenSettingsExtensions__Join(uVar3,uVar4,0);
      lVar5 = *(long *)(param_3 + 0x28);
      lVar8 = lVar8 + 1;
    } while (lVar5 != 0);
  }
LAB_041d19a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

