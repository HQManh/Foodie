// rea decompile_all
// name: CakeOrder.PopupMinigame.TestCookMinigameControl$$SetUpBeforeShow
// address: 0x773764c
// body: available
// range: 0x773764c-0x77379e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77379e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77379e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_PopupMinigame_TestCookMinigameControl__SetUpBeforeShow
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_09522a9b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091749c0);
    FUN_03f5c2a4(&DAT_091b0d48);
    FUN_03f5c2a4(&DAT_091b0d40);
    FUN_03f5c2a4(&DAT_0917ce28);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_091db188);
    DAT_09522a9b = 1;
  }
  CakeOrder_PopupMinigame_CookOrderPopupMinigameControllerAbstract__SetUpBeforeShow
            (param_4,param_5,param_6,0);
  lVar9 = *(long *)(param_4 + 0x78);
  if (lVar9 != 0) {
    uVar4 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar4) {
      uVar10 = 0;
      do {
        if (uVar4 <= uVar10) goto LAB_077379e4;
        lVar7 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_077379e0;
        UnityEngine_GameObject__SetActive(lVar7,0,0);
        lVar1 = UnityEngine_GameObject__get_transform(lVar7,0);
        if (lVar1 == 0) goto LAB_077379e0;
        UnityEngine_Transform__SetParent(lVar1,0,0);
        lVar1 = UnityEngine_GameObject__get_transform(lVar7,0);
        lVar2 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar2 == 0) goto LAB_077379e0;
        fVar11 = (float)UnityEngine_Transform__get_position(lVar2,0);
        fVar13 = param_2;
        fVar14 = param_3;
        fVar12 = (float)UnityEngine_Random__get_insideUnitSphere(0);
        if (lVar1 == 0) goto LAB_077379e0;
        UnityEngine_Transform__set_position
                  (fVar11 + fVar12 * 5.0,param_2 + fVar13 * 5.0,param_3 + fVar14 * 5.0,lVar1,0);
        lVar7 = UnityEngine_GameObject__get_transform(lVar7,0);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        if (lVar7 == 0) goto LAB_077379e0;
        lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
        param_2 = *(float *)(lVar1 + 0x10);
        param_3 = *(float *)(lVar1 + 0x14);
        UnityEngine_Transform__set_localScale(*(undefined4 *)(lVar1 + 0xc),lVar7,0);
        uVar4 = *(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar4);
    }
    lVar9 = thunk_FUN_03f9944c(DAT_0917ce28);
    FUN_057e0400(lVar9,DAT_091b0d40);
    plVar6 = (long *)(param_4 + 0x88);
    *plVar6 = lVar9;
    thunk_FUN_03f5d7b8(plVar6,lVar9);
    lVar9 = *(long *)(param_4 + 0x80);
    if (lVar9 != 0) {
      uVar4 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar4) {
        uVar10 = 0;
        do {
          lVar7 = DAT_091b0d48;
          if (uVar4 <= uVar10) {
LAB_077379e4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar1 = *plVar6;
          if (lVar1 == 0) goto LAB_077379e0;
          lVar2 = *(long *)(lVar1 + 0x10);
          lVar8 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
          *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
          if (lVar2 == 0) goto LAB_077379e0;
          uVar4 = *(uint *)(lVar1 + 0x18);
          if (uVar4 < *(uint *)(lVar2 + 0x18)) {
            *(uint *)(lVar1 + 0x18) = uVar4 + 1;
            plVar5 = (long *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
            *plVar5 = lVar8;
            thunk_FUN_03f5d7b8(plVar5,lVar8);
          }
          else {
            FUN_057e0c68(lVar1,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          uVar3 = thunk_FUN_03f9944c(DAT_091749c0);
          FUN_070a8c30(uVar3,param_4,DAT_091db188,0);
          if (lVar8 == 0) goto LAB_077379e0;
          CakeOrder_PopupMinigame_TestObjectMinigameCook__remove_onPlayerMouseUp(lVar8,uVar3);
          uVar3 = thunk_FUN_03f9944c(DAT_091749c0);
          FUN_070a8c30(uVar3,param_4,DAT_091db188,0);
          CakeOrder_PopupMinigame_TestObjectMinigameCook__add_onPlayerMouseUp(lVar8,uVar3);
          CakeOrder_PopupMinigame_TestObjectMinigameCook__SetUpNewGame(lVar8);
          uVar4 = *(uint *)(lVar9 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar4);
      }
      lVar9 = UnityEngine_Component__get_gameObject(param_4,0);
      if (lVar9 != 0) {
        UnityEngine_GameObject__SetActive(lVar9,1,0);
        if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095175b2 == '\0') {
          FUN_03f5c2a4(&DAT_0918b8c8);
          DAT_095175b2 = '\x01';
        }
        if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        return *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x30);
      }
    }
  }
LAB_077379e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

