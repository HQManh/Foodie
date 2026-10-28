// rea decompile_all
// name: AnhPD.FoodOrder.RandomOrderLookup$$GetRandomListIngredientId
// address: 0x40b55a0
// body: available
// range: 0x40b55a0-0x40b570b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b5708 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_RandomOrderLookup__GetRandomListIngredientId(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09515f0d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09515f0d = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar4,DAT_091b0558);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_040b5708:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(int *)(*(long *)(param_1 + 0x10) + 0x18) != 0) &&
     (iVar2 = UnityEngine_Random__Range(1,4,0), 0 < iVar2)) {
    do {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) goto LAB_040b5708;
      uVar3 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar7 + 0x18),0);
      uVar5 = FUN_057e0998(lVar7,uVar3,DAT_091b0610);
      lVar7 = DAT_091b0570;
      if (lVar4 == 0) goto LAB_040b5708;
      lVar6 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_040b5708;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar4,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return lVar4;
}

