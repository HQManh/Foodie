// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimpleTMP$$.cctor
// address: 0x43b33b8
// body: available
// range: 0x43b33b8-0x43b34b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b34b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurSimpleTMP___cctor(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09517b22 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188410);
    FUN_03f5c2a4(&DAT_09173088);
    FUN_03f5c2a4(&DAT_09170c80);
    FUN_03f5c2a4(&DAT_092252f0);
    DAT_09517b22 = 1;
  }
  uVar4 = DAT_09173088;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = System_Type__GetTypeFromHandle(uVar4,0);
  if ((lVar2 != 0) &&
     (plVar3 = (long *)System_Type__GetField(lVar2,DAT_092252f0,0), plVar3 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0x268))(plVar3,*(undefined8 *)(*plVar3 + 0x270));
    uVar5 = System_Type__GetTypeFromHandle(DAT_09170c80,0);
    bVar1 = System_Type__op_Equality(uVar4,uVar5,0);
    **(byte **)(DAT_09188410 + 0xb8) = bVar1 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

