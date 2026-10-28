// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamCupDisplay$$SpriteFor
// address: 0x414c7a4
// body: available
// range: 0x414c7a4-0x414c91f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414c8cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414c8e8 to 0x4151598 AnhPD.FoodOrder.IceCreamScoopDisplay$$SpriteOf (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x414c91c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_IceCreamCupDisplay__SpriteFor(long param_1,uint param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((DAT_0951644c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2ff0);
    FUN_03f5c2a4(&DAT_091b2ff8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951644c = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
    if (lVar3 == 0) {
LAB_0414c8cc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((int)param_2 < (int)*(uint *)(lVar3 + 0x18)) {
      if (*(uint *)(lVar3 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar3 = *(long *)(lVar3 + (long)(int)param_2 * 8 + 0x20);
      if (lVar3 != 0) {
        lVar1 = *(long *)(lVar3 + 0x18);
        if (lVar1 != 0) {
          iVar4 = 0;
          do {
            if (*(int *)(lVar1 + 0x18) <= iVar4) goto LAB_0414c8d0;
            lVar1 = FUN_057e0998(lVar1,iVar4,DAT_091b2ff8);
            if (lVar1 != 0) {
              if ((*(long *)(lVar3 + 0x18) == 0) ||
                 (lVar1 = FUN_057e0998(*(long *)(lVar3 + 0x18),iVar4,DAT_091b2ff8), lVar1 == 0))
              break;
              if (*(int *)(lVar1 + 0x10) == param_3) {
                if ((*(long *)(lVar3 + 0x18) == 0) ||
                   (lVar1 = FUN_057e0998(*(long *)(lVar3 + 0x18),iVar4,DAT_091b2ff8), lVar1 == 0))
                break;
                uVar5 = *(undefined8 *)(lVar1 + 0x18);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
                if ((uVar2 & 1) != 0) {
                  if ((*(long *)(lVar3 + 0x18) != 0) &&
                     (lVar3 = FUN_057e0998(*(long *)(lVar3 + 0x18),iVar4,DAT_091b2ff8), lVar3 != 0))
                  {
                    return *(undefined8 *)(lVar3 + 0x18);
                  }
                  break;
                }
              }
            }
            lVar1 = *(long *)(lVar3 + 0x18);
            iVar4 = iVar4 + 1;
          } while (lVar1 != 0);
        }
        goto LAB_0414c8cc;
      }
    }
  }
LAB_0414c8d0:
  uVar5 = AnhPD_FoodOrder_IceCreamScoopDisplay__SpriteOf(param_1,param_3);
  return uVar5;
}

