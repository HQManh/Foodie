// rea decompile_all
// name: CakeOrder.Home.UIAvatarPetAssistantMixSkin$$ApplyRandomMix
// address: 0x4331f0c
// body: available
// range: 0x4331f0c-0x4332207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43321f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43321fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4332200 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4332204 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIAvatarPetAssistantMixSkin__ApplyRandomMix(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long local_68;
  
  if ((DAT_095176da & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a5a80);
    FUN_03f5c2a4(&DAT_091a5a88);
    FUN_03f5c2a4(&DAT_091a5a90);
    FUN_03f5c2a4(&DAT_091b3f48);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189a90);
    FUN_03f5c2a4(&DAT_0918ad70);
    FUN_03f5c2a4(&DAT_09214340);
    FUN_03f5c2a4(&DAT_091f7868);
    FUN_03f5c2a4(&DAT_091fecc8);
    DAT_095176da = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = Spine_Unity_SkeletonGraphic__get_Skeleton(*(long *)(param_1 + 0x60),0);
    if (lVar3 == 0) {
      return;
    }
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_09189a90);
    System_Random___ctor(plVar4,param_2,0);
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar3 = Spine_Unity_SkeletonGraphic__get_Skeleton(*(long *)(param_1 + 0x60),0), lVar3 != 0))
    {
      lVar8 = *(long *)(lVar3 + 0x10);
      lVar5 = thunk_FUN_03f9944c(DAT_0918ad70);
      Spine_Skin___ctor(lVar5,DAT_091fecc8,0);
      if (*(long *)(param_1 + 0x58) != 0) {
        FUN_059cb0d8(&local_a0,*(long *)(param_1 + 0x58),DAT_091b3f48);
        puStack_78 = puStack_98;
        local_80 = local_a0;
        local_68 = lStack_88;
        uStack_70 = uStack_90;
        puStack_98 = &local_80;
        local_a0 = 0;
        while (uVar2 = FUN_07235ebc(&local_80,DAT_091a5a88), lVar6 = local_68, (uVar2 & 1) != 0) {
          if ((local_68 != 0) && (*(int *)(local_68 + 0x18) != 0)) {
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar1 = (**(code **)(*plVar4 + 0x198))
                              (plVar4,0,*(int *)(local_68 + 0x18),*(undefined8 *)(*plVar4 + 0x1a0));
            uVar7 = FUN_057e0998(lVar6,uVar1,DAT_091b0610);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = Spine_SkeletonData__FindSkin(lVar8,uVar7,0);
            if (lVar6 == 0) {
              uVar7 = System_String__Concat(DAT_09214340,uVar7,DAT_091f7868,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_Debug__LogWarning(uVar7,0);
            }
            else {
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              Spine_Skin__AddSkin(lVar5,lVar6,0);
            }
          }
        }
        FUN_07235eb8(&local_80,DAT_091a5a80);
        Spine_Skeleton__SetSkin(lVar3,lVar5,0);
        Spine_Skeleton__SetSlotsToSetupPose(lVar3,0);
        if (*(long *)(param_1 + 0x60) != 0) {
          Spine_Unity_SkeletonGraphic__UpdateMesh(*(long *)(param_1 + 0x60),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

