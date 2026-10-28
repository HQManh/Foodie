// rea decompile_all
// name: CakeOrder.PopupMinigame.MinisceneControlCookOrder.<IECreateRenderTexture>d__23$$MoveNext
// address: 0x43799d4
// body: available
// range: 0x43799d4-0x4379e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4379e80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_PopupMinigame_MinisceneControlCookOrder_<IECreateRenderTexture>d__23__MoveNext
          (long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_0951792e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189ff8);
    FUN_03f5c2a4(&DAT_0918ce80);
    FUN_03f5c2a4(&DAT_0920bb88);
    FUN_03f5c2a4(&DAT_0920bb80);
    DAT_0951792e = 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x20);
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      iVar2 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((iVar2 < 1) || (iVar3 = *(int *)(param_1 + 0x2c), iVar3 < 1)) {
        if (lVar12 == 0) goto LAB_04379e80;
        uVar4 = *(undefined4 *)(lVar12 + 0x40);
        *(undefined4 *)(param_1 + 0x30) = uVar4;
        *(undefined4 *)(param_1 + 0x34) = uVar4;
      }
      else {
        fVar13 = (float)iVar2 / (float)iVar3;
        if (1.0 <= fVar13) {
          if (lVar12 == 0) goto LAB_04379e80;
          if (*(int *)(lVar12 + 0x44) <= iVar2) {
            iVar2 = *(int *)(lVar12 + 0x44);
          }
          iVar3 = -0x80000000;
          if ((float)iVar2 / fVar13 != INFINITY) {
            iVar3 = (int)((float)iVar2 / fVar13);
          }
          *(int *)(param_1 + 0x30) = iVar2;
          *(int *)(param_1 + 0x34) = iVar3;
        }
        else {
          if (lVar12 == 0) goto LAB_04379e80;
          if (*(int *)(lVar12 + 0x44) <= iVar3) {
            iVar3 = *(int *)(lVar12 + 0x44);
          }
          iVar2 = -0x80000000;
          if (fVar13 * (float)iVar3 != INFINITY) {
            iVar2 = (int)(fVar13 * (float)iVar3);
          }
          *(int *)(param_1 + 0x30) = iVar2;
          *(int *)(param_1 + 0x34) = iVar3;
        }
      }
      if (*(long *)(lVar12 + 0x20) == 0) goto LAB_04379e80;
      UnityEngine_Camera__set_targetTexture(*(long *)(lVar12 + 0x20),0,0);
      uVar5 = UnityEngine_RenderTexture__GetActive(0);
      uVar10 = *(undefined8 *)(lVar12 + 0x38);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar5,uVar10,0);
      if ((uVar7 & 1) != 0) {
        UnityEngine_RenderTexture__set_active(0,0);
      }
      uVar5 = thunk_FUN_03f9944c(DAT_0918ce80);
      UnityEngine_WaitForEndOfFrame___ctor(uVar5,0);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar5);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
    else if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) ||
         (lVar12 = UnityEngine_Component__get_gameObject(*(long *)(lVar12 + 0x20),0), lVar12 == 0))
      goto LAB_04379e80;
      UnityEngine_GameObject__SetActive(lVar12,0,0);
      uVar5 = thunk_FUN_03f9944c(DAT_0918ce80);
      UnityEngine_WaitForEndOfFrame___ctor(uVar5,0);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar5);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar12 == 0) goto LAB_04379e80;
  plVar9 = (long *)(lVar12 + 0x38);
  lVar11 = *plVar9;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(lVar11,0);
  if ((uVar7 & 1) == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    lVar11 = thunk_FUN_03f9944c(DAT_09189ff8);
    UnityEngine_RenderTexture___ctor(lVar11,uVar4,uVar1,0x18,0);
    *plVar9 = lVar11;
    thunk_FUN_03f5d7b8(plVar9,lVar11);
    if (*plVar9 == 0) goto LAB_04379e80;
    UnityEngine_RenderTexture__set_format(*plVar9,0,0);
    if (*plVar9 == 0) goto LAB_04379e80;
    UnityEngine_RenderTexture__set_useMipMap(*plVar9,0,0);
    if (*plVar9 == 0) goto LAB_04379e80;
    UnityEngine_RenderTexture__set_autoGenerateMips(*plVar9,0,0);
    if (*plVar9 == 0) goto LAB_04379e80;
    UnityEngine_Texture__set_wrapMode(*plVar9,1,0);
    if (*plVar9 == 0) goto LAB_04379e80;
    UnityEngine_Texture__set_filterMode(*plVar9,1,0);
    if (*plVar9 == 0) goto LAB_04379e80;
    UnityEngine_RenderTexture__set_useDynamicScale(*plVar9,1,0);
    if (*plVar9 == 0) goto LAB_04379e80;
    UnityEngine_RenderTexture__Create(*plVar9,0);
    local_34 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = FUN_03f5c42c(DAT_09535420,&local_34);
    local_38 = *(undefined4 *)(param_1 + 0x34);
    uVar10 = FUN_03f5c42c(DAT_09535420,&local_38);
    puVar8 = &DAT_0920bb80;
  }
  else {
    if (*plVar9 == 0) goto LAB_04379e80;
    UnityEngine_RenderTexture__Release(*plVar9,0);
    plVar6 = (long *)*plVar9;
    if (plVar6 == (long *)0x0) goto LAB_04379e80;
    (**(code **)(*plVar6 + 0x198))
              (plVar6,*(undefined4 *)(param_1 + 0x30),*(undefined8 *)(*plVar6 + 0x1a0));
    plVar6 = (long *)*plVar9;
    if (plVar6 == (long *)0x0) goto LAB_04379e80;
    (**(code **)(*plVar6 + 0x1b8))
              (plVar6,*(undefined4 *)(param_1 + 0x34),*(undefined8 *)(*plVar6 + 0x1c0));
    if (*plVar9 == 0) goto LAB_04379e80;
    UnityEngine_RenderTexture__Create(*plVar9,0);
    local_34 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = FUN_03f5c42c(DAT_09535420,&local_34);
    local_38 = *(undefined4 *)(param_1 + 0x34);
    uVar10 = FUN_03f5c42c(DAT_09535420,&local_38);
    puVar8 = &DAT_0920bb88;
  }
  uVar5 = System_String__Format(*puVar8,uVar5,uVar10,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__Log(uVar5,0);
  if (*(long *)(lVar12 + 0x20) != 0) {
    UnityEngine_Camera__set_targetTexture(*(long *)(lVar12 + 0x20),*(undefined8 *)(lVar12 + 0x38),0)
    ;
    if ((*(long *)(lVar12 + 0x20) != 0) &&
       (lVar11 = UnityEngine_Component__get_gameObject(*(long *)(lVar12 + 0x20),0), lVar11 != 0)) {
      UnityEngine_GameObject__SetActive(lVar11,1,0);
      *(undefined1 *)(lVar12 + 0x54) = 1;
      return 0;
    }
  }
LAB_04379e80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

