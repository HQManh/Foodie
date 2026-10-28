// rea decompile_all
// name: CookingGraph.IngredientQueueTranslator$$Serialize
// address: 0x442cb2c
// body: available
// range: 0x442cb2c-0x442cddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442cd70 to 0x74308f4 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x442cd8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442cdd4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442cdd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_IngredientQueueTranslator__Serialize(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09517f70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca520);
    FUN_03f5c2a4(&DAT_09178b18);
    FUN_03f5c2a4(&DAT_091af4b0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091eb9d8);
    FUN_03f5c2a4(&DAT_091917c8);
    FUN_03f5c2a4(&DAT_091f7250);
    FUN_03f5c2a4(&DAT_091f70a0);
    DAT_09517f70 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_0921a200);
    System_ArgumentNullException___ctor(uVar4,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091cfe40);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_091917c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = DAT_091f7250;
  puVar3 = *(undefined8 **)(DAT_091917c8 + 0xb8);
  lVar5 = puVar3[2];
  if (lVar5 == 0) {
    if (*(int *)(DAT_091917c8 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_091917c8 + 0xb8);
    }
    uVar6 = *puVar3;
    lVar5 = thunk_FUN_03f9944c(DAT_09178b18);
    FUN_05324070(lVar5,uVar6,DAT_091eb9d8,0);
    plVar1 = (long *)(*(long *)(DAT_091917c8 + 0xb8) + 0x10);
    *plVar1 = lVar5;
    thunk_FUN_03f5d7b8(plVar1,lVar5);
  }
  uVar4 = FUN_04af8044(uVar4,lVar5,DAT_091ca520);
  uVar4 = System_String__Join(uVar2,uVar4,0);
  if ((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 0x18) != 0)) {
    lVar5 = FUN_03f5c394(DAT_091805f8,5);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x20),uVar4);
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar5 + 0x28) = DAT_091f70a0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x28));
        uVar4 = CookingGraph_IngredientQueueTranslator__SerializeGroups
                          (*(undefined8 *)(param_1 + 0x18),0);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) = uVar4;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x30),uVar4);
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar5 + 0x38) = DAT_091f70a0;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x38));
            uVar4 = CookingGraph_IngredientQueueTranslator__SerializeGroups
                              (*(undefined8 *)(param_1 + 0x18),1);
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) = uVar4;
              thunk_FUN_03f5d7b8();
              uVar4 = System_String__Concat(lVar5,0);
              return uVar4;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  return uVar4;
}

