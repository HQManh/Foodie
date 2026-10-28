// rea decompile_all
// name: CookingGraph.CookingGraphIndex.<>c__DisplayClass29_2$$<Collapse>b__6
// address: 0x4488b0c
// body: available
// range: 0x4488b0c-0x4488cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4488cd8 to 0x4afbaec FUN_04afbaec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4488cdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingGraphIndex_<>c__DisplayClass29_2__<Collapse>b__6(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_095180fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca020);
    FUN_03f5c2a4(&DAT_091ca308);
    FUN_03f5c2a4(&DAT_091caa20);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_091785a0);
    FUN_03f5c2a4(&DAT_091e7200);
    FUN_03f5c2a4(&DAT_091e7408);
    FUN_03f5c2a4(&DAT_0918f178);
    DAT_095180fc = 1;
  }
  if (((param_2 != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar3 != 0)) {
    lVar5 = *(long *)(lVar3 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_03f9944c(DAT_091785a0);
      FUN_053239c8(lVar5,lVar3,DAT_091e7408,0);
      *(long *)(lVar3 + 0x40) = lVar5;
      thunk_FUN_03f5d7b8((long *)(lVar3 + 0x40),lVar5);
    }
    uVar2 = FUN_04af6d6c(uVar2,lVar5,DAT_091ca308);
    if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f178);
    }
    puVar1 = *(undefined8 **)(DAT_0918f178 + 0xb8);
    lVar3 = puVar1[0x24];
    if (lVar3 == 0) {
      if (*(int *)(DAT_0918f178 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f178);
        puVar1 = *(undefined8 **)(DAT_0918f178 + 0xb8);
      }
      uVar4 = *puVar1;
      lVar3 = thunk_FUN_03f9944c(DAT_09178bd0);
      FUN_05315cf4(lVar3,uVar4,DAT_091e7200,0);
      lVar5 = *(long *)(DAT_0918f178 + 0xb8);
      *(long *)(lVar5 + 0x120) = lVar3;
      thunk_FUN_03f5d7b8(lVar5 + 0x120,lVar3);
    }
    uVar2 = FUN_04aea844(uVar2,lVar3,DAT_091ca020);
    FUN_04afbaec(uVar2,*(undefined8 *)(param_1 + 0x18),DAT_091caa20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

