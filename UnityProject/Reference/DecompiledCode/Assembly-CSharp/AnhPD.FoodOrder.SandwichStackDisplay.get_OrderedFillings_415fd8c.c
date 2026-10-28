// rea decompile_all
// name: AnhPD.FoodOrder.SandwichStackDisplay$$get_OrderedFillings
// address: 0x415fd8c
// body: available
// range: 0x415fd8c-0x415ff13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415fe4c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x415ff10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_SandwichStackDisplay__get_OrderedFillings(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_09516529 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0710);
    FUN_03f5c2a4(&DAT_09175b58);
    FUN_03f5c2a4(&DAT_091804e0);
    FUN_03f5c2a4(&DAT_091ef788);
    FUN_03f5c2a4(&DAT_09194130);
    DAT_09516529 = 1;
  }
  plVar6 = (long *)(param_1 + 0x48);
  lVar2 = *plVar6;
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = System_Array__Clone(*(long *)(param_1 + 0x20),0);
    uVar7 = DAT_091804e0;
    if (lVar2 == 0) {
      lVar3 = 0;
      *plVar6 = 0;
    }
    else {
      lVar3 = thunk_FUN_03f99350(lVar2,DAT_091804e0);
      uVar1 = DAT_091804e0;
      if (lVar3 == 0) {
LAB_0415fe44:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar2,uVar7);
      }
      *plVar6 = lVar3;
      lVar3 = thunk_FUN_03f99350(lVar2,uVar1);
      uVar7 = uVar1;
      if (lVar3 == 0) goto LAB_0415fe44;
    }
    thunk_FUN_03f5d7b8(plVar6,lVar3);
    lVar2 = *plVar6;
    if (*(int *)(DAT_09194130 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09194130 + 0xb8);
    lVar3 = puVar5[1];
    if (lVar3 == 0) {
      if (*(int *)(DAT_09194130 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_09194130 + 0xb8);
      }
      uVar7 = *puVar5;
      lVar3 = thunk_FUN_03f9944c(DAT_09175b58);
      FUN_06d4541c(lVar3,uVar7,DAT_091ef788,0);
      plVar4 = (long *)(*(long *)(DAT_09194130 + 0xb8) + 8);
      *plVar4 = lVar3;
      thunk_FUN_03f5d7b8(plVar4,lVar3);
    }
    FUN_04950548(lVar2,lVar3,DAT_091c0710);
    lVar2 = *plVar6;
  }
  return lVar2;
}

