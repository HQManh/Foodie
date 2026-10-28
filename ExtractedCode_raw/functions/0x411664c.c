// rea decompile_all
// name: AnhPD.FoodOrder.HighlightBlink$$BuildCopies
// address: 0x411664c
// body: available
// range: 0x411664c-0x41169bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4116774 to 0x85f7650 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41169b4 to 0x4116010 AnhPD.FoodOrder.HighlightBlink$$SetCopiesActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41169b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41169bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_HighlightBlink__BuildCopies(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if ((DAT_09516237 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5860);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09185100);
    FUN_03f5c2a4(&DAT_091b0400);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09216ea8);
    FUN_03f5c2a4(&DAT_09213d20);
    DAT_09516237 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
LAB_0411672c:
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_09213d20,param_1,0);
    return;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar8,0,0);
  if ((uVar2 & 1) != 0) goto LAB_0411672c;
  AnhPD_FoodOrder_HighlightBlink__ClearCopies(param_1);
  if (*(char *)(param_1 + 0x44) == '\0') {
    uVar4 = 4;
  }
  else {
    if (*(int *)(DAT_09185100 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09185100 + 0xb8) == 0) goto LAB_041169b8;
    uVar4 = *(uint *)(**(long **)(DAT_09185100 + 0xb8) + 0x18);
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar3 = FUN_04a6ac70(*(long *)(param_1 + 0x20),0,DAT_091c5860), lVar3 != 0)) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar2 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar2) {
LAB_041169bc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *(long *)(lVar3 + uVar2 * 8 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(lVar9,0);
        if ((uVar5 & 1) != 0) {
          if (lVar9 == 0) goto LAB_041169b8;
          uVar5 = UnityEngine_Renderer__get_enabled(lVar9,0);
          if ((uVar5 & 1) != 0) {
            uVar8 = UnityEngine_SpriteRenderer__get_sprite(lVar9,0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar5 = UnityEngine_Object__op_Equality(uVar8,0,0);
            if ((uVar5 & 1) == 0) {
              uVar8 = UnityEngine_Object__GetName(lVar9,0);
              uVar5 = System_String__op_Equality(uVar8,DAT_09216ea8,0);
              if (((uVar5 & 1) == 0) && (0 < (int)uVar4)) {
                uVar5 = 0;
                lVar11 = 0x20;
                do {
                  lVar10 = *(long *)(param_1 + 0x48);
                  if (*(int *)(DAT_09185100 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar6 = **(long **)(DAT_09185100 + 0xb8);
                  if (lVar6 == 0) goto LAB_041169b8;
                  if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_041169bc;
                  uVar8 = AnhPD_FoodOrder_HighlightBlink__CreateCopy
                                    (*(float *)(lVar6 + lVar11) * *(float *)(param_1 + 0x30),
                                     ((float *)(lVar6 + lVar11))[1] * *(float *)(param_1 + 0x30),
                                     param_1,lVar9);
                  lVar6 = DAT_091b0400;
                  if (lVar10 == 0) goto LAB_041169b8;
                  lVar7 = *(long *)(lVar10 + 0x10);
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar7 == 0) goto LAB_041169b8;
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                    thunk_FUN_03f5d7b8();
                  }
                  else {
                    FUN_057e0c68(lVar10,uVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar5 = uVar5 + 1;
                  lVar11 = lVar11 + 8;
                } while (uVar4 != uVar5);
              }
            }
          }
        }
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    AnhPD_FoodOrder_HighlightBlink__SetCopiesActive(param_1,0);
    return;
  }
LAB_041169b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

