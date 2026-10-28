// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$DistributeAndShow
// address: 0x420cf70
// body: available
// range: 0x420cf70-0x420d56b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420d218 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420d568 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__DistributeAndShow(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_138 [72];
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  if ((DAT_09516c47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aa740);
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091aa738);
    FUN_03f5c2a4(&DAT_091aed18);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091aec50);
    FUN_03f5c2a4(&DAT_091aa6c0);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091aec58);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091aa6c8);
    FUN_03f5c2a4(&DAT_091aa750);
    FUN_03f5c2a4(&DAT_0917ba88);
    FUN_03f5c2a4(&DAT_0917c850);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180980);
    DAT_09516c47 = 1;
  }
  *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (plVar6 = (long *)FUN_057e0998(*(long *)(param_1 + 0x30),0,DAT_091aec58), plVar6 != (long *)0x0
     )) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x1c0));
    *(undefined8 *)(param_1 + 0x150) = uVar7;
    thunk_FUN_03f5d7b8(param_1 + 0x150,uVar7);
    if (*(long *)(param_1 + 0x150) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x150) + 0x18);
      AnhPD_FoodOrder_CustomerLineView__EnsureBoardCount(param_1);
      if (param_2 != 0) {
        uVar7 = FUN_03f5c394(DAT_09180980,*(undefined4 *)(param_2 + 0x18));
        *(undefined8 *)(param_1 + 0x148) = uVar7;
        thunk_FUN_03f5d7b8(param_1 + 0x148,uVar7);
        if (0 < *(int *)(param_2 + 0x18)) {
          uVar10 = 0;
          do {
            lVar13 = *(long *)(param_1 + 0x148);
            if (lVar13 == 0) goto LAB_0420d218;
            if (*(uint *)(lVar13 + 0x18) <= uVar10) {
LAB_0420d568:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar8 = uVar10 * 8;
            uVar10 = uVar10 + 1;
            *(undefined8 *)(lVar13 + lVar8 + 0x20) = 0xffffffffffffffff;
          } while ((long)uVar10 < (long)*(int *)(param_2 + 0x18));
        }
        lVar13 = *(long *)(param_1 + 0x30);
        iVar14 = iVar1;
        while (lVar13 != 0) {
          if (*(int *)(lVar13 + 0x18) <= iVar14) {
            lVar13 = thunk_FUN_03f9944c(DAT_0917ba88);
            FUN_057e0478(lVar13,iVar1,DAT_091aa738);
            if (0 < iVar1) {
              iVar14 = 0;
              goto LAB_0420d244;
            }
            *(undefined4 *)(param_1 + 0x100) = 0;
            goto LAB_0420d504;
          }
          uVar7 = FUN_057e0998(lVar13,iVar14,DAT_091aec58);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar10 = UnityEngine_Object__op_Implicit(uVar7,0);
          if ((uVar10 & 1) != 0) {
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (plVar6 = (long *)FUN_057e0998(*(long *)(param_1 + 0x30),iVar14,DAT_091aec58),
               plVar6 == (long *)0x0)) break;
            (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
            if ((*(long *)(param_1 + 0x30) == 0) ||
               ((lVar13 = FUN_057e0998(*(long *)(param_1 + 0x30),iVar14,DAT_091aec58), lVar13 == 0
                || (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)))) break;
            UnityEngine_GameObject__SetActive(lVar13,0,0);
          }
          iVar14 = iVar14 + 1;
          lVar13 = *(long *)(param_1 + 0x30);
        }
      }
    }
  }
