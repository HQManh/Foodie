// rea decompile_all
// name: AnhPD.FoodOrder.SeafoodOrderStrategy$$GetItemPieceOffer
// address: 0x412f5e0
// body: available
// range: 0x412f5e0-0x412f76f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412f76c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_SeafoodOrderStrategy__GetItemPieceOffer(long *param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((DAT_09516327 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184748);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189150);
    FUN_03f5c2a4(&DAT_0918a7b8);
    DAT_09516327 = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != DAT_09184748)) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
    lVar3 = 0;
    if ((uVar2 & 1) != 0) {
      if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0412f6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (**(code **)(*param_1 + 600))
                          (param_1,param_2[0xf],*(undefined8 *)(*param_1 + 0x260));
        return lVar3;
      }
LAB_0412f76c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    uVar1 = *(undefined4 *)((long)param_2 + 0xfc);
    (**(code **)(DAT_09184748 + 0x218))(&local_38,param_2,*(undefined8 *)(DAT_09184748 + 0x220));
    if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_48 = uStack_30;
    local_50 = local_38;
    local_40 = local_28;
    uVar2 = CakeOrder_InGame_Seafood_SeafoodPieceTable__IsValid(uVar1,&local_50,0,0);
    lVar3 = 0;
    if ((uVar2 & 1) != 0) {
      lVar3 = thunk_FUN_03f9944c(DAT_09189150);
      AnhPD_FoodOrder_PieceOffer___ctor(lVar3,0);
      (**(code **)(*param_2 + 0x218))(&local_38,param_2,*(undefined8 *)(*param_2 + 0x220));
      if (lVar3 == 0) goto LAB_0412f76c;
      *(undefined1 *)(lVar3 + 0x28) = 1;
      *(undefined8 *)(lVar3 + 0x18) = uStack_30;
      *(undefined8 *)(lVar3 + 0x10) = local_38;
      *(undefined8 *)(lVar3 + 0x20) = local_28;
      *(undefined4 *)(lVar3 + 0x2c) = 0;
    }
  }
  return lVar3;
}

