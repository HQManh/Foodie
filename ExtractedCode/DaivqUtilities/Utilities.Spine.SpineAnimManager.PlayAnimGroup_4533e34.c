// rea decompile_all
// name: Utilities.Spine.SpineAnimManager$$PlayAnimGroup
// address: 0x4533e34
// body: available
// range: 0x4533e34-0x45341b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45341b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45341b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_Spine_SpineAnimManager__PlayAnimGroup
               (float param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_80;
  undefined8 local_78;
  uint local_64;
  
  if ((DAT_09518665 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0919c2f0);
    FUN_03f5c2a4(&DAT_0919c308);
    DAT_09518665 = 1;
  }
  local_64 = 0;
  local_80 = 0;
  local_78 = 0;
  if (param_3 != 0) {
    if ((*(long *)(param_3 + 0x18) == 0) || (*(long *)(*(long *)(param_3 + 0x18) + 0x18) == 0)) {
      return;
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar2 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(*(long *)(param_2 + 0x30) + 0x18));
      lVar11 = *(long *)(param_3 + 0x18);
      if (lVar11 != 0) {
        if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
          uVar12 = 0;
          uVar5 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
          do {
            if (uVar5 <= uVar12) goto LAB_045341b4;
            if (*(long *)(param_2 + 0x48) == 0) goto LAB_045341b0;
            lVar10 = *(long *)(lVar11 + 0x20 + uVar12 * 8);
            uVar5 = FUN_06fcbf70(*(long *)(param_2 + 0x48),lVar10,&local_64,DAT_0919c2f0);
            if ((uVar5 & 1) != 0) {
              if (lVar2 == 0) goto LAB_045341b0;
              lVar4 = (long)(int)local_64;
              if (*(uint *)(lVar2 + 0x18) <= local_64) goto LAB_045341b4;
              pcVar7 = (char *)(lVar2 + lVar4 + 0x20);
              if (*pcVar7 == '\0') {
                lVar6 = *(long *)(param_2 + 0x58);
                *pcVar7 = '\x01';
                if (lVar6 == 0) goto LAB_045341b0;
                if (*(uint *)(lVar6 + 0x18) <= local_64) goto LAB_045341b4;
                lVar8 = *(long *)(param_2 + 0x20);
                *(undefined1 *)(lVar6 + lVar4 + 0x20) = 1;
                if (((lVar8 == 0) || (lVar6 = *(long *)(lVar8 + 0x110), lVar6 == 0)) ||
                   (*(long *)(lVar6 + 0x18) == 0)) goto LAB_045341b0;
                if (((int)local_64 < *(int *)(*(long *)(lVar6 + 0x18) + 0x18)) &&
                   (lVar4 = Spine_AnimationState__GetCurrent(lVar6,lVar4,0), lVar4 != 0)) {
                  if (((*(long *)(param_2 + 0x20) == 0) ||
                      ((lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x110), lVar4 == 0 ||
                       (lVar4 = Spine_AnimationState__GetCurrent(lVar4,local_64,0), lVar4 == 0))))
                     || (lVar10 == 0)) goto LAB_045341b0;
                  lVar6 = *(long *)(lVar4 + 0x10);
                  lVar4 = Spine_Unity_AnimationReferenceAsset__get_Animation(lVar10,0);
                  if (lVar6 == lVar4) goto LAB_04533f50;
                }
                if (*(long *)(param_2 + 0x50) == 0) goto LAB_045341b0;
                uVar5 = FUN_0701cb78(*(long *)(param_2 + 0x50),lVar10,&local_80,DAT_0919c308);
                if ((uVar5 & 1) == 0) {
                  bVar9 = 0;
                }
                else {
                  if ((local_78 & 1) != 0) {
                    if (*(long *)(param_2 + 0x20) != 0) {
                      lVar4 = Spine_Unity_SkeletonAnimation__get_AnimationState
                                        (*(long *)(param_2 + 0x20),0);
                      uVar1 = local_64;
                      uVar3 = Spine_Unity_AnimationReferenceAsset__op_Implicit(lVar10,0);
                      if (lVar4 != 0) {
                        Spine_AnimationState__SetAnimation(lVar4,uVar1,uVar3,1,0);
                        goto LAB_04533f50;
                      }
                    }
                    goto LAB_045341b0;
                  }
                  bVar9 = local_78._1_1_ & 1;
                }
                if (*(long *)(param_2 + 0x20) == 0) goto LAB_045341b0;
                lVar4 = Spine_Unity_SkeletonAnimation__get_AnimationState
                                  (*(long *)(param_2 + 0x20),0);
                uVar1 = local_64;
                uVar3 = Spine_Unity_AnimationReferenceAsset__op_Implicit(lVar10,0);
                if (lVar4 == 0) goto LAB_045341b0;
                Spine_AnimationState__SetAnimation(lVar4,uVar1,uVar3,0,0);
                if (bVar9 == 0) {
                  if ((*(long *)(param_2 + 0x20) == 0) ||
                     (lVar10 = Spine_Unity_SkeletonAnimation__get_AnimationState
                                         (*(long *)(param_2 + 0x20),0), lVar10 == 0))
                  goto LAB_045341b0;
                  Spine_AnimationState__AddEmptyAnimation
                            (*(undefined4 *)(param_2 + 0x28),0,lVar10,local_64,0);
                }
              }
            }
LAB_04533f50:
            uVar5 = (ulong)*(uint *)(lVar11 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar11 + 0x18));
        }
        if (*(long *)(param_2 + 0x20) != 0) {
          *(float *)(*(long *)(param_2 + 0x20) + 0x15c) = *(float *)(param_3 + 0x10) * param_1;
          if (param_4 != 0) {
            return;
          }
          lVar11 = *(long *)(param_2 + 0x30);
          if (lVar11 != 0) {
            uVar12 = 0;
            do {
              if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar12) {
                return;
              }
              if (lVar2 == 0) break;
              if (*(uint *)(lVar2 + 0x18) <= uVar12) goto LAB_045341b4;
              if (*(char *)(lVar2 + 0x20 + uVar12) == '\0') {
                lVar10 = *(long *)(param_2 + 0x58);
                if (lVar10 == 0) break;
                if (*(uint *)(lVar10 + 0x18) <= uVar12) {
LAB_045341b4:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                if (*(char *)(lVar10 + uVar12 + 0x20) != '\0') {
                  lVar11 = *(long *)(param_2 + 0x20);
                  *(undefined1 *)(lVar10 + uVar12 + 0x20) = 0;
                  if ((lVar11 == 0) ||
                     (lVar11 = Spine_Unity_SkeletonAnimation__get_AnimationState(lVar11,0),
                     lVar11 == 0)) break;
                  Spine_AnimationState__SetEmptyAnimation
                            (*(undefined4 *)(param_2 + 0x28),lVar11,uVar12 & 0xffffffff,0);
                  lVar11 = *(long *)(param_2 + 0x30);
                }
              }
              uVar12 = uVar12 + 1;
            } while (lVar11 != 0);
          }
        }
      }
    }
  }
LAB_045341b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

