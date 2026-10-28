// rea decompile_all
// name: CakeOrder.Home.UIHomeNavControl$$SetUpTabWidths
// address: 0x4300760
// body: available
// range: 0x4300760-0x43009ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43008c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43009e0 to 0x4300e4c CakeOrder.Home.UIHomeNavControl$$ResizeTabs (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43009e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43009ec to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeNavControl__SetUpTabWidths(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_0951754a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0708);
    FUN_03f5c2a4(&DAT_09175b50);
    FUN_03f5c2a4(&DAT_09180408);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_091f15d0);
    FUN_03f5c2a4(&DAT_091955e8);
    DAT_0951754a = 1;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0xd8),0,0);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = FUN_03f5c394(DAT_09180408,*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x18));
    plVar5 = (long *)(param_1 + 0xb8);
    *plVar5 = lVar1;
    thunk_FUN_03f5d7b8(plVar5,lVar1);
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 != 0) {
      uVar7 = 0;
      while( true ) {
        lVar6 = *plVar5;
        if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar7) break;
        if (*(uint *)(lVar1 + 0x18) <= uVar7) {
LAB_043009e4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = (long)(int)uVar7;
        lVar1 = *(long *)(lVar1 + lVar9 * 8 + 0x20);
        if ((lVar1 == 0) ||
           (plVar2 = (long *)UnityEngine_Component__get_transform(lVar1,0), lVar6 == 0))
        goto LAB_043008c4;
        if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar2);
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_043009e4;
        uVar7 = uVar7 + 1;
        plVar3 = (long *)(lVar6 + lVar9 * 8 + 0x20);
        *plVar3 = (long)plVar2;
        thunk_FUN_03f5d7b8(plVar3,plVar2);
        lVar1 = *(long *)(param_1 + 0x48);
        if (lVar1 == 0) goto LAB_043008c4;
      }
      if (*(int *)(DAT_091955e8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined8 **)(DAT_091955e8 + 0xb8);
      lVar1 = puVar4[1];
      if (lVar1 == 0) {
        if (*(int *)(DAT_091955e8 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar4 = *(undefined8 **)(DAT_091955e8 + 0xb8);
        }
        uVar8 = *puVar4;
        lVar1 = thunk_FUN_03f9944c(DAT_09175b50);
        FUN_06d4541c(lVar1,uVar8,DAT_091f15d0,0);
        plVar2 = (long *)(*(long *)(DAT_091955e8 + 0xb8) + 8);
        *plVar2 = lVar1;
        thunk_FUN_03f5d7b8(plVar2,lVar1);
      }
      FUN_04950548(lVar6,lVar1,DAT_091c0708);
      if (*plVar5 != 0) {
        uVar8 = FUN_03f5c394(DAT_09180528,*(undefined4 *)(*plVar5 + 0x18));
        *(undefined8 *)(param_1 + 0xc0) = uVar8;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),uVar8);
        if (*(long *)(param_1 + 0xb8) != 0) {
          uVar8 = FUN_03f5c394(DAT_09180528,*(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x18));
          *(undefined8 *)(param_1 + 200) = uVar8;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 200),uVar8);
          if (*(long *)(param_1 + 0xb8) != 0) {
            uVar8 = FUN_03f5c394(DAT_09180528,*(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x18));
            *(undefined8 *)(param_1 + 0xd0) = uVar8;
            thunk_FUN_03f5d7b8();
            CakeOrder_Home_UIHomeNavControl__ResizeTabs(param_1,0);
            return;
          }
        }
      }
    }
  }
LAB_043008c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

