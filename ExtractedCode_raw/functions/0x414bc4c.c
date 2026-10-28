// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamDecorLayout$$CanShow
// address: 0x414bc4c
// body: available
// range: 0x414bc4c-0x414be5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414be58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IceCreamDecorLayout__CanShow(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((DAT_09516451 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2fc0);
    FUN_03f5c2a4(&DAT_091b2f90);
    FUN_03f5c2a4(&DAT_091b2fa8);
    FUN_03f5c2a4(&DAT_091b2f98);
    FUN_03f5c2a4(&DAT_091b2fb0);
    FUN_03f5c2a4(&DAT_091b2fc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516451 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar1 + 0x18) <= iVar4) {
        lVar1 = *(long *)(param_1 + 0x28);
        if (lVar1 != 0) {
          iVar4 = 0;
          goto LAB_0414bdc8;
        }
        break;
      }
      lVar1 = FUN_057e0998(lVar1,iVar4,DAT_091b2f98);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) == param_2)) {
        lVar2 = *(long *)(lVar1 + 0x18);
        if (lVar2 == 0) break;
        iVar5 = 0;
        while (iVar5 < *(int *)(lVar2 + 0x18)) {
          lVar2 = FUN_057e0998(lVar2,iVar5,DAT_091b2fc8);
          if (lVar2 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(lVar2 + 0x10);
          }
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar3 & 1) != 0) {
            return true;
          }
          lVar2 = *(long *)(lVar1 + 0x18);
          iVar5 = iVar5 + 1;
          if (lVar2 == 0) goto LAB_0414be58;
        }
      }
      lVar1 = *(long *)(param_1 + 0x20);
      iVar4 = iVar4 + 1;
    } while (lVar1 != 0);
  }
  goto LAB_0414be58;
LAB_0414bdc8:
  do {
    iVar5 = *(int *)(lVar1 + 0x18);
    if (iVar5 <= iVar4) {
      return iVar4 < iVar5;
    }
    lVar1 = FUN_057e0998(lVar1,iVar4,DAT_091b2fb0);
    if (lVar1 != 0) {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar1 = FUN_057e0998(*(long *)(param_1 + 0x28),iVar4,DAT_091b2fb0), lVar1 == 0)) break;
      if (*(int *)(lVar1 + 0x10) == param_2) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar1 = FUN_057e0998(*(long *)(param_1 + 0x28),iVar4,DAT_091b2fb0), lVar1 == 0)) break;
        uVar6 = *(undefined8 *)(lVar1 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar3 & 1) != 0) {
          return iVar4 < iVar5;
        }
      }
    }
    lVar1 = *(long *)(param_1 + 0x28);
    iVar4 = iVar4 + 1;
  } while (lVar1 != 0);
LAB_0414be58:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

