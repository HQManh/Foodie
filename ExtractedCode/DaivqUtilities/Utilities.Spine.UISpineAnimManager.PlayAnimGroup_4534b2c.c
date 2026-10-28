// rea decompile_all
// name: Utilities.Spine.UISpineAnimManager$$PlayAnimGroup
// address: 0x4534b2c
// body: available
// range: 0x4534b2c-0x4534e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4534e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4534e98 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_Spine_UISpineAnimManager__PlayAnimGroup(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_78;
  ulong local_70;
  uint local_64;
  
  if ((DAT_0951866d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0919c2f0);
    FUN_03f5c2a4(&DAT_0919c320);
    DAT_0951866d = 1;
  }
  local_64 = 0;
  local_78 = 0;
  local_70 = 0;
  if (param_2 != 0) {
    if ((*(long *)(param_2 + 0x18) == 0) || (*(long *)(*(long *)(param_2 + 0x18) + 0x18) == 0)) {
      return;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar2 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18));
      lVar9 = *(long *)(param_2 + 0x18);
      if (lVar9 != 0) {
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar10 = 0;
          uVar5 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          do {
            if (uVar5 <= uVar10) goto LAB_04534e98;
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_04534e94;
            lVar8 = *(long *)(lVar9 + 0x20 + uVar10 * 8);
            uVar5 = FUN_06fcbf70(*(long *)(param_1 + 0x50),lVar8,&local_64,DAT_0919c2f0);
            uVar1 = local_64;
            if ((uVar5 & 1) != 0) {
              if (lVar2 == 0) goto LAB_04534e94;
              if (*(uint *)(lVar2 + 0x18) <= local_64) goto LAB_04534e98;
              pcVar7 = (char *)(lVar2 + (int)local_64 + 0x20);
              if (*pcVar7 == '\0') {
                lVar6 = *(long *)(param_1 + 0x60);
                *pcVar7 = '\x01';
                if (lVar6 == 0) goto LAB_04534e94;
                if (*(uint *)(lVar6 + 0x18) <= local_64) goto LAB_04534e98;
                lVar3 = *(long *)(param_1 + 0x20);
                *(undefined1 *)(lVar6 + (int)local_64 + 0x20) = 1;
                if (((lVar3 == 0) ||
                    (lVar6 = Spine_Unity_SkeletonGraphic__get_AnimationState(lVar3,0), lVar6 == 0))
                   || (*(long *)(lVar6 + 0x18) == 0)) goto LAB_04534e94;
                if ((int)uVar1 < *(int *)(*(long *)(lVar6 + 0x18) + 0x18)) {
                  if ((*(long *)(param_1 + 0x20) == 0) ||
                     (lVar6 = Spine_Unity_SkeletonGraphic__get_AnimationState
                                        (*(long *)(param_1 + 0x20),0), lVar6 == 0))
                  goto LAB_04534e94;
                  lVar6 = Spine_AnimationState__GetCurrent(lVar6,local_64,0);
                  if (lVar6 != 0) {
                    if (((*(long *)(param_1 + 0x20) == 0) ||
                        (lVar6 = Spine_Unity_SkeletonGraphic__get_AnimationState
                                           (*(long *)(param_1 + 0x20),0), lVar6 == 0)) ||
                       ((lVar6 = Spine_AnimationState__GetCurrent(lVar6,local_64,0), lVar6 == 0 ||
                        (lVar8 == 0)))) goto LAB_04534e94;
                    lVar3 = *(long *)(lVar6 + 0x10);
                    lVar6 = Spine_Unity_AnimationReferenceAsset__get_Animation(lVar8,0);
                    if (lVar3 == lVar6) goto LAB_04534dc4;
                  }
                }
                if (*(long *)(param_1 + 0x58) == 0) goto LAB_04534e94;
                uVar5 = FUN_07023ec4(*(long *)(param_1 + 0x58),lVar8,&local_78,DAT_0919c320);
                lVar6 = *(long *)(param_1 + 0x20);
                if (((uVar5 & 1) == 0) || ((local_70 & 1) == 0)) {
                  if (lVar6 == 0) goto LAB_04534e94;
                  lVar6 = Spine_Unity_SkeletonGraphic__get_AnimationState(lVar6,0);
                  uVar1 = local_64;
                  uVar4 = Spine_Unity_AnimationReferenceAsset__op_Implicit(lVar8,0);
                  if (lVar6 == 0) goto LAB_04534e94;
                  Spine_AnimationState__SetAnimation(lVar6,uVar1,uVar4,0,0);
                  if ((*(long *)(param_1 + 0x20) == 0) ||
                     (lVar8 = Spine_Unity_SkeletonGraphic__get_AnimationState
                                        (*(long *)(param_1 + 0x20),0), lVar8 == 0))
                  goto LAB_04534e94;
                  Spine_AnimationState__AddEmptyAnimation
                            (*(undefined4 *)(param_1 + 0x28),0,lVar8,local_64,0);
                }
                else {
                  if (lVar6 == 0) goto LAB_04534e94;
                  lVar6 = Spine_Unity_SkeletonGraphic__get_AnimationState(lVar6,0);
                  uVar1 = local_64;
                  uVar4 = Spine_Unity_AnimationReferenceAsset__op_Implicit(lVar8,0);
                  if (lVar6 == 0) goto LAB_04534e94;
                  Spine_AnimationState__SetAnimation(lVar6,uVar1,uVar4,1,0);
                }
              }
            }
LAB_04534dc4:
            uVar5 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + 300) = *(undefined4 *)(param_2 + 0x10);
          if (param_3 != 0) {
            return;
          }
          lVar9 = *(long *)(param_1 + 0x30);
          if (lVar9 != 0) {
            uVar10 = 0;
            do {
              if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar10) {
                return;
              }
              if (lVar2 == 0) break;
              if (*(uint *)(lVar2 + 0x18) <= uVar10) goto LAB_04534e98;
              if (*(char *)(lVar2 + 0x20 + uVar10) == '\0') {
                lVar8 = *(long *)(param_1 + 0x60);
                if (lVar8 == 0) break;
                if (*(uint *)(lVar8 + 0x18) <= uVar10) {
LAB_04534e98:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                if (*(char *)(lVar8 + uVar10 + 0x20) != '\0') {
                  lVar9 = *(long *)(param_1 + 0x20);
                  *(undefined1 *)(lVar8 + uVar10 + 0x20) = 0;
                  if ((lVar9 == 0) ||
                     (lVar9 = Spine_Unity_SkeletonGraphic__get_AnimationState(lVar9,0), lVar9 == 0))
                  break;
                  Spine_AnimationState__SetEmptyAnimation
                            (*(undefined4 *)(param_1 + 0x28),lVar9,uVar10 & 0xffffffff,0);
                  lVar9 = *(long *)(param_1 + 0x30);
                }
              }
              uVar10 = uVar10 + 1;
            } while (lVar9 != 0);
          }
        }
      }
    }
  }
LAB_04534e94:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

