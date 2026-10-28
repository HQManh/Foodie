// rea decompile_all
// name: Utilities.SpineSkinMix$$ReloadSkin
// address: 0x450c2b4
// body: available
// range: 0x450c2b4-0x450c2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_SpineSkinMix__ReloadSkin(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  if ((DAT_09518509 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5390);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09186658);
    FUN_03f5c2a4(&DAT_0918ad08);
    FUN_03f5c2a4(&DAT_0918ad30);
    FUN_03f5c2a4(&DAT_0918ad40);
    FUN_03f5c2a4(&DAT_0918ad70);
    FUN_03f5c2a4(&DAT_0920d288);
    FUN_03f5c2a4(&DAT_09222d98);
    FUN_03f5c2a4(&DAT_092045b0);
    FUN_03f5c2a4(&DAT_0920d2c8);
    DAT_09518509 = 1;
  }
  plVar10 = (long *)(param_1 + 0x20);
  plVar11 = (long *)*plVar10;
  if (plVar11 == (long *)0x0) {
    uVar2 = FUN_04a6a14c(param_1,DAT_091c5390);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8(plVar10,uVar2);
    plVar11 = *(long **)(param_1 + 0x20);
    if (plVar11 == (long *)0x0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = &DAT_092045b0;
      goto LAB_0450c5fc;
    }
  }
  lVar6 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_09186658) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0450c3fc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186658,1);
LAB_0450c3fc:
  lVar6 = (*(code *)*puVar3)(plVar11,puVar3[1]);
  if (lVar6 != 0) {
    lVar12 = *(long *)(lVar6 + 0x10);
    lVar4 = thunk_FUN_03f9944c(DAT_0918ad70);
    Spine_Skin___ctor(lVar4,DAT_09222d98,0);
    lVar13 = *(long *)(param_1 + 0x28);
    if ((lVar13 != 0) && (0 < (int)*(ulong *)(lVar13 + 0x18))) {
      uVar8 = 0;
      uVar7 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar12 == 0) {
LAB_0450c674:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(undefined8 *)(lVar13 + 0x20 + uVar8 * 8);
        lVar5 = Spine_SkeletonData__FindSkin(lVar12,uVar2,0);
        if (lVar5 == 0) {
          uVar2 = System_String__Concat(DAT_0920d2c8,uVar2,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar2,0);
        }
        else {
          if (lVar4 == 0) goto LAB_0450c674;
          Spine_Skin__AddSkin(lVar4,lVar5,0);
        }
        uVar7 = (ulong)*(uint *)(lVar13 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar13 + 0x18));
    }
    Spine_Skeleton__SetSkin(lVar6,lVar4,0);
    Spine_Skeleton__SetSlotsToSetupPose(lVar6,0);
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      return;
    }
    lVar6 = *plVar10;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(DAT_0918ad08 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_0918ad08 + 0x130) * 8 + -8) ==
        DAT_0918ad08)) {
      Spine_Unity_SkeletonAnimation__Update(0,plVar10,0);
      return;
    }
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
      uVar2 = *(undefined8 *)(lVar6 + 0x660);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x658);
    }
    else {
      uVar2 = *(undefined8 *)(lVar6 + 0x2e0);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x2d8);
    }
                    /* WARNING: Could not recover jumptable at 0x0450c670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar10,uVar2);
    return;
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = &DAT_0920d288;
LAB_0450c5fc:
  UnityEngine_Debug__LogError(*puVar3,0);
  return;
}

