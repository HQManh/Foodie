// rea decompile_all
// name: Utilities.UIImageFlyToCounter.<>c__DisplayClass29_0.<<ShowCurrencyFly>g__IESpawnGoldFlyIterate|0>d$$MoveNext
// address: 0x452b554
// body: available
// range: 0x452b554-0x452b963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452b960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_UIImageFlyToCounter_<>c__DisplayClass29_0_<<ShowCurrencyFly>g__IESpawnGoldFlyIterate_0>d__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((DAT_0951861d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174790);
    FUN_03f5c2a4(&DAT_091b7d18);
    FUN_03f5c2a4(&DAT_091f1650);
    FUN_03f5c2a4(&DAT_0918ce98);
    DAT_0951861d = 1;
  }
  iVar9 = *(int *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x20);
  lVar3 = 0;
  if (iVar9 < 2) {
    if (iVar9 == 0) {
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      if (((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + 0x20), lVar11 != 0)) {
        uVar16 = *(undefined4 *)(param_5 + 0x28);
        *(undefined1 *)(lVar11 + 0x28) = 0;
        uVar7 = thunk_FUN_03f9944c(DAT_0918ce98);
        UnityEngine_WaitForSecondsRealtime___ctor(uVar16,uVar7,0);
        *(undefined8 *)(param_5 + 0x18) = uVar7;
        thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),uVar7);
        *(undefined4 *)(param_5 + 0x10) = 1;
        return 1;
      }
    }
    else {
      if (iVar9 != 1) {
        return 0;
      }
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      if (((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) &&
         (lVar10 = *(long *)(*(long *)(lVar11 + 0x10) + 0x58), lVar10 != 0)) {
        iVar1 = *(int *)(lVar10 + 0x18);
        iVar9 = 0;
        if (iVar1 < 2) {
          iVar1 = 1;
        }
        *(int *)(param_5 + 0x48) = iVar1;
        goto LAB_0452b714;
      }
    }
  }
  else {
    if (iVar9 == 2) {
      *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
      iVar9 = *(int *)(param_5 + 0x4c) + 1;
LAB_0452b714:
      do {
        iVar1 = *(int *)(param_5 + 0x38);
        *(int *)(param_5 + 0x4c) = iVar9;
        if (iVar1 <= iVar9) {
          if (((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x10), lVar11 == 0)) ||
             (*(long *)(lVar11 + 0x58) == 0)) goto LAB_0452b960;
          fVar13 = *(float *)(*(long *)(lVar11 + 0x58) + 0x1c);
          fVar18 = *(float *)(lVar11 + 0x38);
          fVar19 = *(float *)(lVar11 + 0x3c);
          fVar17 = 0.01;
          if (0.01 <= fVar13) {
            fVar17 = fVar13;
          }
          uVar7 = thunk_FUN_03f9944c(DAT_0918ce98);
          UnityEngine_WaitForSecondsRealtime___ctor(fVar19 + fVar17 + fVar18 * (float)iVar1,uVar7,0)
          ;
          *(undefined8 *)(param_5 + 0x18) = uVar7;
          thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),uVar7);
          uVar16 = 3;
          goto LAB_0452b934;
        }
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) goto LAB_0452b960;
        lVar10 = *(long *)(*(long *)(lVar11 + 0x10) + 0x28);
        lVar3 = 0;
        if (lVar10 == 0) goto LAB_0452b960;
        lVar10 = FUN_05d3a648(lVar10,DAT_091b7d18);
        lVar3 = 0;
        if (lVar10 == 0) goto LAB_0452b960;
        lVar4 = UnityEngine_Component__get_transform(lVar10,0);
        lVar3 = lVar4;
        if (*(long *)(lVar11 + 0x10) == 0) goto LAB_0452b960;
        lVar5 = *(long *)(*(long *)(lVar11 + 0x10) + 0x90);
        lVar3 = 0;
        if (lVar5 == 0) goto LAB_0452b960;
        lVar3 = UnityEngine_Transform__get_position(lVar5,0);
        if (*(long *)(lVar11 + 0x10) == 0) goto LAB_0452b960;
        lVar5 = *(long *)(*(long *)(lVar11 + 0x10) + 0x90);
        lVar3 = 0;
        if ((lVar5 == 0) ||
           (uVar16 = param_2, uVar14 = param_3, lVar3 = UnityEngine_Transform__get_rotation(lVar5,0)
           , lVar4 == 0)) goto LAB_0452b960;
        uVar15 = extraout_s0_00;
        UnityEngine_Transform__SetPositionAndRotation
                  (extraout_s0,param_2,param_3,extraout_s0_00,uVar16,uVar14,param_4,lVar4,0);
        plVar6 = *(long **)(lVar11 + 0x10);
        lVar3 = 0;
        if (plVar6 == (long *)0x0) goto LAB_0452b960;
        param_4 = uVar15;
        if ((char)plVar6[0xd] != '\0') {
          uVar7 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
          UnityEngine_UI_Image__set_sprite(lVar10,uVar7,0);
          plVar6 = *(long **)(lVar11 + 0x10);
          lVar3 = 0;
          param_4 = uVar15;
          if (plVar6 == (long *)0x0) goto LAB_0452b960;
        }
        lVar4 = plVar6[0xb];
        lVar3 = UnityEngine_Component__get_transform(lVar10,0);
        if (lVar4 == 0) goto LAB_0452b960;
        Utilities_UIFlyExplodeConfig__Prepare(lVar4,lVar3);
        lVar4 = *(long *)(lVar11 + 0x10);
        uVar7 = UnityEngine_Component__get_transform(lVar10,0);
        uVar12 = *(undefined8 *)(param_5 + 0x30);
        uVar16 = *(undefined4 *)(param_5 + 0x4c);
        uVar8 = thunk_FUN_03f9944c(DAT_09174790);
        FUN_070a8c30(uVar8,lVar11,DAT_091f1650,0);
        lVar3 = Utilities_UIImageFlyToCounter_<>c__DisplayClass29_0__<ShowCurrencyFly>g__IEGoldFly_1
                          (lVar11,lVar10,uVar7,uVar12,uVar16,uVar8);
        if (lVar4 == 0) goto LAB_0452b960;
        lVar3 = UnityEngine_MonoBehaviour__StartCoroutine(lVar4,lVar3,0);
        iVar1 = *(int *)(param_5 + 0x48);
        iVar9 = *(int *)(param_5 + 0x4c) + 1;
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = iVar9 / iVar1;
        }
      } while ((iVar9 != iVar2 * iVar1) ||
              (*(int *)(param_5 + 0x38) + -1 <= *(int *)(param_5 + 0x4c)));
      *(undefined8 *)(param_5 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0x18),0);
      uVar16 = 2;
LAB_0452b934:
      *(undefined4 *)(param_5 + 0x10) = uVar16;
      return 1;
    }
    if (iVar9 != 3) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) &&
       (plVar6 = *(long **)(*(long *)(lVar11 + 0x10) + 0x20), plVar6 != (long *)0x0)) {
      *(undefined1 *)(plVar6 + 5) = 1;
      uVar16 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
      (**(code **)(*plVar6 + 0x188))(plVar6,uVar16,0,*(undefined8 *)(*plVar6 + 400));
      lVar3 = *(long *)(param_5 + 0x40);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      }
      return 0;
    }
  }
LAB_0452b960:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(lVar3);
}

