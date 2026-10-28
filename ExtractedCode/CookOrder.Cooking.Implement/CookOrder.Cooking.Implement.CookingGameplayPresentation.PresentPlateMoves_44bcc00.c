// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$PresentPlateMoves
// address: 0x44bcc00
// body: available
// range: 0x44bcc00-0x44bcddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bcdd8 to 0x44bcde0 CookOrder.Cooking.Implement.CookingGameplayPresentation$$AnimatePlateMoves (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44bcddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__PresentPlateMoves(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  
  if ((DAT_0951824c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091caac0);
    FUN_03f5c2a4(&DAT_091cad90);
    FUN_03f5c2a4(&DAT_0917b320);
    DAT_0951824c = 1;
  }
  if (((*(char *)(param_1 + 0x3c0) != '\0') || (lVar7 = *(long *)(param_1 + 0x2d8), lVar7 == 0)) ||
     (*(long *)(lVar7 + 0x118) == 0)) {
    return;
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    uVar3 = DG_Tweening_TweenExtensions__IsActive(*(long *)(param_1 + 0x400),0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x2d8);
    if (lVar7 == 0) goto LAB_044bcddc;
  }
  lVar7 = *(long *)(lVar7 + 0x118);
  if ((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + 0x178), lVar8 != 0)) {
    uVar3 = System_Guid__op_Inequality
                      (*(undefined8 *)(param_1 + 0x3f0),*(undefined8 *)(param_1 + 0x3f8),
                       *(undefined8 *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x78),0);
    if ((uVar3 & 1) != 0) {
      lVar8 = *(long *)(lVar7 + 0x178);
      if (lVar8 == 0) goto LAB_044bcddc;
      uVar10 = *(undefined8 *)(lVar8 + 0x78);
      uVar6 = *(undefined8 *)(lVar8 + 0x70);
      *(undefined4 *)(param_1 + 0x3ec) = 0;
      *(undefined8 *)(param_1 + 0x3f8) = uVar10;
      *(undefined8 *)(param_1 + 0x3f0) = uVar6;
    }
    plVar4 = (long *)CookingGraph_CookingLevelSimulation__get_PlateMoves(lVar7,0);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917b320) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_044bcd28;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b320,0);
LAB_044bcd28:
      iVar1 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (iVar1 <= *(int *)(param_1 + 0x3ec)) {
        return;
      }
      uVar6 = FUN_04b01f88(plVar4,*(int *)(param_1 + 0x3ec),DAT_091caac0);
      uVar6 = FUN_04b0440c(uVar6,DAT_091cad90);
      lVar7 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917b320) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_044bcdb4;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b320,0);
LAB_044bcdb4:
      uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      *(undefined4 *)(param_1 + 0x3ec) = uVar2;
      CookOrder_Cooking_Implement_CookingGameplayPresentation__AnimatePlateMoves(param_1,uVar6);
      return;
    }
  }
LAB_044bcddc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

