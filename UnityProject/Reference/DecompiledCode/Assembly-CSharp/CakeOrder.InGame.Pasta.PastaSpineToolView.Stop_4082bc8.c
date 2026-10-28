// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaSpineToolView$$ResetVisual
// address: 0x4082bc8
// body: available
// range: 0x4082bc8-0x4082bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaSpineToolView__ResetVisual(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09515c74 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515c74 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x68);
  if (lVar5 != 0) {
    CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__Stop(lVar5);
    *(undefined1 *)(lVar5 + 0x3c) = 0;
    *(undefined4 *)(lVar5 + 0x38) = 0x3f800000;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_04081ce8;
    UnityEngine_ParticleSystem__Stop(*(long *)(param_1 + 0x48),1,0,0);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),0);
  *(undefined1 *)(param_1 + 0x60) = 0;
  CakeOrder_InGame_Pasta_PastaSpineToolView__SetProcessObjectsActive(param_1,0);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_04081ce8;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x28),1,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar5 = CakeOrder_InGame_Pasta_PastaSpineToolView__StateOf(param_1);
  if (lVar5 != 0) {
    Spine_AnimationState__ClearTrack(lVar5,0,0);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x15c) = 0x3f800000;
    lVar2 = Spine_Unity_SkeletonRenderer__get_Skeleton(lVar2,0);
    if (lVar2 != 0) {
      Spine_Skeleton__SetToSetupPose(lVar2,0);
    }
    lVar2 = CakeOrder_InGame_Pasta_PastaSpineToolView__AnimationOf
                      (param_1,*(undefined8 *)(param_1 + 0x30));
    lVar4 = *(long *)(param_1 + 0x20);
    if ((lVar5 == 0) || (lVar2 == 0)) {
      if ((lVar4 != 0) && (lVar5 = UnityEngine_Component__get_gameObject(lVar4,0), lVar5 != 0)) {
        UnityEngine_GameObject__SetActive(lVar5,0,0);
        return;
      }
    }
    else if ((lVar4 != 0) && (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0)) {
      UnityEngine_GameObject__SetActive(lVar4,1,0);
      Spine_AnimationState__SetAnimation(lVar5,0,lVar2,1,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        Spine_Unity_SkeletonAnimation__Update(0,*(long *)(param_1 + 0x20),0);
        plVar3 = *(long **)(param_1 + 0x20);
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04081cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
          return;
        }
      }
    }
  }
LAB_04081ce8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

