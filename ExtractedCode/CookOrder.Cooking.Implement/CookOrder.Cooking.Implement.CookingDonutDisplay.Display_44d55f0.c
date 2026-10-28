// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingDonutDisplay$$Display
// address: 0x44d55f0
// body: available
// range: 0x44d55f0-0x44d571b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d56fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d5718 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingDonutDisplay__Display(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((DAT_095182ed & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b23a0);
    FUN_03f5c2a4(&DAT_091b23a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095182ed = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        return;
      }
      lVar2 = FUN_057e0998(lVar2,iVar4,DAT_091b23a8);
      if (lVar2 != 0) {
        if (param_2 == 0) break;
        if (*(uint *)(param_2 + 0x18) <= *(uint *)(lVar2 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar5 = *(undefined8 *)(lVar2 + 0x18);
        iVar1 = *(int *)(param_2 + (long)(int)*(uint *)(lVar2 + 0x10) * 4 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(lVar2 + 0x18) == 0) break;
          UnityEngine_GameObject__SetActive(*(long *)(lVar2 + 0x18),0 < iVar1,0);
        }
        if (0 < iVar1) {
          CookOrder_Cooking_Implement_CookingDonutDisplay__DrawShape(param_1,lVar2,param_2);
        }
      }
      lVar2 = *(long *)(param_1 + 0x20);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

