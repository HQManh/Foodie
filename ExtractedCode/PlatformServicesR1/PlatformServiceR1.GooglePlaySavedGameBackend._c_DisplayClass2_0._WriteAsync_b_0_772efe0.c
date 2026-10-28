// rea decompile_all
// name: PlatformServiceR1.GooglePlaySavedGameBackend.<>c__DisplayClass2_0$$<WriteAsync>b__0
// address: 0x772efe0
// body: available
// range: 0x772efe0-0x772f1d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x772f0d4 to 0x6439934 FUN_06439934 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x772f1c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772f1c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772f1d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void PlatformServiceR1_GooglePlaySavedGameBackend_<>c__DisplayClass2_0__<WriteAsync>b__0
               (long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int local_24;
  
  if ((DAT_09522a62 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918a5d0);
    FUN_03f5c2a4(&DAT_091bdcc0);
    FUN_03f5c2a4(&DAT_092037a8);
    FUN_03f5c2a4(&DAT_09203790);
    DAT_09522a62 = 1;
  }
  if (param_2 == 1) {
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
      *puVar1 = param_3;
      thunk_FUN_03f5d7b8(puVar1,param_3);
      if (DAT_09522a98 == '\0') {
        FUN_03f5c2a4(&DAT_091891d8);
        DAT_09522a98 = '\x01';
      }
      if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
        EssentialSystemR1_R1Logger__Log(**(long **)(DAT_091891d8 + 0xb8),DAT_09203790,0);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_06439934(*(long *)(param_1 + 0x18),1,DAT_091bdcc0);
        return;
      }
    }
  }
  else {
    if (DAT_09522a98 == '\0') {
      FUN_03f5c2a4(&DAT_091891d8);
      DAT_09522a98 = '\x01';
    }
    lVar6 = **(long **)(DAT_091891d8 + 0xb8);
    if (lVar6 != 0) {
      plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
      local_24 = param_2;
      lVar3 = FUN_03f5c42c(DAT_0918a5d0,&local_24);
      if (plVar2 == (long *)0x0) goto LAB_0772f1c0;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,0);
      }
      if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2[4] = lVar3;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
      EssentialSystemR1_R1Logger__LogErrorFormat(lVar6,DAT_092037a8,plVar2,0);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_06439934(*(long *)(param_1 + 0x18),0,DAT_091bdcc0);
      return;
    }
  }
LAB_0772f1c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

