// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemLoginDayReward$$SetState
// address: 0x42ee830
// body: available
// range: 0x42ee830-0x42eec07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42eec00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42eec04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemLoginDayReward__SetState
               (long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  float fVar10;
  
  if ((DAT_09517499 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174cc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f1728);
    FUN_03f5c2a4(&DAT_091f1730);
    FUN_03f5c2a4(&DAT_091956f8);
    FUN_03f5c2a4(&DAT_091956f0);
    DAT_09517499 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_091956f8);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) goto LAB_042eec00;
  *(long *)(lVar2 + 0x10) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
  lVar7 = *(long *)(param_1 + 0x70);
  *(uint *)(param_1 + 0xe0) = param_2;
  if ((int)param_2 < 2) {
    if ((param_2 == 0) || (param_2 != 1)) {
LAB_042ee910:
      if (lVar7 == 0) goto LAB_042eec00;
      plVar3 = (long *)(lVar7 + 0x10);
    }
    else {
LAB_042ee8f4:
      if (lVar7 == 0) goto LAB_042eec00;
      plVar3 = (long *)(lVar7 + 0x18);
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) goto LAB_042ee910;
      goto LAB_042ee8f4;
    }
    if (lVar7 == 0) goto LAB_042eec00;
    plVar3 = (long *)(lVar7 + 0x20);
  }
  plVar9 = (long *)(lVar2 + 0x18);
  *plVar9 = *plVar3;
  thunk_FUN_03f5d7b8(plVar9);
  lVar7 = *plVar9;
  if ((lVar7 != 0) && (plVar3 = *(long **)(param_1 + 0x28), plVar3 != (long *)0x0)) {
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x110) >> 0x20) *
             (float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20);
    (**(code **)(*plVar3 + 0x2a8))
              (CONCAT44(fVar10,(float)*(undefined8 *)(param_1 + 0x110) *
                               (float)*(undefined8 *)(lVar7 + 0x10)),fVar10,
               (float)*(undefined8 *)(param_1 + 0x118) * (float)*(undefined8 *)(lVar7 + 0x18),
               (float)((ulong)*(undefined8 *)(param_1 + 0x118) >> 0x20) *
               (float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20),plVar3,
               *(undefined8 *)(*plVar3 + 0x2b0));
    uVar4 = thunk_FUN_03f9944c(DAT_09174cc8);
    FUN_071cd244(uVar4,lVar2,DAT_091f1730,0);
    CakeOrder_LiveOpsImplement_UIItemLoginDayReward__ForEachReward(param_1,uVar4);
    if (*(long *)(lVar2 + 0x18) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if ((*plVar9 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_042eec00;
        UnityEngine_UI_Image__set_sprite
                  (*(long *)(param_1 + 0x30),*(undefined8 *)(*plVar9 + 0x30),0);
      }
      lVar2 = *plVar9;
      if ((lVar2 != 0) && (plVar3 = *(long **)(param_1 + 0x30), plVar3 != (long *)0x0)) {
        fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20) *
                 (float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20);
        (**(code **)(*plVar3 + 0x2a8))
                  (CONCAT44(fVar10,(float)*(undefined8 *)(param_1 + 0xf0) *
                                   (float)*(undefined8 *)(lVar2 + 0x38)),fVar10,
                   (float)*(undefined8 *)(param_1 + 0xf8) * (float)*(undefined8 *)(lVar2 + 0x40),
                   (float)((ulong)*(undefined8 *)(param_1 + 0xf8) >> 0x20) *
                   (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20),plVar3,
                   *(undefined8 *)(*plVar3 + 0x2b0));
        if (*(long *)(param_1 + 0x48) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x48),param_2 == 2,0);
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_042eec00;
            UnityEngine_Behaviour__set_enabled
                      (*(long *)(param_1 + 0x20),(param_2 & 0xfffffffd) == 1,0);
          }
          CakeOrder_LiveOpsImplement_UIItemLoginDayReward__ApplyCover(param_1,1,param_3 & 1);
          CakeOrder_LiveOpsImplement_UIItemLoginDayReward__ApplyCoverCollected
                    (param_1,param_2 == 2,param_3 & 1);
          uVar4 = *(undefined8 *)(param_1 + 0x58);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_042eec00;
            UnityEngine_GameObject__SetActive
                      (*(long *)(param_1 + 0x58),(param_2 & 0xfffffffd) == 1,0);
          }
          if (*(int *)(DAT_091956f0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar8 = *(undefined8 **)(DAT_091956f0 + 0xb8);
          lVar2 = puVar8[1];
          if (lVar2 == 0) {
            if (*(int *)(DAT_091956f0 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar8 = *(undefined8 **)(DAT_091956f0 + 0xb8);
            }
            uVar4 = *puVar8;
            lVar2 = thunk_FUN_03f9944c(DAT_09174cc8);
            FUN_071cd244(lVar2,uVar4,DAT_091f1728,0);
            plVar3 = (long *)(*(long *)(DAT_091956f0 + 0xb8) + 8);
            *plVar3 = lVar2;
            thunk_FUN_03f5d7b8(plVar3,lVar2);
          }
          CakeOrder_LiveOpsImplement_UIItemLoginDayReward__ForEachReward(param_1,lVar2);
          if ((*(long *)(param_1 + 0x28) != 0) &&
             (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x28),0), lVar2 != 0
             )) {
            UnityEngine_GameObject__SetActive(lVar2,1,0);
            lVar2 = *(long *)(param_1 + 0x60);
            if ((lVar2 != 0) && (uVar1 = *(uint *)(lVar2 + 0x18), 0 < (int)uVar1)) {
              lVar7 = 0;
              do {
                if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar6 = *(long *)(lVar2 + 0x20 + lVar7 * 8);
                if (lVar6 == 0) goto LAB_042eec00;
                UnityEngine_GameObject__SetActive(lVar6,param_2 == 1,0);
                uVar1 = *(uint *)(lVar2 + 0x18);
                lVar7 = lVar7 + 1;
              } while ((int)lVar7 < (int)uVar1);
            }
            return;
          }
        }
      }
    }
  }
LAB_042eec00:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

