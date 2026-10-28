// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$GetActivePooledObjectCount
// address: 0x4501318
// body: available
// range: 0x4501318-0x450149b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4501478 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Utilities_ObjectPoolDictArray__GetActivePooledObjectCount(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((DAT_0951849d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d220);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951849d = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar7) {
        return iVar6;
      }
      uVar1 = FUN_05796eb0(lVar3,iVar7,DAT_091add20);
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar3 = FUN_06ef046c(*(long *)(param_1 + 0x28),uVar1,DAT_0919d220), lVar3 == 0)) break;
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar8 = 0;
        do {
          lVar4 = FUN_057e0998(lVar3,iVar8,DAT_091acd88);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar5 = UnityEngine_Object__op_Inequality(lVar4,0,0);
          if ((uVar5 & 1) != 0) {
            if (lVar4 == 0) goto LAB_04501478;
            uVar2 = UnityEngine_GameObject__get_activeInHierarchy(lVar4,0);
            iVar6 = iVar6 + (uVar2 & 1);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar3 + 0x18));
      }
      lVar3 = *(long *)(param_1 + 0x20);
      iVar7 = iVar7 + 1;
    } while (lVar3 != 0);
  }
LAB_04501478:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

