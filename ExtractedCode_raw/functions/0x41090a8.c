// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineAnimSequence$$QueueChain
// address: 0x41090a8
// body: available
// range: 0x41090a8-0x41093a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4109390 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4109394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4109398 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410939c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41093a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AnhPD_FoodOrder_GroupViewSpineAnimSequence__QueueChain(long param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  
  if ((DAT_095161a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5390);
    FUN_03f5c2a4(&DAT_091a5398);
    FUN_03f5c2a4(&DAT_091a53a0);
    FUN_03f5c2a4(&DAT_091b2da0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918e418);
    FUN_03f5c2a4(&DAT_091eaf88);
    FUN_03f5c2a4(&DAT_09191150);
    DAT_095161a8 = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  *puVar8 = 0;
  local_90 = 0;
  thunk_FUN_03f5d7b8(puVar8,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_057e185c(&local_b8,*(long *)(param_1 + 0x30),DAT_091b2da0);
    fVar11 = 0.0;
    fVar10 = 0.0;
    local_90 = local_a8;
    uStack_98 = puStack_b0;
    local_a0 = local_b8;
    local_b8 = 0;
    puStack_b0 = &local_a0;
    bVar2 = true;
    while( true ) {
      bVar7 = bVar2;
      uVar3 = FUN_071bd28c(&local_a0,DAT_091a5398);
      lVar1 = local_90;
      if ((uVar3 & 1) == 0) {
        FUN_071bd288(&local_a0,DAT_091a5390);
        return fVar10;
      }
      lVar4 = thunk_FUN_03f9944c(DAT_09191150);
      System_Object___ctor(lVar4,0);
      if (lVar4 == 0) break;
      *(long *)(lVar4 + 0x20) = param_1;
      thunk_FUN_03f5d7b8((long *)(lVar4 + 0x20),param_1);
      bVar2 = bVar7;
      if ((lVar1 != 0) &&
         (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar1 + 0x10),0), (uVar3 & 1) == 0))
      {
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = Spine_SkeletonData__FindAnimation(param_3,*(undefined8 *)(lVar1 + 0x10),0);
        if (lVar5 != 0) {
          fVar12 = *(float *)(lVar1 + 0x18);
          if (bVar7) {
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = Spine_AnimationState__SetAnimation(param_2,0,lVar5,0,0);
          }
          else {
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = Spine_AnimationState__AddAnimation(fVar11,param_2,0,lVar5,0,0);
          }
          bVar2 = false;
          if (lVar6 != 0) {
            if (fVar12 <= 0.01) {
              fVar12 = 0.01;
            }
            *(undefined4 *)(lVar6 + 0xb0) = 0;
            *(float *)(lVar6 + 0xa4) = fVar12;
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar1 + 0x20);
            *(float *)(lVar4 + 0x18) = fVar12;
            thunk_FUN_03f5d7b8();
            uVar9 = *(undefined8 *)(lVar4 + 0x10);
            *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)(lVar1 + 0x28);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(uVar9,0);
            if ((uVar3 & 1) != 0) {
              if (bVar7) {
                *puVar8 = *(undefined8 *)(lVar4 + 0x10);
                thunk_FUN_03f5d7b8(puVar8);
                *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar4 + 0x18);
              }
              else {
                uVar9 = thunk_FUN_03f9944c(DAT_0918e418);
                Spine_AnimationState_TrackEntryDelegate___ctor(uVar9,lVar4,DAT_091eaf88,0);
                Spine_TrackEntry__add_Start(lVar6,uVar9,0);
              }
            }
            fVar11 = *(float *)(lVar5 + 0x28);
            fVar10 = fVar10 + fVar11 / fVar12;
            bVar2 = false;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

