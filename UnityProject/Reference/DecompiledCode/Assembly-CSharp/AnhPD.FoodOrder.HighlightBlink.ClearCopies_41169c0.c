// rea decompile_all
// name: AnhPD.FoodOrder.HighlightBlink$$ClearCopies
// address: 0x41169c0
// body: available
// range: 0x41169c0-0x4116c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4116aec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4116c38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_HighlightBlink__ClearCopies(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  if ((DAT_0951623b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5868);
    FUN_03f5c2a4(&DAT_09185100);
    FUN_03f5c2a4(&DAT_091b0408);
    FUN_03f5c2a4(&DAT_091b0428);
    FUN_03f5c2a4(&DAT_091b0430);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09216ea8);
    DAT_0951623b = 1;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    iVar8 = 0;
    while (iVar2 = *(int *)(lVar3 + 0x18), iVar8 < iVar2) {
      uVar4 = FUN_057e0998(lVar3,iVar8,DAT_091b0430);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar3 = FUN_057e0998(*(long *)(param_1 + 0x48),iVar8,DAT_091b0430), lVar3 == 0))
        goto LAB_04116aec;
        uVar4 = UnityEngine_Component__get_gameObject(lVar3,0);
        if (*(int *)(DAT_09185100 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09185100);
        }
        AnhPD_FoodOrder_HighlightBlink__DestroyCopy(uVar4);
      }
      lVar3 = *(long *)(param_1 + 0x48);
      iVar8 = iVar8 + 1;
      if (lVar3 == 0) goto LAB_04116aec;
    }
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar2) {
      System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar2,0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar3 = FUN_04a6ac70(*(long *)(param_1 + 0x20),1,DAT_091c5868), lVar3 != 0)) {
      if ((int)*(ulong *)(lVar3 + 0x18) < 1) {
        return;
      }
      uVar5 = 0;
      uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      lVar1 = lVar3 + 0x20;
      goto LAB_04116b80;
    }
  }
LAB_04116aec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_04116b80:
  if (uVar7 <= uVar5) {
LAB_04116c38:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar4 = *(undefined8 *)(lVar1 + uVar5 * 8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar7 & 1) != 0) {
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_04116c38;
    lVar6 = *(long *)(lVar1 + uVar5 * 8);
    if (lVar6 == 0) goto LAB_04116aec;
    uVar4 = UnityEngine_Object__GetName(lVar6,0);
    uVar7 = System_String__op_Equality(uVar4,DAT_09216ea8,0);
    if ((uVar7 & 1) != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_04116c38;
      lVar6 = *(long *)(lVar1 + uVar5 * 8);
      if (lVar6 == 0) goto LAB_04116aec;
      uVar4 = UnityEngine_Component__get_gameObject(lVar6,0);
      if (*(int *)(DAT_09185100 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09185100);
      }
      AnhPD_FoodOrder_HighlightBlink__DestroyCopy(uVar4);
    }
  }
  uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
  uVar5 = uVar5 + 1;
  if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar5) {
    return;
  }
  goto LAB_04116b80;
}

