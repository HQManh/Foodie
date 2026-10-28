// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$PruneWaves
// address: 0x449cca8
// body: available
// range: 0x449cca8-0x449ceeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449cee0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449cee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449cee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__PruneWaves(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_095181cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6440);
    FUN_03f5c2a4(&DAT_091a5090);
    FUN_03f5c2a4(&DAT_091a5098);
    FUN_03f5c2a4(&DAT_091a50a0);
    FUN_03f5c2a4(&DAT_091b2478);
    FUN_03f5c2a4(&DAT_091b2410);
    FUN_03f5c2a4(&DAT_091b2480);
    FUN_03f5c2a4(&DAT_0917e148);
    FUN_03f5c2a4(&DAT_0917e138);
    FUN_03f5c2a4(&DAT_091e6c58);
    FUN_03f5c2a4(&DAT_0918ef00);
    DAT_095181cc = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_057e185c(&local_98,*(long *)(param_1 + 0x40),DAT_091b2478);
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
    while (uVar1 = FUN_071bd28c(&local_80,DAT_091a5098), (uVar1 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(local_70 + 0x38);
      uVar2 = thunk_FUN_03f9944c(DAT_0917e138);
      FUN_05d78cfc(uVar2,param_1,DAT_091c6440,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e23b0(lVar5,uVar2,DAT_091b2410);
    }
    FUN_071bd288(&local_80,DAT_091a5090);
    lVar5 = *(long *)(param_1 + 0x40);
    if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
    lVar6 = puVar4[0xc];
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
      }
      uVar2 = *puVar4;
      lVar6 = thunk_FUN_03f9944c(DAT_0917e148);
      FUN_05d78cfc(lVar6,uVar2,DAT_091e6c58,0);
      plVar3 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x60);
      *plVar3 = lVar6;
      thunk_FUN_03f5d7b8(plVar3,lVar6);
    }
    if (lVar5 != 0) {
      FUN_057e23b0(lVar5,lVar6,DAT_091b2480);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

