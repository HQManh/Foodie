// rea decompile_all
// name: Utilities.Spine.SpineAnimManager$$PlayAnimGroup
// address: 0x4534794
// body: available
// range: 0x4534794-0x4534abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4534ab8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4534abc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_Spine_SpineAnimManager__PlayAnimGroup(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_78;
  ulong local_70;
  uint local_64;
  
  if ((DAT_09518664 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_091a0620);
    DAT_09518664 = 1;
  }
  local_64 = 0;
  local_78 = 0;
  local_70 = 0;
  if (param_2 != 0) {
    if ((*(long *)(param_2 + 0x18) == 0) || (*(long *)(*(long *)(param_2 + 0x18) + 0x18) == 0)) {
      return;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar1 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18));
      lVar8 = *(long *)(param_2 + 0x18);
      if (lVar8 != 0) {
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar9 = 0;
          uVar3 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if (uVar3 <= uVar9) goto LAB_04534abc;
            uVar7 = *(undefined8 *)(lVar8 + 0x20 + uVar9 * 8);
            local_64 = 0;
            if (*(long *)(param_1 + 0x38) == 0) goto LAB_04534ab8;
            uVar3 = FUN_06fcbf70(*(long *)(param_1 + 0x38),uVar7,&local_64,DAT_0919f9c8);
            if ((uVar3 & 1) != 0) {
              if (lVar1 == 0) goto LAB_04534ab8;
              lVar2 = (long)(int)local_64;
              if (*(uint *)(lVar1 + 0x18) <= local_64) goto LAB_04534abc;
              pcVar5 = (char *)(lVar1 + lVar2 + 0x20);
              if (*pcVar5 == '\0') {
                lVar4 = *(long *)(param_1 + 0x58);
                *pcVar5 = '\x01';
                if (lVar4 == 0) goto LAB_04534ab8;
                if (*(uint *)(lVar4 + 0x18) <= local_64) goto LAB_04534abc;
                lVar6 = *(long *)(param_1 + 0x20);
                *(undefined1 *)(lVar4 + lVar2 + 0x20) = 1;
                if (((lVar6 == 0) || (lVar4 = *(long *)(lVar6 + 0x110), lVar4 == 0)) ||
                   (*(long *)(lVar4 + 0x18) == 0)) goto LAB_04534ab8;
                if (((int)local_64 < *(int *)(*(long *)(lVar4 + 0x18) + 0x18)) &&
                   (lVar2 = Spine_AnimationState__GetCurrent(lVar4,lVar2,0), lVar2 != 0)) {
                  if ((((*(long *)(param_1 + 0x20) == 0) ||
                       ((lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x110), lVar2 == 0 ||
                        (lVar2 = Spine_AnimationState__GetCurrent(lVar2,local_64,0), lVar2 == 0))))
                      || (*(long *)(lVar2 + 0x10) == 0)) ||
                     (lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + 0x10), lVar2 == 0))
                  goto LAB_04534ab8;
                  uVar3 = System_String__Equals(lVar2,uVar7,0);
                  if ((uVar3 & 1) == 0) goto LAB_045349e0;
                }
                if (*(long *)(param_1 + 0x40) == 0) goto LAB_04534ab8;
                uVar3 = FUN_0701cb78(*(long *)(param_1 + 0x40),uVar7,&local_78,DAT_091a0620);
                lVar2 = *(long *)(param_1 + 0x20);
                if (((uVar3 & 1) == 0) || ((local_70 & 1) == 0)) {
                  if ((lVar2 == 0) ||
                     (lVar2 = Spine_Unity_SkeletonAnimation__get_AnimationState(lVar2,0), lVar2 == 0
                     )) goto LAB_04534ab8;
                  Spine_AnimationState__SetAnimation(lVar2,local_64,uVar7,0,0);
                  if ((*(long *)(param_1 + 0x20) == 0) ||
                     (lVar2 = Spine_Unity_SkeletonAnimation__get_AnimationState
                                        (*(long *)(param_1 + 0x20),0), lVar2 == 0))
                  goto LAB_04534ab8;
                  Spine_AnimationState__AddEmptyAnimation
                            (*(undefined4 *)(param_1 + 0x28),0,lVar2,local_64,0);
                }
                else {
                  if ((lVar2 == 0) ||
                     (lVar2 = Spine_Unity_SkeletonAnimation__get_AnimationState(lVar2,0), lVar2 == 0
                     )) goto LAB_04534ab8;
                  Spine_AnimationState__SetAnimation(lVar2,local_64,uVar7,1,0);
                }
              }
            }
LAB_045349e0:
            uVar3 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar8 = Spine_Unity_SkeletonAnimation__get_AnimationState(*(long *)(param_1 + 0x20),0),
           lVar8 != 0)) {
          *(undefined4 *)(lVar8 + 0x6c) = *(undefined4 *)(param_2 + 0x10);
          if (param_3 != 0) {
            return;
          }
          lVar8 = *(long *)(param_1 + 0x30);
          if (lVar8 != 0) {
            uVar9 = 0;
            do {
              if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar9) {
                return;
              }
              if (lVar1 == 0) break;
              if (*(uint *)(lVar1 + 0x18) <= uVar9) goto LAB_04534abc;
              if (*(char *)(lVar1 + 0x20 + uVar9) == '\0') {
                lVar2 = *(long *)(param_1 + 0x58);
                if (lVar2 == 0) break;
                if (*(uint *)(lVar2 + 0x18) <= uVar9) {
LAB_04534abc:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                if (*(char *)(lVar2 + uVar9 + 0x20) != '\0') {
                  lVar8 = *(long *)(param_1 + 0x20);
                  *(undefined1 *)(lVar2 + uVar9 + 0x20) = 0;
                  if ((lVar8 == 0) ||
                     (lVar8 = Spine_Unity_SkeletonAnimation__get_AnimationState(lVar8,0), lVar8 == 0
                     )) break;
                  Spine_AnimationState__SetEmptyAnimation
                            (*(undefined4 *)(param_1 + 0x28),lVar8,uVar9 & 0xffffffff,0);
                  lVar8 = *(long *)(param_1 + 0x30);
                }
              }
              uVar9 = uVar9 + 1;
            } while (lVar8 != 0);
          }
        }
      }
    }
  }
LAB_04534ab8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

