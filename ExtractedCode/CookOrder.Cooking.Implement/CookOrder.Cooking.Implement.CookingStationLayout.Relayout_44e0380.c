// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingStationLayout$$Relayout
// address: 0x44e0380
// body: available
// range: 0x44e0380-0x44e09f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e09f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e09f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingStationLayout__Relayout
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_a4;
  
  if ((DAT_09518357 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c04f8);
    FUN_03f5c2a4(&DAT_091cab40);
    FUN_03f5c2a4(&DAT_091cada8);
    FUN_03f5c2a4(&DAT_091cb450);
    FUN_03f5c2a4(&DAT_09178718);
    FUN_03f5c2a4(&DAT_09178710);
    FUN_03f5c2a4(&DAT_091b25e8);
    FUN_03f5c2a4(&DAT_091b25f0);
    FUN_03f5c2a4(&DAT_091b25e0);
    FUN_03f5c2a4(&DAT_091b2600);
    FUN_03f5c2a4(&DAT_0917d288);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e8068);
    FUN_03f5c2a4(&DAT_091e8078);
    FUN_03f5c2a4(&DAT_0918f780);
    FUN_03f5c2a4(&DAT_0918f770);
    DAT_09518357 = 1;
  }
  local_a4 = 0.0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917d288);
  FUN_057e0400(lVar4,DAT_091b25e0);
  lVar15 = *(long *)(param_4 + 0x20);
  local_a4 = *(float *)(param_4 + 0x2c) * 0.5;
  if (lVar15 != 0) {
    if (*(int *)(lVar15 + 0x18) < 1) {
      fVar22 = 0.0;
      fVar24 = 0.0;
    }
    else {
      fVar24 = 0.0;
      fVar22 = 0.0;
      uVar16 = 0;
      do {
        lVar5 = thunk_FUN_03f9944c(DAT_0918f780);
        System_Object___ctor(lVar5,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar16) {
LAB_044e09f4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar5 == 0) goto LAB_044e09f0;
        plVar10 = (long *)(lVar5 + 0x10);
        *plVar10 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
        thunk_FUN_03f5d7b8(plVar10);
        if (*plVar10 == 0) goto LAB_044e09f0;
        uVar11 = *(undefined8 *)(*plVar10 + 0x38);
        if (*(int *)(DAT_0918f770 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar9 = *(undefined8 **)(DAT_0918f770 + 0xb8);
        lVar13 = puVar9[4];
        if (lVar13 == 0) {
          if (*(int *)(DAT_0918f770 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar9 = *(undefined8 **)(DAT_0918f770 + 0xb8);
          }
          uVar14 = *puVar9;
          lVar13 = thunk_FUN_03f9944c(DAT_09178710);
          FUN_05322d94(lVar13,uVar14,DAT_091e8068,0);
          plVar6 = (long *)(*(long *)(DAT_0918f770 + 0xb8) + 0x20);
          *plVar6 = lVar13;
          thunk_FUN_03f5d7b8(plVar6,lVar13);
        }
        uVar11 = FUN_04b0cafc(uVar11,lVar13,DAT_091cb450);
        lVar13 = FUN_04b049e4(uVar11,DAT_091cada8);
        if ((((*plVar10 == 0) || (lVar7 = *(long *)(*plVar10 + 0x10), lVar7 == 0)) ||
            (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar13 == 0)) || (lVar7 == 0))
        goto LAB_044e09f0;
        UnityEngine_GameObject__SetActive(lVar7,*(int *)(lVar13 + 0x18) != 0,0);
        if (*plVar10 == 0) goto LAB_044e09f0;
        uVar11 = *(undefined8 *)(*plVar10 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = UnityEngine_Object__op_Implicit(uVar11,0);
        if ((uVar8 & 1) != 0) {
          if ((*plVar10 == 0) || (lVar7 = *(long *)(*plVar10 + 0x18), lVar7 == 0))
          goto LAB_044e09f0;
          UnityEngine_GameObject__SetActive(lVar7,0,0);
        }
        if (*plVar10 == 0) goto LAB_044e09f0;
        uVar11 = *(undefined8 *)(*plVar10 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = UnityEngine_Object__op_Implicit(uVar11,0);
        if ((uVar8 & 1) != 0) {
          if ((*plVar10 == 0) || (lVar7 = *(long *)(*plVar10 + 0x20), lVar7 == 0))
          goto LAB_044e09f0;
          UnityEngine_GameObject__SetActive(lVar7,1,0);
        }
        if (*(long *)(lVar13 + 0x18) != 0) {
          if (*plVar10 == 0) goto LAB_044e09f0;
          if (*(char *)(*plVar10 + 0x31) != '\0') {
            uVar11 = thunk_FUN_03f9944c(DAT_09178718);
            FUN_05324834(uVar11,lVar5,DAT_091e8078,0);
            fVar17 = (float)FUN_04b02694(lVar13,uVar11,DAT_091cab40);
            uVar3 = *(uint *)(lVar13 + 0x18);
            if ((int)uVar3 < 2) {
              if (uVar3 != 1) goto LAB_044e0878;
              fVar19 = 0.0;
              fVar23 = 0.0;
            }
            else {
              if (*plVar10 == 0) goto LAB_044e09f0;
              fVar19 = *(float *)(*plVar10 + 0x2c) - fVar17;
              fVar23 = 0.0;
              if (0.0 <= fVar19) {
                fVar23 = fVar19;
              }
              param_3 = (ulong)(uint)fVar23;
              fVar19 = (float)(int)(uVar3 - 1);
              fVar23 = fVar23 / fVar19;
            }
            lVar5 = 0;
            fVar17 = (fVar17 + fVar23 * fVar19) * 0.5;
            do {
              uVar20 = (undefined4)param_3;
              if (uVar3 <= (uint)lVar5) goto LAB_044e09f4;
              lVar7 = *plVar10;
              if (lVar7 == 0) goto LAB_044e09f0;
              lVar12 = *(long *)(lVar13 + 0x20 + lVar5 * 8);
              lVar2 = *(long *)(lVar7 + 0x40);
              uVar3 = FUN_04ee582c(*(undefined8 *)(lVar7 + 0x38),lVar12,DAT_091c04f8);
              if (lVar2 == 0) goto LAB_044e09f0;
              if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_044e09f4;
              lVar2 = lVar2 + (long)(int)uVar3 * 8;
              fVar21 = *(float *)(lVar2 + 0x24);
              fVar19 = 1.0;
              if ((*(int *)(lVar13 + 0x18) == 1) &&
                 (fVar18 = *(float *)(lVar2 + 0x20), fVar19 = 1.0, 0.0 < fVar18)) {
                if (*plVar10 == 0) goto LAB_044e09f0;
                fVar19 = *(float *)(*plVar10 + 0x28) / fVar18;
              }
              if ((lVar12 == 0) ||
                 (lVar7 = UnityEngine_Component__get_transform(lVar12,0), lVar7 == 0))
              goto LAB_044e09f0;
              UnityEngine_Transform__get_localPosition(lVar7,0);
              fVar18 = 0.0;
              if (*(int *)(lVar13 + 0x18) != 1) {
                fVar18 = fVar17 + fVar21 * -0.5;
              }
              lVar7 = UnityEngine_Component__get_transform(lVar12,0);
              if (lVar7 == 0) goto LAB_044e09f0;
              UnityEngine_Transform__set_localPosition(0,fVar18,uVar20,lVar7,0);
              lVar7 = UnityEngine_Component__get_transform(lVar12,0);
              if (lVar7 == 0) goto LAB_044e09f0;
              param_3 = 0x3f800000;
              UnityEngine_Transform__set_localScale(fVar19,fVar19,lVar7,0);
              uVar3 = *(uint *)(lVar13 + 0x18);
              lVar5 = lVar5 + 1;
              fVar17 = fVar17 - (fVar23 + fVar21);
            } while ((int)lVar5 < (int)uVar3);
          }
LAB_044e0878:
          if (lVar4 == 0) goto LAB_044e09f0;
          if (0 < *(int *)(lVar4 + 0x18)) {
            if (*plVar10 == 0) goto LAB_044e09f0;
            fVar17 = (float)CookOrder_Cooking_Implement_CookingStationLayout_Holder__get_Width();
            param_3 = (ulong)(uint)*(float *)(param_4 + 0x28);
            if (*(float *)(param_4 + 0x28) -
                (*(float *)(param_4 + 0x30) + *(float *)(param_4 + 0x30)) < fVar22 + fVar17) {
              CookOrder_Cooking_Implement_CookingStationLayout__Place
                        (fVar22,fVar24,param_4,lVar4,&local_a4);
              iVar1 = *(int *)(lVar4 + 0x18);
              fVar24 = 0.0;
              *(undefined4 *)(lVar4 + 0x18) = 0;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (0 < iVar1) {
                System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
              }
              fVar22 = 0.0;
            }
          }
          lVar5 = DAT_091b25e8;
          lVar7 = *(long *)(lVar4 + 0x10);
          lVar13 = *plVar10;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_044e09f0;
          uVar3 = *(uint *)(lVar4 + 0x18);
          if (uVar3 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar3 + 1;
            *(long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20) = lVar13;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar4,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          if (*plVar10 == 0) goto LAB_044e09f0;
          fVar17 = (float)CookOrder_Cooking_Implement_CookingStationLayout_Holder__get_Width();
          if (*plVar10 == 0) goto LAB_044e09f0;
          fVar23 = *(float *)(*plVar10 + 0x2c);
          fVar22 = fVar22 + fVar17;
          if (fVar24 <= fVar23) {
            fVar24 = fVar23;
          }
        }
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)*(int *)(lVar15 + 0x18));
    }
    CookOrder_Cooking_Implement_CookingStationLayout__Place(fVar22,fVar24,param_4,lVar4,&local_a4);
    return;
  }
LAB_044e09f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

