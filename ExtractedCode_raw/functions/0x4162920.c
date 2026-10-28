// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleSushiDisplay$$Display
// address: 0x4162920
// body: available
// range: 0x4162920-0x4162b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4162af4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4162b14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleSushiDisplay__Display(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09516576 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2bd8);
    FUN_03f5c2a4(&DAT_091b2be0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b680);
    DAT_09516576 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar5) {
        uStack_88 = param_2[1];
        local_90 = *param_2;
        local_80 = param_2[2];
        if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_a8 = uStack_88;
        local_b0 = local_90;
        local_a0 = local_80;
        uVar1 = AnhPD_FoodOrder_SushiPieceTable__IsPlainBase(&local_b0);
        lVar2 = *(long *)(param_1 + 0x28);
        if (lVar2 == 0) {
          return;
        }
        lVar7 = 4;
        goto LAB_04162a84;
      }
      lVar2 = FUN_057e0998(lVar2,iVar5,DAT_091b2be0);
      if (lVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar2 + 0x18);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar3 & 1) != 0) {
        if (lVar2 == 0) break;
        uStack_68 = param_2[1];
        local_70 = *param_2;
        local_60 = param_2[2];
        lVar7 = *(long *)(lVar2 + 0x18);
        uVar1 = AnhPD_FoodOrder_FlexibleSushiDisplay_PieceVisual__WantsActive(lVar2,&local_70);
        if (lVar7 == 0) break;
        UnityEngine_GameObject__SetActive(lVar7,uVar1 & 1,0);
      }
      lVar2 = *(long *)(param_1 + 0x20);
      iVar5 = iVar5 + 1;
    } while (lVar2 != 0);
  }
  goto LAB_04162af4;
  while( true ) {
    lVar2 = *(long *)(param_1 + 0x28);
    lVar7 = lVar7 + 1;
    if (lVar2 == 0) break;
LAB_04162a84:
    uVar3 = lVar7 - 4;
    if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar3) {
      return;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_04162b14:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar6 = *(undefined8 *)(lVar2 + lVar7 * 8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar4 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_04162b14;
      lVar2 = *(long *)(lVar2 + lVar7 * 8);
      if (lVar2 == 0) break;
      UnityEngine_GameObject__SetActive(lVar2,uVar1 & 1,0);
    }
  }
LAB_04162af4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

