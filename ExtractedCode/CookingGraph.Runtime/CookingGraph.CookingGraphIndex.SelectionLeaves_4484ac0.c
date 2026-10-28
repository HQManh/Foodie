// rea decompile_all
// name: CookingGraph.CookingGraphIndex$$SelectionLeaves
// address: 0x4484ac0
// body: available
// range: 0x4484ac0-0x4484d4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4484d04 to 0x4af6d6c FUN_04af6d6c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4484d48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4484d4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingGraphIndex__SelectionLeaves(long param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_095180c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9c40);
    FUN_03f5c2a4(&DAT_091ca8f8);
    FUN_03f5c2a4(&DAT_091ca308);
    FUN_03f5c2a4(&DAT_091785c8);
    FUN_03f5c2a4(&DAT_091785a0);
    FUN_03f5c2a4(&DAT_09178588);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091e7280);
    FUN_03f5c2a4(&DAT_091e73c0);
    FUN_03f5c2a4(&DAT_091e73c8);
    FUN_03f5c2a4(&DAT_0918f228);
    FUN_03f5c2a4(&DAT_0918f178);
    DAT_095180c0 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f228);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    lVar3 = *(long *)(param_1 + 0x88);
    *(undefined4 *)(lVar1 + 0x18) = param_2;
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x88);
      if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined8 **)(DAT_0918f178 + 0xb8);
      lVar3 = puVar4[0x1c];
      if (lVar3 == 0) {
        if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar4 = *(undefined8 **)(DAT_0918f178 + 0xb8);
        }
        uVar6 = *puVar4;
        lVar3 = thunk_FUN_03f9944c(DAT_09178588);
        FUN_05324070(lVar3,uVar6,DAT_091e7280,0);
        plVar2 = (long *)(*(long *)(DAT_0918f178 + 0xb8) + 0xe0);
        *plVar2 = lVar3;
        thunk_FUN_03f5d7b8(plVar2,lVar3);
      }
      uVar5 = FUN_04afac50(uVar5,lVar3,DAT_091ca8f8);
      uVar6 = thunk_FUN_03f9944c(DAT_091785c8);
      FUN_05322d94(uVar6,lVar1,DAT_091e73c0,0);
      lVar3 = FUN_04ae5fd0(uVar5,uVar6,DAT_091c9c40);
      if (lVar3 != 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x18);
        uVar5 = thunk_FUN_03f9944c(DAT_091785a0);
        FUN_053239c8(uVar5,lVar1,DAT_091e73c8,0);
        FUN_04af6d6c(uVar6,uVar5,DAT_091ca308);
        return;
      }
      lVar3 = FUN_03f5c394(DAT_091801b8,1);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar1 + 0x18);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