LAB_0420d218:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar2 = *(undefined4 *)(lVar8 + 0x18);
    lVar9 = thunk_FUN_03f9944c(DAT_0917c850);
    FUN_057ee9a4(lVar9,uVar2,DAT_091aed18);
    if (0 < *(int *)(lVar8 + 0x18)) {
      iVar15 = 0;
      do {
        uVar5 = FUN_05796eb0(lVar8,iVar15,DAT_091add20);
        FUN_057eeec4(auStack_138,param_2,uVar5,DAT_091aed50);
        if (lVar9 == 0) goto LAB_0420d218;
        memcpy(auStack_f0,auStack_138,0x48);
        lVar12 = DAT_091aed20;
        lVar11 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0420d218;
        uVar4 = *(uint *)(lVar9 + 0x18);
        if (uVar4 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar4 * 0x48;
          *(uint *)(lVar9 + 0x18) = uVar4 + 1;
          memcpy((void *)(lVar11 + 0x20),auStack_f0,0x48);
          thunk_FUN_03f5d7b8(lVar11 + 0x20,0);
        }
        else {
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
          memcpy(auStack_a8,auStack_f0,0x48);
          FUN_057ef254(lVar9,auStack_a8,uVar7);
        }
        lVar12 = *(long *)(param_1 + 0x148);
        if (lVar12 == 0) goto LAB_0420d218;
        if (*(uint *)(lVar12 + 0x18) <= uVar5) goto LAB_0420d568;
        lVar12 = lVar12 + (long)(int)uVar5 * 8;
        iVar3 = *(int *)(lVar8 + 0x18);
        *(int *)(lVar12 + 0x20) = iVar14;
        *(int *)(lVar12 + 0x24) = iVar15;
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar3);
    }
    if (lVar13 == 0) goto LAB_0420d218;
    lVar8 = *(long *)(lVar13 + 0x10);
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_0420d218;
    uVar5 = *(uint *)(lVar13 + 0x18);
    if (uVar5 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar5 + 1;
      plVar6 = (long *)(lVar8 + (long)(int)uVar5 * 8 + 0x20);
      *plVar6 = lVar9;
      thunk_FUN_03f5d7b8(plVar6,lVar9);
    }
    else {
      FUN_057e0c68(lVar13,lVar9,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_091aa740 + 0x20) + 0xc0) + 0x70));
    }
    iVar14 = iVar14 + 1;
    if (iVar14 == iVar1) break;
LAB_0420d244:
    if ((*(long *)(param_1 + 0x150) == 0) ||
       (lVar8 = FUN_057e0998(*(long *)(param_1 + 0x150),iVar14,DAT_091aa6c8), lVar8 == 0))
    goto LAB_0420d218;
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (0 < iVar1) {
    iVar14 = 0;
    do {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0420d218;
      uVar7 = FUN_057e0998(*(long *)(param_1 + 0x30),iVar14,DAT_091aec58);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar10 = UnityEngine_Object__op_Implicit(uVar7,0);
      fVar16 = 0.0;
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_0420d218;
        plVar6 = (long *)FUN_057e0998(*(long *)(param_1 + 0x30),iVar14,DAT_091aec58);
        uVar7 = FUN_057e0998(lVar13,iVar14,DAT_091aa750);
        if (plVar6 == (long *)0x0) goto LAB_0420d218;
        fVar16 = (float)(**(code **)(*plVar6 + 0x1f8))
                                  (plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x200));
      }
      fVar18 = (float)iVar14;
      iVar14 = iVar14 + 1;
      fVar17 = *(float *)(param_1 + 0xe0);
      if (*(float *)(param_1 + 0xe0) <= fVar16) {
        fVar17 = fVar16;
      }
      fVar17 = *(float *)(param_1 + 0xe4) * fVar18 + fVar17;
      fVar16 = *(float *)(param_1 + 0x100);
      if (*(float *)(param_1 + 0x100) <= fVar17) {
        fVar16 = fVar17;
      }
      *(float *)(param_1 + 0x100) = fVar16;
    } while (iVar1 != iVar14);
  }
LAB_0420d504:
  lVar8 = *(long *)(param_1 + 0xf8);
  if (lVar8 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar8,0);
  }
  uVar7 = AnhPD_FoodOrder_CustomerLineView__RevealBoardsRoutine(param_1,lVar13);
  uVar7 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar7,0);
  *(undefined8 *)(param_1 + 0xf8) = uVar7;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0xf8),uVar7);
  return;
}

