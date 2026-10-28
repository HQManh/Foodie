// rea decompile_all
// name: Datpt.SpineUtilities.SpineMixSkin$$ReloadSkin
// address: 0x419b3c0
// body: available
// range: 0x419b3c0-0x419b73f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x419b734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x419b738 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x419b73c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_SpineUtilities_SpineMixSkin__ReloadSkin(long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  
  if ((DAT_0951680a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5390);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_09186658);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_0918ad08);
    FUN_03f5c2a4(&DAT_0918ad30);
    FUN_03f5c2a4(&DAT_0918ad40);
    FUN_03f5c2a4(&DAT_0918ad70);
    FUN_03f5c2a4(&DAT_09222d98);
    FUN_03f5c2a4(&DAT_0920d2c8);
    DAT_0951680a = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  plVar10 = (long *)(param_1 + 0x20);
  plVar11 = (long *)*plVar10;
  local_60 = 0;
  if (plVar11 == (long *)0x0) {
    uVar2 = FUN_04a6a14c(param_1,DAT_091c5390);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8(plVar10,uVar2);
    plVar11 = *(long **)(param_1 + 0x20);
    if (plVar11 == (long *)0x0) goto LAB_0419b73c;
  }
  lVar6 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_09186658) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0419b528;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186658,1);
LAB_0419b528:
  lVar6 = (*(code *)*puVar3)(plVar11,puVar3[1]);
  if (lVar6 != 0) {
    lVar12 = *(long *)(lVar6 + 0x10);
    lVar4 = thunk_FUN_03f9944c(DAT_0918ad70);
    Spine_Skin___ctor(lVar4,DAT_09222d98,0);
    if (param_2 != 0) {
      FUN_057e185c(&local_88,param_2,DAT_091b05a8);
      local_60 = local_78;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      while (uVar7 = FUN_071bd28c(&local_70,DAT_091a45a0), uVar2 = local_60, (uVar7 & 1) != 0) {
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = Spine_SkeletonData__FindSkin(lVar12,local_60,0);
        if (lVar5 == 0) {
          uVar2 = System_String__Concat(DAT_0920d2c8,uVar2,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogError(uVar2,0);
        }
        else {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          Spine_Skin__AddSkin(lVar4,lVar5,0);
        }
      }
      FUN_071bd288(&local_70,DAT_091a4598);
    }
    Spine_Skeleton__SetSkin(lVar6,lVar4,0);
    Spine_Skeleton__SetSlotsToSetupPose(lVar6,0);
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      bVar1 = *(byte *)(lVar6 + 0x130);
      if ((bVar1 < *(byte *)(DAT_0918ad08 + 0x130)) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_0918ad08 + 0x130) * 8 + -8) !=
          DAT_0918ad08)) {
        if ((bVar1 < *(byte *)(DAT_0918ad40 + 0x130)) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_0918ad40 + 0x130) * 8 + -8) !=
            DAT_0918ad40)) {
          if (bVar1 < *(byte *)(DAT_0918ad30 + 0x130)) {
            return;
          }
          if (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_0918ad30 + 0x130) * 8 + -8) !=
              DAT_0918ad30) {
            return;
          }
          pcVar8 = *(code **)(lVar6 + 0x658);
          uVar2 = *(undefined8 *)(lVar6 + 0x660);
        }
        else {
          pcVar8 = *(code **)(lVar6 + 0x2d8);
          uVar2 = *(undefined8 *)(lVar6 + 0x2e0);
        }
        (*pcVar8)(plVar10,uVar2);
      }
      else {
        Spine_Unity_SkeletonAnimation__Update(0,plVar10,0);
      }
    }
    return;
  }
LAB_0419b73c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

