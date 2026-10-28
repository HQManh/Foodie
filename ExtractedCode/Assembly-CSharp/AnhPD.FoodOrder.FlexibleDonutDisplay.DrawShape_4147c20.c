// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleDonutDisplay$$DrawShape
// address: 0x4147c20
// body: available
// range: 0x4147c20-0x4147dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4147d30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleDonutDisplay__DrawShape
               (undefined8 param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09516426 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2b18);
    FUN_03f5c2a4(&DAT_091b2b20);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516426 = 1;
  }
  if ((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x20), lVar3 != 0)) {
    iVar2 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar2) {
        uVar5 = *(undefined8 *)(param_2 + 0x30);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar4 & 1) != 0) {
          lVar3 = *(long *)(param_2 + 0x30);
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(param_3,0xf,0);
          if (lVar3 == 0) break;
          uVar4 = UnityEngine_GameObject__SetActive(lVar3,0 < iVar2,0);
        }
        uStack_78 = param_3[1];
        local_80 = *param_3;
        local_70 = param_3[2];
        AnhPD_FoodOrder_FlexibleDonutDisplay__DrawFruits(uVar4,param_2,&local_80);
        return;
      }
      lVar3 = FUN_057e0998(lVar3,iVar2,DAT_091b2b20);
      if (lVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar3 + 0x18);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar4 & 1) != 0) {
        if (lVar3 == 0) break;
        uStack_58 = param_3[1];
        local_60 = *param_3;
        local_50 = param_3[2];
        lVar6 = *(long *)(lVar3 + 0x18);
        uVar1 = AnhPD_FoodOrder_FlexibleDonutDisplay_GlazeVisual__WantsActive(lVar3,&local_60);
        if (lVar6 == 0) break;
        UnityEngine_GameObject__SetActive(lVar6,uVar1 & 1,0);
      }
      lVar3 = *(long *)(param_2 + 0x20);
      iVar2 = iVar2 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

