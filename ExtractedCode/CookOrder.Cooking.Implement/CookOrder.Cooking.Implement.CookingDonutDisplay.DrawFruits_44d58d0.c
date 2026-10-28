// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingDonutDisplay$$DrawFruits
// address: 0x44d58d0
// body: available
// range: 0x44d58d0-0x44d5a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d5a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d5a40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingDonutDisplay__DrawFruits
               (undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((DAT_095182ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2370);
    FUN_03f5c2a4(&DAT_091b2378);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095182ef = 1;
  }
  iVar2 = CookOrder_Cooking_Implement_CookingDonutDisplay__CountFruitKinds(param_3);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x28);
    if (lVar3 != 0) {
      iVar5 = 0;
      do {
        if (*(int *)(lVar3 + 0x18) <= iVar5) {
          return;
        }
        lVar3 = FUN_057e0998(lVar3,iVar5,DAT_091b2378);
        if (lVar3 != 0) {
          if (param_3 == 0) break;
          if (*(uint *)(param_3 + 0x18) <= *(uint *)(lVar3 + 0x10)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar6 = *(undefined8 *)(lVar3 + 0x18);
          iVar1 = *(int *)(param_3 + (long)(int)*(uint *)(lVar3 + 0x10) * 4 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(lVar3 + 0x18) == 0) break;
            UnityEngine_GameObject__SetActive
                      (*(long *)(lVar3 + 0x18),
                       (iVar2 == 1 && iVar1 != 0) && (iVar2 != 1 || -1 < iVar1),0);
          }
          uVar6 = *(undefined8 *)(lVar3 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(lVar3 + 0x20) == 0) break;
            UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x20),0 < iVar1 && iVar2 != 1,0);
          }
        }
        lVar3 = *(long *)(param_2 + 0x28);
        iVar5 = iVar5 + 1;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

