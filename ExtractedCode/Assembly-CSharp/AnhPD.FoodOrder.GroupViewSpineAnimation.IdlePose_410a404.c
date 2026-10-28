// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineAnimation$$IdlePose
// address: 0x410a404
// body: available
// range: 0x410a404-0x410a7a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410a798 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410a79c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410a7a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410a7a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_GroupViewSpineAnimation__IdlePose(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_095161b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181248);
    FUN_03f5c2a4(&DAT_091a48b0);
    FUN_03f5c2a4(&DAT_091a48b8);
    FUN_03f5c2a4(&DAT_091a48c0);
    FUN_03f5c2a4(&DAT_091a7668);
    FUN_03f5c2a4(&DAT_091a7670);
    FUN_03f5c2a4(&DAT_091a7658);
    FUN_03f5c2a4(&DAT_09177890);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_091856c8);
    FUN_03f5c2a4(&DAT_091fae40);
    DAT_095161b4 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  plVar12 = (long *)(param_1 + 0x88);
  local_80 = 0;
  if (((*plVar12 != 0) ||
      (uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x40),0), (uVar1 & 1) != 0))
     || (*(long *)(param_1 + 0x50) == 0)) {
LAB_0410a768:
    return *plVar12;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_1 + 0x20),0);
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = Spine_SkeletonData__FindAnimation(lVar2,*(undefined8 *)(param_1 + 0x40),0);
    if (lVar3 == 0) {
      return 0;
    }
    lVar4 = thunk_FUN_03f9944c(DAT_09179e18);
    FUN_053d6e00(lVar4,DAT_091a8298);
    lVar13 = *(long *)(param_1 + 0x50);
    if (lVar13 != 0) {
      if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
        uVar1 = 0;
        uVar10 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar5 = Spine_SkeletonData__FindBone(lVar2,*(undefined8 *)(lVar13 + 0x20 + uVar1 * 8),0);
          if (lVar5 != 0) {
            if (lVar4 == 0) goto LAB_0410a7a0;
            FUN_053d8048(lVar4,*(undefined4 *)(lVar5 + 0x10),DAT_091a82b0);
          }
          uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
          uVar1 = uVar1 + 1;
        } while ((long)uVar1 < (long)(int)*(uint *)(lVar13 + 0x18));
      }
      lVar2 = thunk_FUN_03f9944c(DAT_09177890);
      FUN_05203764(lVar2,DAT_091a7658);
      if (*(long *)(lVar3 + 0x18) != 0) {
        FUN_05204d80(&local_a8,*(long *)(lVar3 + 0x18),DAT_091a7670);
        uStack_88 = puStack_a0;
        local_90 = local_a8;
        local_80 = local_98;
        puStack_a0 = &local_90;
        local_a8 = 0;
        while (uVar1 = FUN_071bb600(&local_90,DAT_091a48b8), uVar8 = local_80, (uVar1 & 1) != 0) {
          plVar6 = (long *)thunk_FUN_03f99350(local_80,DAT_091856c8);
          if (plVar6 != (long *)0x0) {
            lVar13 = *plVar6;
            uVar1 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar1 != 0) {
              piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_091856c8) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0410a6bc;
                }
                uVar1 = uVar1 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar1 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091856c8,0);
LAB_0410a6bc:
            uVar1 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550(uVar1,uVar1 & 0xffffffff);
            }
            uVar1 = FUN_053d750c(lVar4,uVar1 & 0xffffffff,DAT_091a82c0);
            if ((uVar1 & 1) != 0) {
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_05203a6c(lVar2,uVar8,DAT_091a7668);
            }
          }
        }
        FUN_071bb504(&local_90,DAT_091a48b0);
        uVar8 = System_String__Concat(*(undefined8 *)(param_1 + 0x40),DAT_091fae40,0);
        uVar14 = *(undefined4 *)(lVar3 + 0x28);
        uVar9 = thunk_FUN_03f9944c(DAT_09181248);
        Spine_Animation___ctor(uVar14,uVar9,uVar8,lVar2,0);
        *(undefined8 *)(param_1 + 0x88) = uVar9;
        thunk_FUN_03f5d7b8(plVar12,uVar9);
        goto LAB_0410a768;
      }
    }
  }
LAB_0410a7a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

