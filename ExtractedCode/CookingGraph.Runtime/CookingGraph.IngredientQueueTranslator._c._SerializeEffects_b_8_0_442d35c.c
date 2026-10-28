// rea decompile_all
// name: CookingGraph.IngredientQueueTranslator.<>c$$<SerializeEffects>b__8_0
// address: 0x442d35c
// body: available
// range: 0x442d35c-0x442d563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442d558 to 0x7425784 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x442d55c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442d560 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_IngredientQueueTranslator_<>c__<SerializeEffects>b__8_0
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_09517f79 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9670);
    FUN_03f5c2a4(&DAT_091ca590);
    FUN_03f5c2a4(&DAT_09178c00);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_091eb9e8);
    FUN_03f5c2a4(&DAT_091917c8);
    FUN_03f5c2a4(&DAT_091f6eb0);
    FUN_03f5c2a4(&DAT_091f9f58);
    DAT_09517f79 = 1;
  }
  lVar2 = FUN_03f5c394(DAT_091801b8,1);
  uVar5 = DAT_091f9f58;
  uVar1 = DAT_091f6eb0;
  if ((param_2 != 0) && (lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      lVar7 = *(long *)(param_2 + 0x18);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_2 + 0x10);
      if (lVar7 == 0) {
        lVar7 = thunk_FUN_03f9944c(DAT_0917c520);
        FUN_05796918(lVar7,DAT_091adc70);
      }
      uVar3 = FUN_04ad4310(lVar2,lVar7,DAT_091c9670);
      if (*(int *)(DAT_091917c8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091917c8);
      }
      puVar6 = *(undefined8 **)(DAT_091917c8 + 0xb8);
      lVar2 = puVar6[3];
      if (lVar2 == 0) {
        if (*(int *)(DAT_091917c8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091917c8);
          puVar6 = *(undefined8 **)(DAT_091917c8 + 0xb8);
        }
        uVar8 = *puVar6;
        lVar2 = thunk_FUN_03f9944c(DAT_09178c00);
        FUN_0531612c(lVar2,uVar8,DAT_091eb9e8,0);
        plVar4 = (long *)(*(long *)(DAT_091917c8 + 0xb8) + 0x18);
        *plVar4 = lVar2;
        thunk_FUN_03f5d7b8(plVar4,lVar2);
      }
      uVar3 = FUN_04af36b8(uVar3,lVar2,DAT_091ca590);
      uVar5 = System_String__Join(uVar5,uVar3,0);
      System_String__Concat(uVar1,uVar5,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

