// rea decompile_all
// name: AnhPD.FoodOrder.SushiDropPlayer$$Play
// address: 0x41694cc
// body: available
// range: 0x41694cc-0x4169a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4169a54 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4169a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4169a5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SushiDropPlayer__Play
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6)

{
  float *pfVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  
  if ((DAT_0951659c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091f0a98);
    FUN_03f5c2a4(&DAT_091f0aa0);
    FUN_03f5c2a4(&DAT_09194d28);
    FUN_03f5c2a4(&DAT_091f0aa8);
    FUN_03f5c2a4(&DAT_09194d30);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_0951659c = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09194d28);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_4);
    *(undefined8 *)(lVar3 + 0x18) = param_6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),param_6);
    AnhPD_FoodOrder_SushiDropPlayer__Kill(param_4);
    *(long *)(param_4 + 0x30) = param_5;
    thunk_FUN_03f5d7b8((long *)(param_4 + 0x30),param_5);
    if (param_5 != 0) {
      lVar4 = FUN_03f5c394(DAT_091807f8,*(undefined4 *)(param_5 + 0x18));
      plVar5 = (long *)(param_4 + 0x38);
      *plVar5 = lVar4;
      thunk_FUN_03f5d7b8();
      lVar4 = FUN_03f5c394(DAT_091807f8,*(undefined4 *)(param_5 + 0x18));
      *(long *)(param_4 + 0x40) = lVar4;
      thunk_FUN_03f5d7b8();
      lVar4 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(param_5 + 0x18));
      plVar11 = (long *)(param_4 + 0x48);
      *plVar11 = lVar4;
      thunk_FUN_03f5d7b8(plVar11,lVar4);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = DG_Tweening_DOTween__Sequence(0);
      *(undefined8 *)(param_4 + 0x50) = uVar6;
      thunk_FUN_03f5d7b8();
      if (0 < *(int *)(param_5 + 0x18)) {
        uVar10 = 0;
        iVar9 = 0;
        lVar4 = 0x28;
        do {
          lVar7 = thunk_FUN_03f9944c(DAT_09194d30);
          System_Object___ctor(lVar7,0);
          if (lVar7 == 0) goto LAB_04169a58;
          *(long *)(lVar7 + 0x28) = lVar3;
          thunk_FUN_03f5d7b8((long *)(lVar7 + 0x28),lVar3);
          if (*(uint *)(param_5 + 0x18) <= uVar10) goto LAB_04169a5c;
          plVar15 = (long *)(lVar7 + 0x10);
          *plVar15 = *(long *)(param_5 + 0x20 + uVar10 * 8);
          thunk_FUN_03f5d7b8(plVar15);
          lVar12 = *plVar15;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = UnityEngine_Object__op_Implicit(lVar12,0);
          if ((uVar8 & 1) != 0) {
            if (*plVar15 == 0) goto LAB_04169a58;
            lVar12 = *plVar5;
            fVar16 = (float)UnityEngine_Transform__get_localPosition(*plVar15,0);
            if (lVar12 == 0) goto LAB_04169a58;
            if (*(uint *)(lVar12 + 0x18) <= uVar10) {
LAB_04169a5c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            pfVar1 = (float *)(lVar12 + lVar4);
            pfVar1[-2] = fVar16;
            pfVar1[-1] = param_2;
            *pfVar1 = param_3;
            if (*plVar15 == 0) goto LAB_04169a58;
            lVar12 = *(long *)(param_4 + 0x40);
            fVar16 = (float)UnityEngine_Transform__get_localScale(*plVar15,0);
            if (lVar12 == 0) goto LAB_04169a58;
            if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_04169a5c;
            pfVar1 = (float *)(lVar12 + lVar4);
            pfVar1[-2] = fVar16;
            pfVar1[-1] = param_2;
            *pfVar1 = param_3;
            if (*plVar15 == 0) goto LAB_04169a58;
            lVar13 = *plVar11;
            lVar12 = UnityEngine_Component__get_gameObject(*plVar15,0);
            if ((lVar12 == 0) ||
               (bVar2 = UnityEngine_GameObject__get_activeSelf(lVar12,0), lVar13 == 0))
            goto LAB_04169a58;
            if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_04169a5c;
            lVar12 = *plVar11;
            *(byte *)(lVar13 + uVar10 + 0x20) = bVar2 & 1;
            if (lVar12 == 0) goto LAB_04169a58;
            if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_04169a5c;
            if (*(char *)(lVar12 + uVar10 + 0x20) != '\0') {
              if ((*plVar15 == 0) ||
                 (lVar12 = UnityEngine_Component__get_gameObject(*plVar15,0), lVar12 == 0))
              goto LAB_04169a58;
              UnityEngine_GameObject__SetActive(lVar12,0,0);
              lVar12 = *plVar5;
              if (lVar12 == 0) goto LAB_04169a58;
              if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_04169a5c;
              uVar17 = *(undefined4 *)(lVar12 + lVar4);
              *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)((undefined4 *)(lVar12 + lVar4) + -2);
              *(undefined4 *)(lVar7 + 0x20) = uVar17;
              uVar14 = *(undefined8 *)(param_4 + 0x50);
              fVar16 = *(float *)(param_4 + 0x10) * (float)iVar9;
              uVar6 = thunk_FUN_03f9944c(DAT_0918c148);
              DG_Tweening_TweenCallback___ctor(uVar6,lVar7,DAT_091f0aa8,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback(fVar16,uVar14,uVar6,0);
              uVar14 = *(undefined8 *)(param_4 + 0x50);
              uVar6 = DG_Tweening_ShortcutExtensions__DOLocalMove
                                (*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                                 *(undefined4 *)(lVar7 + 0x20),*(undefined4 *)(param_4 + 0x18),
                                 *(undefined8 *)(lVar7 + 0x10),0,0);
              uVar6 = FUN_04d95e8c(uVar6,*(undefined4 *)(param_4 + 0x1c),DAT_091dbeb0);
              DG_Tweening_TweenSettingsExtensions__Insert(fVar16,uVar14,uVar6,0);
              lVar7 = *(long *)(lVar7 + 0x28);
              if (lVar7 == 0) goto LAB_04169a58;
              uVar6 = *(undefined8 *)(param_4 + 0x50);
              fVar18 = *(float *)(param_4 + 0x18);
              lVar12 = *(long *)(lVar7 + 0x20);
              if (lVar12 == 0) {
                lVar12 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(lVar12,lVar7,DAT_091f0aa0,0);
                *(long *)(lVar7 + 0x20) = lVar12;
                thunk_FUN_03f5d7b8((long *)(lVar7 + 0x20),lVar12);
              }
              DG_Tweening_TweenSettingsExtensions__InsertCallback(fVar16 + fVar18,uVar6,lVar12,0);
              lVar7 = *(long *)(param_4 + 0x40);
              if (lVar7 == 0) goto LAB_04169a58;
              if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_04169a5c;
              fVar18 = *(float *)(lVar7 + lVar4 + -4);
              uVar14 = *(undefined8 *)(param_4 + 0x50);
              fVar19 = *(float *)(param_4 + 0x18);
              iVar9 = iVar9 + 1;
              param_2 = fVar18 * -*(float *)(param_4 + 0x20);
              param_3 = fVar18 * 0.0;
              uVar6 = DG_Tweening_ShortcutExtensions__DOPunchScale
                                (*(float *)(param_4 + 0x20) * fVar18,param_2,param_3,
                                 *(undefined4 *)(param_4 + 0x24),0x3f000000,*plVar15,1,0);
              DG_Tweening_TweenSettingsExtensions__Insert(fVar16 + fVar19,uVar14,uVar6,0);
            }
          }
          uVar10 = uVar10 + 1;
          lVar4 = lVar4 + 0xc;
        } while ((long)uVar10 < (long)*(int *)(param_5 + 0x18));
      }
      uVar14 = *(undefined8 *)(param_4 + 0x50);
      uVar6 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar6,lVar3,DAT_091f0a98,0);
      FUN_04d956bc(uVar14,uVar6,DAT_091dbd18);
      return;
    }
  }
LAB_04169a58:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

