// rea decompile_all
// name: CakeOrder.BaseUI.UISpineIntroThenIdle$$Play
// address: 0x42da2cc
// body: available
// range: 0x42da2cc-0x42da2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UISpineIntroThenIdle__Play(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_095173f5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5478);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09211638);
    DAT_095173f5 = 1;
  }
  plVar6 = (long *)(param_1 + 0x20);
  lVar7 = *plVar6;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar7,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_04a6a14c(param_1,DAT_091c5478);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    thunk_FUN_03f5d7b8(plVar6,uVar3);
  }
  lVar7 = *plVar6;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09211638,param_1,0);
    return;
  }
  if (*plVar6 != 0) {
    uVar2 = Spine_Unity_SkeletonGraphic__get_IsValid(*plVar6,0);
    if ((uVar2 & 1) == 0) {
      if (*plVar6 == 0) goto LAB_042da540;
      Spine_Unity_SkeletonGraphic__Initialize(*plVar6,0,0);
    }
    if (*plVar6 != 0) {
      lVar7 = Spine_Unity_SkeletonGraphic__get_AnimationState(*plVar6,0);
      if (lVar7 != 0) {
        if (*(char *)(param_1 + 0x3c) == '\0') {
          bVar1 = *(char *)(param_1 + 0x3d) != '\0';
          puVar5 = (undefined8 *)(param_1 + 0x30);
          if (!bVar1) {
            puVar5 = (undefined8 *)(param_1 + 0x28);
          }
        }
        else {
          bVar1 = false;
          puVar5 = (undefined8 *)(param_1 + 0x28);
        }
        uVar2 = CakeOrder_BaseUI_UISpineIntroThenIdle__HasAnimation(param_1,*puVar5);
        if ((uVar2 & 1) != 0) {
          Spine_AnimationState__ClearTracks(lVar7,0);
          if ((*plVar6 != 0) &&
             (lVar4 = Spine_Unity_SkeletonGraphic__get_Skeleton(*plVar6,0), lVar4 != 0)) {
            Spine_Skeleton__SetToSetupPose(lVar4,0);
            if (bVar1) {
              Spine_AnimationState__SetAnimation(lVar7,0,*(undefined8 *)(param_1 + 0x30),1,0);
              return;
            }
            *(undefined1 *)(param_1 + 0x3d) = 1;
            Spine_AnimationState__SetAnimation(lVar7,0,*(undefined8 *)(param_1 + 0x28),0,0);
            uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x30),0);
            if ((uVar2 & 1) != 0) {
              return;
            }
            uVar2 = CakeOrder_BaseUI_UISpineIntroThenIdle__HasAnimation
                              (param_1,*(undefined8 *)(param_1 + 0x30));
            if ((uVar2 & 1) == 0) {
              return;
            }
            if (*(long *)(lVar7 + 0x10) != 0) {
              Spine_AnimationStateData__SetMix
                        (*(undefined4 *)(param_1 + 0x38),*(long *)(lVar7 + 0x10),
                         *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
              Spine_AnimationState__AddAnimation(0,lVar7,0,*(undefined8 *)(param_1 + 0x30),1,0);
              return;
            }
          }
          goto LAB_042da540;
        }
      }
      return;
    }
  }
LAB_042da540:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

